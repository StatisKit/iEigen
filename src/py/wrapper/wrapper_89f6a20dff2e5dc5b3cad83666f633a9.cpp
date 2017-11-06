#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > const volatile * get_pointer<struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > const volatile >(struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_89f6a20dff2e5dc5b3cad83666f633a9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    std::string name_341671b558cc548b8e47e7bfc1befff8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".internal");
    boost::python::object module_341671b558cc548b8e47e7bfc1befff8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_341671b558cc548b8e47e7bfc1befff8.c_str()))));
    boost::python::scope().attr("internal") = module_341671b558cc548b8e47e7bfc1befff8;
    boost::python::scope scope_341671b558cc548b8e47e7bfc1befff8 = module_341671b558cc548b8e47e7bfc1befff8;
    void  (::Eigen::internal::special_scalar_op_base< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, ::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false >::*method_pointer_08c7f27518255b568389bed6b29e35d3)() const = &::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false >::operator*;
    boost::python::class_< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false >, autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > > > class_89f6a20dff2e5dc5b3cad83666f633a9("_SpecialScalarOpBase_89f6a20dff2e5dc5b3cad83666f633a9", "", boost::python::no_init);
    class_89f6a20dff2e5dc5b3cad83666f633a9.def("__mul__", method_pointer_08c7f27518255b568389bed6b29e35d3, "");

    if(autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, double, double, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, false > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > >::Type >();
    }

}