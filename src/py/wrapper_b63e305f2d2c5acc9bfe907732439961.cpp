#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6edadd3518965eaf89370dc4bb81e9b4(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_09553e1c947c5c7685e366a48f6126bc(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_b63e305f2d2c5acc9bfe907732439961()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_6edadd3518965eaf89370dc4bb81e9b4)(class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_09553e1c947c5c7685e366a48f6126bc)(class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > > > class_b63e305f2d2c5acc9bfe907732439961("_JacobiSVD_b63e305f2d2c5acc9bfe907732439961", "", boost::python::no_init);
    class_b63e305f2d2c5acc9bfe907732439961.def("compute", method_pointer_6edadd3518965eaf89370dc4bb81e9b4, boost::python::return_internal_reference<>(), "");
    class_b63e305f2d2c5acc9bfe907732439961.def("compute", autowig::method_decorator_6edadd3518965eaf89370dc4bb81e9b4);
    class_b63e305f2d2c5acc9bfe907732439961.def("compute", method_pointer_09553e1c947c5c7685e366a48f6126bc, boost::python::return_internal_reference<>(), "");
    class_b63e305f2d2c5acc9bfe907732439961.def("compute", autowig::method_decorator_09553e1c947c5c7685e366a48f6126bc);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > > >();
    }

}