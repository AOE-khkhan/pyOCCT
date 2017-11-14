#include <pybind11/pybind11.h>
namespace py = pybind11;

#include <Standard_Handle.hxx>
PYBIND11_DECLARE_HOLDER_TYPE(T, opencascade::handle<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
using opencascade::handle;

// Deleter template for mixed holder types with public/hidden destructors.
template<typename T> struct Deleter { void operator() (T *o) const { delete o; } };

#include <Standard_TypeDef.hxx>
#include <Standard_Handle.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <UnitsMethods.hxx>

PYBIND11_MODULE(UnitsMethods, mod) {

	// IMPORT
	py::module::import("OCCT.Standard");
	py::module::import("OCCT.Geom2d");
	py::module::import("OCCT.Geom");

	py::module other_mod;

	// IMPORT GUARDS

	// ENUMS

	// FUNCTIONS

	// CLASSES
	// C:\Miniconda\envs\occt\Library\include\opencascade\UnitsMethods.hxx
	py::class_<UnitsMethods, std::unique_ptr<UnitsMethods, Deleter<UnitsMethods>>> cls_UnitsMethods(mod, "UnitsMethods", "None");
	cls_UnitsMethods.def(py::init<>());
	cls_UnitsMethods.def_static("InitializeFactors_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Real)) &UnitsMethods::InitializeFactors, "Initializes the 3 factors for the conversion of units", py::arg("LengthFactor"), py::arg("PlaneAngleFactor"), py::arg("SolidAngleFactor"));
	cls_UnitsMethods.def_static("LengthFactor_", (Standard_Real (*)()) &UnitsMethods::LengthFactor, "None");
	cls_UnitsMethods.def_static("PlaneAngleFactor_", (Standard_Real (*)()) &UnitsMethods::PlaneAngleFactor, "None");
	cls_UnitsMethods.def_static("SolidAngleFactor_", (Standard_Real (*)()) &UnitsMethods::SolidAngleFactor, "None");
	cls_UnitsMethods.def_static("Set3dConversion_", (void (*)(const Standard_Boolean)) &UnitsMethods::Set3dConversion, "None", py::arg("B"));
	cls_UnitsMethods.def_static("Convert3d_", (Standard_Boolean (*)()) &UnitsMethods::Convert3d, "None");
	cls_UnitsMethods.def_static("RadianToDegree_", (opencascade::handle<Geom2d_Curve> (*)(const opencascade::handle<Geom2d_Curve> &, const opencascade::handle<Geom_Surface> &)) &UnitsMethods::RadianToDegree, "None", py::arg("C"), py::arg("S"));
	cls_UnitsMethods.def_static("DegreeToRadian_", (opencascade::handle<Geom2d_Curve> (*)(const opencascade::handle<Geom2d_Curve> &, const opencascade::handle<Geom_Surface> &)) &UnitsMethods::DegreeToRadian, "None", py::arg("C"), py::arg("S"));
	cls_UnitsMethods.def_static("MirrorPCurve_", (opencascade::handle<Geom2d_Curve> (*)(const opencascade::handle<Geom2d_Curve> &)) &UnitsMethods::MirrorPCurve, "None", py::arg("C"));
	cls_UnitsMethods.def_static("GetLengthFactorValue_", (Standard_Real (*)(const Standard_Integer)) &UnitsMethods::GetLengthFactorValue, "Returns value of unit encoded by parameter param (integer value denoting unit, as described in IGES standard) in millimeters", py::arg("param"));
	cls_UnitsMethods.def_static("GetCasCadeLengthUnit_", (Standard_Real (*)()) &UnitsMethods::GetCasCadeLengthUnit, "Returns value of current internal unit for CASCADE in millemeters");
	cls_UnitsMethods.def_static("SetCasCadeLengthUnit_", (void (*)(const Standard_Integer)) &UnitsMethods::SetCasCadeLengthUnit, "Sets value of current internal unit for CASCADE by parameter param (integer value denoting unit, as described in IGES standard) GetCasCadeLengthUnit() will then return value equal to GetLengthFactorValue(param)", py::arg("param"));


}
