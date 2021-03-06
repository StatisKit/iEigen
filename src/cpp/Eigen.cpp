#include "Eigen.h"

namespace statiskit 
{
	namespace linalg 
	{

		Matrix solve(const Matrix& A, const Matrix& b, const solver_type& solver)
		{
			Matrix x;
			switch(solver)
			{
				case partialPivLu:
					x = A.partialPivLu().solve(b);
					break;
				case fullPivLu:
					x = A.fullPivLu().solve(b);
					break;
				case householderQr:
					x = A.householderQr().solve(b);
					break;
				case colPivHouseholderQr:
					x = A.colPivHouseholderQr().solve(b);
					break;
				case fullPivHouseholderQr:
					x = A.fullPivHouseholderQr().solve(b);
					break;
				case llt:
					x = A.llt().solve(b);
					break;
				case ldlt:
					x = A.ldlt().solve(b);
					break;
				case jacobiSvd:
					x = A.jacobiSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(b);
					break;
			}
			return x;
		}

		Matrix inverse(const Matrix& A, const solver_type& solver)
		{
			Matrix B, I = Eigen::VectorXd::Ones(A.rows()).asDiagonal();
			switch(solver)
			{
				case partialPivLu:
					B = A.partialPivLu().solve(I);
					break;
				case fullPivLu:
					B = A.fullPivLu().solve(I);
					break;
				case householderQr:
					B = A.householderQr().solve(I);
					break;
				case colPivHouseholderQr:
					B = A.colPivHouseholderQr().solve(I);
					break;
				case fullPivHouseholderQr:
					B = A.fullPivHouseholderQr().solve(I);
					break;
				case llt:
					B = A.llt().solve(I);
					break;
				case ldlt:
					B = A.ldlt().solve(I);
					break;
				case jacobiSvd:
					B = A.jacobiSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(I);
					break;
			}
			return B;
		}

		Vector solve(const Matrix& A, const Vector& b, const solver_type& solver)
		{
			Vector x;
			switch(solver)
			{
				case partialPivLu:
					x = A.partialPivLu().solve(b);
					break;
				case fullPivLu:
					x = A.fullPivLu().solve(b);
					break;
				case householderQr:
					x = A.householderQr().solve(b);
					break;
				case colPivHouseholderQr:
					x = A.colPivHouseholderQr().solve(b);
					break;
				case fullPivHouseholderQr:
					x = A.fullPivHouseholderQr().solve(b);
					break;
				case llt:
					x = A.llt().solve(b);
					break;
				case ldlt:
					x = A.ldlt().solve(b);
					break;
				case jacobiSvd:
					x = A.jacobiSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(b);
					break;
			}
			return x;
		}
	}
}