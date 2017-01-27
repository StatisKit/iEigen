# -*-python-*-

import os
from SCons.Errors import EnvironmentError

env = Environment(tools = ['toolchain'])

SOLVER = ['partialPivLu',
	      'fullPivLu',
	      'householderQr',
	      'colPivHouseholderQr',
	      'fullPivHouseholderQr',
	      'llt',
	      'ldlt',
	      'jacobiSvd']
SIZE = ['2', '3', '4', 'X']
ELT = ['i', 'f', 'd', 'cf', 'cd']
OBJ = ['Matrix', 'Vector', 'RowVector']

with open('src/cpp/base.h', 'w') as filehandler:
	filehandler.write("""#ifndef IEGEN_H
#define IEGEN_H

#include <eigen3/Eigen/Dense>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBIEIGEN
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllexport))
      #define IEIGEN_IMP
    #else
      #define IEIGEN_API __declspec(dllexport)
      #define IEIGEN_IMP
    #endif
  #else
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllimport))
      #define IEIGEN_IMP extern
    #else
      #define IEIGEN_API __declspec(dllimport)
      #define IEIGEN_IMP extern
    #endif
  #endif
  #define DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define IEIGEN_API __attribute__ ((visibility ("default")))
  #else
    #define IEIGEN_API
  #endif
  #ifdef LIBIEIGEN
    #define IEIGEN_IMP
  #else
    #define IEIGEN_IMP extern
  #endif
#endif

namespace ieigen
{
""")
	for size in SIZE:
		for elt in ELT:
			for obj in OBJ:
				typedef = []
				coef = 2 if obj == 'Matrix' else 1
				if elt == 'i':
					typedef.append('int')
				elif elt == 'f':
					typedef.append('float')
				elif elt == 'd':
					typedef.append('double')
				elif elt == 'cf':
					typedef.append('std::complex<float>')
				elif elt == 'cd':
					typedef.append('std::complex<double>')
				if obj == 'RowVector':
					typedef.extend(['1'])
				if size == 'X':
					typedef.extend(['Eigen::Dynamic'] * coef)
				else:
					typedef.extend([size] * coef)
				if obj == 'Vector':
					typedef.extend(['1'])
				filehandler.write('\t// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< ' + ', '.join(typedef) + ' >;\n')
				filehandler.write('\ttypedef Eigen::Matrix< ' + ', '.join(typedef) + ' > ' + obj + size + elt + ';\n')
				if not elt == 'i':
					if obj == 'Matrix':
						for solver in SOLVER:
							if solver in ['llt', 'ldlt']:
								solver = solver.upper()
							else:
								solver = solver[0].upper() + solver[1:]
								if solver.endswith('Svd'):
									solver = solver[:-3] + 'SVD'
								else:
									solver = solver[:-1] + solver[-1].upper()
							filehandler.write('\t// IEIGEN_IMP template class IEIGEN_API Eigen::' + solver + '< Eigen::Matrix< ' + ', '.join(typedef) + ' > >;\n')
							filehandler.write('\ttypedef Eigen::' + solver + '< Eigen::Matrix< ' + ', '.join(typedef) + ' > > ' + solver + obj + size + elt + ';\n')

		filehandler.write('\n')
	filehandler.write('\n')
	filehandler.write('\tenum solver_type {\n')
	for solver in SOLVER:
		filehandler.write('\t\t' + solver + ',\n')
	filehandler.write('\t};\n\n')
	for size in SIZE:
		for elt in ELT:
			if not elt in ['i']:
				filehandler.write('\tIEIGEN_API Vector' + size + elt + ' solve(const Matrix' + size + elt + '& A, const Vector' + size + elt + '& b, const solver_type& solver);\n')
				filehandler.write('\tIEIGEN_API Matrix' + size + elt + ' solve(const Matrix' + size + elt + '& A, const Matrix' + size + elt + '& b, const solver_type& solver);\n')
	filehandler.write('}\n\n#endif')

for size in SIZE:
	for elt in ELT:
		if not elt in ['i']:
			for obj in ['Matrix', 'Vector']:
				with open('src/cpp/solve_' + obj.lower() + '_' + size.lower() + elt + '.cpp', 'w') as filehandler:
					filehandler.write('#include "base.h"\n\n')
					filehandler.write('namespace ieigen\n{')
					filehandler.write('\n\t' + obj + size + elt + ' solve(const Matrix' + size + elt + '& A, const ' + obj + size + elt + '& b, const solver_type& solver)\n')
					filehandler.write('\t{\n')
					filehandler.write('\t\t' + obj + size + elt + ' x;\n')
					filehandler.write('\t\tswitch(solver)\n\t\t{\n')
					for solver in SOLVER:
						filehandler.write('\t\t\tcase ' + solver + ':\n')
						filehandler.write('\t\t\t\tx = A.' + solver + '().solve(b);\n')
						filehandler.write('\t\t\t\tbreak;\n')
					filehandler.write('\t\t}\n\t\treturn x;\n')
					filehandler.write('\t}\n')
					filehandler.write('}')

VariantDir('build', 'src')
try:
  SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise
try:
  SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise

Default("install")