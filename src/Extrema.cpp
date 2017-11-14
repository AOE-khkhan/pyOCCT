#include <pybind11/pybind11.h>
namespace py = pybind11;

#include <Standard_Handle.hxx>
PYBIND11_DECLARE_HOLDER_TYPE(T, opencascade::handle<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
using opencascade::handle;

// Deleter template for mixed holder types with public/hidden destructors.
template<typename T> struct Deleter { void operator() (T *o) const { delete o; } };

#include <Extrema_ExtFlag.hxx>
#include <Extrema_ExtAlgo.hxx>
#include <Standard_TypeDef.hxx>
#include <Adaptor3d_Curve.hxx>
#include <GeomAbs_Shape.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <Standard_Handle.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <GeomAbs_CurveType.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_POnCurv.hxx>
#include <Extrema_ECC.hxx>
#include <NCollection_BaseSequence.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_Sequence.hxx>
#include <Extrema_SequenceOfPOnCurv.hxx>
#include <Extrema_ExtElC.hxx>
#include <Extrema_ExtCC.hxx>
#include <NCollection_Array1.hxx>
#include <Extrema_Array1OfPOnCurv.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Type.hxx>
#include <Extrema_HArray1OfPOnCurv.hxx>
#include <Extrema_POnSurf.hxx>
#include <Extrema_Array1OfPOnSurf.hxx>
#include <Extrema_HArray1OfPOnSurf.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Extrema_ExtElCS.hxx>
#include <Extrema_SequenceOfPOnSurf.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Extrema_ExtCS.hxx>
#include <Extrema_ExtElSS.hxx>
#include <Extrema_ExtSS.hxx>
#include <Extrema_ExtPElC.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#include <Extrema_EPCOfExtPC.hxx>
#include <Extrema_ExtPC.hxx>
#include <Extrema_ExtPElS.hxx>
#include <Extrema_ElementType.hxx>
#include <Extrema_POnSurfParams.hxx>
#include <NCollection_Array2.hxx>
#include <Extrema_Array2OfPOnSurfParams.hxx>
#include <Extrema_HArray2OfPOnSurfParams.hxx>
#include <NCollection_UBTree.hxx>
#include <Extrema_HUBTreeOfSphere.hxx>
#include <NCollection_UBTreeFiller.hxx>
#include <Standard_OStream.hxx>
#include <NCollection_Handle.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Vector.hxx>
#include <math_Matrix.hxx>
#include <Extrema_FuncPSNorm.hxx>
#include <Extrema_GenExtPS.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <Extrema_ExtPS.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx>
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_ELPCOfLocateExtPC.hxx>
#include <Extrema_LocateExtPC.hxx>
#include <Extrema_LocateExtCC.hxx>
#include <gp_Pnt2d.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <Extrema_Array1OfPOnCurv2d.hxx>
#include <Extrema_Array2OfPOnCurv.hxx>
#include <Extrema_Array2OfPOnCurv2d.hxx>
#include <Extrema_Array2OfPOnSurf.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <Extrema_SequenceOfPOnCurv2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <Extrema_ECC2d.hxx>
#include <Extrema_ExtPElC2d.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_ELPCOfLocateExtPC2d.hxx>
#include <Extrema_PCFOfEPCOfExtPC2d.hxx>
#include <Extrema_EPCOfExtPC2d.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ExtCC2d.hxx>
#include <Extrema_ExtPC2d.hxx>
#include <Extrema_FuncExtCS.hxx>
#include <Extrema_FuncExtSS.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Extrema_FuncPSDist.hxx>
#include <Extrema_GenExtCS.hxx>
#include <Extrema_GenExtSS.hxx>
#include <Extrema_GenLocateExtCS.hxx>
#include <Extrema_GenLocateExtPS.hxx>
#include <Extrema_GenLocateExtSS.hxx>
#include <math_MultipleVarFunction.hxx>
#include <Extrema_GlobOptFuncCC.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <Extrema_GlobOptFuncCS.hxx>
#include <Extrema_HArray1OfPOnCurv2d.hxx>
#include <Extrema_HArray2OfPOnCurv.hxx>
#include <Extrema_HArray2OfPOnCurv2d.hxx>
#include <Extrema_HArray2OfPOnSurf.hxx>
#include <Extrema_LocateExtCC2d.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx>
#include <Extrema_LocEPCOfLocateExtPC2d.hxx>
#include <Extrema_LocateExtPC2d.hxx>
#include <Extrema_LocECC.hxx>
#include <Extrema_LocECC2d.hxx>

PYBIND11_MODULE(Extrema, mod) {

	// IMPORT
	py::module::import("OCCT.Standard");
	py::module::import("OCCT.Adaptor3d");
	py::module::import("OCCT.GeomAbs");
	py::module::import("OCCT.TColStd");
	py::module::import("OCCT.gp");
	py::module::import("OCCT.Geom");
	py::module::import("OCCT.NCollection");
	py::module::import("OCCT.math");
	py::module::import("OCCT.GeomAdaptor");
	py::module::import("OCCT.Adaptor2d");
	py::module::import("OCCT.Geom2d");

	py::module other_mod;

	// IMPORT GUARDS

	// ENUMS
	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtFlag.hxx
	py::enum_<Extrema_ExtFlag>(mod, "Extrema_ExtFlag", "None")
		.value("Extrema_ExtFlag_MIN", Extrema_ExtFlag::Extrema_ExtFlag_MIN)
		.value("Extrema_ExtFlag_MAX", Extrema_ExtFlag::Extrema_ExtFlag_MAX)
		.value("Extrema_ExtFlag_MINMAX", Extrema_ExtFlag::Extrema_ExtFlag_MINMAX)
		.export_values();
	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtAlgo.hxx
	py::enum_<Extrema_ExtAlgo>(mod, "Extrema_ExtAlgo", "None")
		.value("Extrema_ExtAlgo_Grad", Extrema_ExtAlgo::Extrema_ExtAlgo_Grad)
		.value("Extrema_ExtAlgo_Tree", Extrema_ExtAlgo::Extrema_ExtAlgo_Tree)
		.export_values();
	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ElementType.hxx
	py::enum_<Extrema_ElementType>(mod, "Extrema_ElementType", "None")
		.value("Extrema_Node", Extrema_ElementType::Extrema_Node)
		.value("Extrema_UIsoEdge", Extrema_ElementType::Extrema_UIsoEdge)
		.value("Extrema_VIsoEdge", Extrema_ElementType::Extrema_VIsoEdge)
		.value("Extrema_Face", Extrema_ElementType::Extrema_Face)
		.export_values();

	// FUNCTIONS

	// CLASSES
	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_CurveTool.hxx
	py::class_<Extrema_CurveTool, std::unique_ptr<Extrema_CurveTool, Deleter<Extrema_CurveTool>>> cls_Extrema_CurveTool(mod, "Extrema_CurveTool", "None");
	cls_Extrema_CurveTool.def(py::init<>());
	cls_Extrema_CurveTool.def_static("FirstParameter_", (Standard_Real (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::FirstParameter, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("LastParameter_", (Standard_Real (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::LastParameter, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Continuity_", (GeomAbs_Shape (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Continuity, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("NbIntervals_", (Standard_Integer (*)(Adaptor3d_Curve &, const GeomAbs_Shape)) &Extrema_CurveTool::NbIntervals, "Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>", py::arg("C"), py::arg("S"));
	cls_Extrema_CurveTool.def_static("Intervals_", (void (*)(Adaptor3d_Curve &, TColStd_Array1OfReal &, const GeomAbs_Shape)) &Extrema_CurveTool::Intervals, "Stores in <T> the parameters bounding the intervals of continuity <S>.", py::arg("C"), py::arg("T"), py::arg("S"));
	cls_Extrema_CurveTool.def_static("DeflCurvIntervals_", (opencascade::handle<TColStd_HArray1OfReal> (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::DeflCurvIntervals, "Returns the parameters bounding the intervals of subdivision of curve according to Curvature deflection. Value of deflection is defined in method.", py::arg("C"));
	cls_Extrema_CurveTool.def_static("IsPeriodic_", (Standard_Boolean (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::IsPeriodic, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Period_", (Standard_Real (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Period, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Resolution_", (Standard_Real (*)(const Adaptor3d_Curve &, const Standard_Real)) &Extrema_CurveTool::Resolution, "None", py::arg("C"), py::arg("R3d"));
	cls_Extrema_CurveTool.def_static("GetType_", (GeomAbs_CurveType (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::GetType, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Value_", (gp_Pnt (*)(const Adaptor3d_Curve &, const Standard_Real)) &Extrema_CurveTool::Value, "None", py::arg("C"), py::arg("U"));
	cls_Extrema_CurveTool.def_static("D0_", (void (*)(const Adaptor3d_Curve &, const Standard_Real, gp_Pnt &)) &Extrema_CurveTool::D0, "None", py::arg("C"), py::arg("U"), py::arg("P"));
	cls_Extrema_CurveTool.def_static("D1_", (void (*)(const Adaptor3d_Curve &, const Standard_Real, gp_Pnt &, gp_Vec &)) &Extrema_CurveTool::D1, "None", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V"));
	cls_Extrema_CurveTool.def_static("D2_", (void (*)(const Adaptor3d_Curve &, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &)) &Extrema_CurveTool::D2, "None", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V1"), py::arg("V2"));
	cls_Extrema_CurveTool.def_static("D3_", (void (*)(const Adaptor3d_Curve &, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &)) &Extrema_CurveTool::D3, "None", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V1"), py::arg("V2"), py::arg("V3"));
	cls_Extrema_CurveTool.def_static("DN_", (gp_Vec (*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Integer)) &Extrema_CurveTool::DN, "None", py::arg("C"), py::arg("U"), py::arg("N"));
	cls_Extrema_CurveTool.def_static("Line_", (gp_Lin (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Line, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Circle_", (gp_Circ (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Circle, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Ellipse_", (gp_Elips (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Ellipse, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Hyperbola_", (gp_Hypr (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Hyperbola, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Parabola_", (gp_Parab (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Parabola, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Degree_", (Standard_Integer (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Degree, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("IsRational_", (Standard_Boolean (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::IsRational, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("NbPoles_", (Standard_Integer (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::NbPoles, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("NbKnots_", (Standard_Integer (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::NbKnots, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("Bezier_", (opencascade::handle<Geom_BezierCurve> (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::Bezier, "None", py::arg("C"));
	cls_Extrema_CurveTool.def_static("BSpline_", (opencascade::handle<Geom_BSplineCurve> (*)(const Adaptor3d_Curve &)) &Extrema_CurveTool::BSpline, "None", py::arg("C"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_POnCurv.hxx
	py::class_<Extrema_POnCurv, std::unique_ptr<Extrema_POnCurv, Deleter<Extrema_POnCurv>>> cls_Extrema_POnCurv(mod, "Extrema_POnCurv", "None");
	cls_Extrema_POnCurv.def(py::init<>());
	cls_Extrema_POnCurv.def(py::init<const Standard_Real, const gp_Pnt &>(), py::arg("U"), py::arg("P"));
	cls_Extrema_POnCurv.def("SetValues", (void (Extrema_POnCurv::*)(const Standard_Real, const gp_Pnt &)) &Extrema_POnCurv::SetValues, "sets the point and parameter values.", py::arg("U"), py::arg("P"));
	cls_Extrema_POnCurv.def("Value", (const gp_Pnt & (Extrema_POnCurv::*)() const ) &Extrema_POnCurv::Value, "Returns the point.");
	cls_Extrema_POnCurv.def("Parameter", (Standard_Real (Extrema_POnCurv::*)() const ) &Extrema_POnCurv::Parameter, "Returns the parameter on the curve.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ECC.hxx
	py::class_<Extrema_ECC, std::unique_ptr<Extrema_ECC, Deleter<Extrema_ECC>>> cls_Extrema_ECC(mod, "Extrema_ECC", "None");
	cls_Extrema_ECC.def(py::init<>());
	cls_Extrema_ECC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ECC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"));
	cls_Extrema_ECC.def("SetParams", (void (Extrema_ECC::*)(const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ECC::SetParams, "Set params in case of empty constructor is usage.", py::arg("C1"), py::arg("C2"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"));
	cls_Extrema_ECC.def("SetTolerance", (void (Extrema_ECC::*)(const Standard_Real)) &Extrema_ECC::SetTolerance, "None", py::arg("Tol"));
	cls_Extrema_ECC.def("SetSingleSolutionFlag", (void (Extrema_ECC::*)(const Standard_Boolean)) &Extrema_ECC::SetSingleSolutionFlag, "Set flag for single extrema computation. Works on parametric solver only.", py::arg("theSingleSolutionFlag"));
	cls_Extrema_ECC.def("GetSingleSolutionFlag", (Standard_Boolean (Extrema_ECC::*)() const ) &Extrema_ECC::GetSingleSolutionFlag, "Get flag for single extrema computation. Works on parametric solver only.");
	cls_Extrema_ECC.def("Perform", (void (Extrema_ECC::*)()) &Extrema_ECC::Perform, "Performs calculations.");
	cls_Extrema_ECC.def("IsDone", (Standard_Boolean (Extrema_ECC::*)() const ) &Extrema_ECC::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ECC.def("IsParallel", (Standard_Boolean (Extrema_ECC::*)() const ) &Extrema_ECC::IsParallel, "Returns state of myParallel flag.");
	cls_Extrema_ECC.def("NbExt", (Standard_Integer (Extrema_ECC::*)() const ) &Extrema_ECC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ECC.def("SquareDistance", [](Extrema_ECC &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ECC.def("SquareDistance", (Standard_Real (Extrema_ECC::*)(const Standard_Integer) const ) &Extrema_ECC::SquareDistance, "Returns the value of the Nth square extremum distance.", py::arg("N"));
	cls_Extrema_ECC.def("Points", (void (Extrema_ECC::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_ECC::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtElC.hxx
	py::class_<Extrema_ExtElC, std::unique_ptr<Extrema_ExtElC, Deleter<Extrema_ExtElC>>> cls_Extrema_ExtElC(mod, "Extrema_ExtElC", "It calculates all the distance between two elementary curves. These distances can be maximum or minimum.");
	cls_Extrema_ExtElC.def(py::init<>());
	cls_Extrema_ExtElC.def(py::init<const gp_Lin &, const gp_Lin &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("AngTol"));
	cls_Extrema_ExtElC.def(py::init<const gp_Lin &, const gp_Circ &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("Tol"));
	cls_Extrema_ExtElC.def(py::init<const gp_Lin &, const gp_Elips &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC.def(py::init<const gp_Lin &, const gp_Hypr &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC.def(py::init<const gp_Lin &, const gp_Parab &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC.def(py::init<const gp_Circ &, const gp_Circ &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC.def("IsDone", (Standard_Boolean (Extrema_ExtElC::*)() const ) &Extrema_ExtElC::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtElC.def("IsParallel", (Standard_Boolean (Extrema_ExtElC::*)() const ) &Extrema_ExtElC::IsParallel, "Returns True if the two curves are parallel.");
	cls_Extrema_ExtElC.def("NbExt", (Standard_Integer (Extrema_ExtElC::*)() const ) &Extrema_ExtElC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtElC.def("SquareDistance", [](Extrema_ExtElC &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtElC.def("SquareDistance", (Standard_Real (Extrema_ExtElC::*)(const Standard_Integer) const ) &Extrema_ExtElC::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtElC.def("Points", (void (Extrema_ExtElC::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_ExtElC::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtCC.hxx
	py::class_<Extrema_ExtCC, std::unique_ptr<Extrema_ExtCC, Deleter<Extrema_ExtCC>>> cls_Extrema_ExtCC(mod, "Extrema_ExtCC", "It calculates all the distance between two curves. These distances can be maximum or minimum.");
	cls_Extrema_ExtCC.def(py::init<>());
	cls_Extrema_ExtCC.def(py::init<const Standard_Real>(), py::arg("TolC1"));
	cls_Extrema_ExtCC.def(py::init<const Standard_Real, const Standard_Real>(), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("TolC1"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"));
	cls_Extrema_ExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC.def("SetCurve", (void (Extrema_ExtCC::*)(const Standard_Integer, const Adaptor3d_Curve &)) &Extrema_ExtCC::SetCurve, "None", py::arg("theRank"), py::arg("C"));
	cls_Extrema_ExtCC.def("SetCurve", (void (Extrema_ExtCC::*)(const Standard_Integer, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real)) &Extrema_ExtCC::SetCurve, "None", py::arg("theRank"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtCC.def("SetRange", (void (Extrema_ExtCC::*)(const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_ExtCC::SetRange, "None", py::arg("theRank"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtCC.def("SetTolerance", (void (Extrema_ExtCC::*)(const Standard_Integer, const Standard_Real)) &Extrema_ExtCC::SetTolerance, "None", py::arg("theRank"), py::arg("Tol"));
	cls_Extrema_ExtCC.def("Perform", (void (Extrema_ExtCC::*)()) &Extrema_ExtCC::Perform, "None");
	cls_Extrema_ExtCC.def("IsDone", (Standard_Boolean (Extrema_ExtCC::*)() const ) &Extrema_ExtCC::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtCC.def("NbExt", (Standard_Integer (Extrema_ExtCC::*)() const ) &Extrema_ExtCC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtCC.def("IsParallel", (Standard_Boolean (Extrema_ExtCC::*)() const ) &Extrema_ExtCC::IsParallel, "Returns True if the two curves are parallel.");
	cls_Extrema_ExtCC.def("SquareDistance", [](Extrema_ExtCC &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtCC.def("SquareDistance", (Standard_Real (Extrema_ExtCC::*)(const Standard_Integer) const ) &Extrema_ExtCC::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtCC.def("Points", (void (Extrema_ExtCC::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_ExtCC::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));
	cls_Extrema_ExtCC.def("TrimmedSquareDistances", (void (Extrema_ExtCC::*)(Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &, gp_Pnt &, gp_Pnt &, gp_Pnt &, gp_Pnt &) const ) &Extrema_ExtCC::TrimmedSquareDistances, "if the curve is a trimmed curve, dist11 is a square distance between the point on C1 of parameter FirstParameter and the point of parameter FirstParameter on C2.", py::arg("dist11"), py::arg("distP12"), py::arg("distP21"), py::arg("distP22"), py::arg("P11"), py::arg("P12"), py::arg("P21"), py::arg("P22"));
	cls_Extrema_ExtCC.def("SetSingleSolutionFlag", (void (Extrema_ExtCC::*)(const Standard_Boolean)) &Extrema_ExtCC::SetSingleSolutionFlag, "Set flag for single extrema computation. Works on parametric solver only.", py::arg("theSingleSolutionFlag"));
	cls_Extrema_ExtCC.def("GetSingleSolutionFlag", (Standard_Boolean (Extrema_ExtCC::*)() const ) &Extrema_ExtCC::GetSingleSolutionFlag, "Get flag for single extrema computation. Works on parametric solver only.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array1.hxx
	py::class_<Extrema_Array1OfPOnCurv, std::unique_ptr<Extrema_Array1OfPOnCurv, Deleter<Extrema_Array1OfPOnCurv>>> cls_Extrema_Array1OfPOnCurv(mod, "Extrema_Array1OfPOnCurv", "Purpose: The class Array1 represents unidimensional arrays of fixed size known at run time. The range of the index is user defined. An array1 can be constructed with a 'C array'. This functionality is useful to call methods expecting an Array1. It allows to carry the bounds inside the arrays.");
	cls_Extrema_Array1OfPOnCurv.def(py::init<>());
	cls_Extrema_Array1OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnCurv.def(py::init([] (const Extrema_Array1OfPOnCurv &other) {return new Extrema_Array1OfPOnCurv(other);}), "Copy constructor", py::arg("other"));
	// FIXME cls_Extrema_Array1OfPOnCurv.def(py::init<Extrema_Array1OfPOnCurv &&>(), py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv.def(py::init<const Extrema_POnCurv &, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnCurv.def("begin", (Extrema_Array1OfPOnCurv::iterator (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::begin, "Returns an iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnCurv.def("end", (Extrema_Array1OfPOnCurv::iterator (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::end, "Returns an iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnCurv.def("cbegin", (Extrema_Array1OfPOnCurv::const_iterator (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::cbegin, "Returns a const iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnCurv.def("cend", (Extrema_Array1OfPOnCurv::const_iterator (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::cend, "Returns a const iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnCurv.def("Init", (void (Extrema_Array1OfPOnCurv::*)(const Extrema_POnCurv &)) &Extrema_Array1OfPOnCurv::Init, "Initialise the items with theValue", py::arg("theValue"));
	cls_Extrema_Array1OfPOnCurv.def("Size", (Standard_Integer (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::Size, "Size query");
	cls_Extrema_Array1OfPOnCurv.def("Length", (Standard_Integer (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::Length, "Length query (the same)");
	cls_Extrema_Array1OfPOnCurv.def("IsEmpty", (Standard_Boolean (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::IsEmpty, "Return TRUE if array has zero length.");
	cls_Extrema_Array1OfPOnCurv.def("Lower", (Standard_Integer (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::Lower, "Lower bound");
	cls_Extrema_Array1OfPOnCurv.def("Upper", (Standard_Integer (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::Upper, "Upper bound");
	cls_Extrema_Array1OfPOnCurv.def("IsDeletable", (Standard_Boolean (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::IsDeletable, "myDeletable flag");
	cls_Extrema_Array1OfPOnCurv.def("IsAllocated", (Standard_Boolean (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::IsAllocated, "IsAllocated flag - for naming compatibility");
	cls_Extrema_Array1OfPOnCurv.def("Assign", (Extrema_Array1OfPOnCurv & (Extrema_Array1OfPOnCurv::*)(const Extrema_Array1OfPOnCurv &)) &Extrema_Array1OfPOnCurv::Assign, "Assignment", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnCurv.def("Move", (Extrema_Array1OfPOnCurv & (Extrema_Array1OfPOnCurv::*)(Extrema_Array1OfPOnCurv &&)) &Extrema_Array1OfPOnCurv::Move, "Move assignment", py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv.def("assign", (Extrema_Array1OfPOnCurv & (Extrema_Array1OfPOnCurv::*)(const Extrema_Array1OfPOnCurv &)) &Extrema_Array1OfPOnCurv::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnCurv.def("assign", (Extrema_Array1OfPOnCurv & (Extrema_Array1OfPOnCurv::*)(Extrema_Array1OfPOnCurv &&)) &Extrema_Array1OfPOnCurv::operator=, py::is_operator(), "Move assignment operator.", py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv.def("First", (const Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::First, "Returns first element");
	cls_Extrema_Array1OfPOnCurv.def("ChangeFirst", (Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)()) &Extrema_Array1OfPOnCurv::ChangeFirst, "Returns first element");
	cls_Extrema_Array1OfPOnCurv.def("Last", (const Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)() const ) &Extrema_Array1OfPOnCurv::Last, "Returns last element");
	cls_Extrema_Array1OfPOnCurv.def("ChangeLast", (Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)()) &Extrema_Array1OfPOnCurv::ChangeLast, "Returns last element");
	cls_Extrema_Array1OfPOnCurv.def("Value", (const Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnCurv::Value, "Constant value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv.def("__call__", (const Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnCurv::operator(), py::is_operator(), "operator() - alias to Value", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv.def("ChangeValue", (Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)(const Standard_Integer)) &Extrema_Array1OfPOnCurv::ChangeValue, "Variable value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv.def("__call__", (Extrema_POnCurv & (Extrema_Array1OfPOnCurv::*)(const Standard_Integer)) &Extrema_Array1OfPOnCurv::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv.def("SetValue", (void (Extrema_Array1OfPOnCurv::*)(const Standard_Integer, const Extrema_POnCurv &)) &Extrema_Array1OfPOnCurv::SetValue, "Set value", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_Array1OfPOnCurv.def("Resize", (void (Extrema_Array1OfPOnCurv::*)(const Standard_Integer, const Standard_Integer, const Standard_Boolean)) &Extrema_Array1OfPOnCurv::Resize, "Resizes the array to specified bounds. No re-allocation will be done if length of array does not change, but existing values will not be discarded if theToCopyData set to FALSE.", py::arg("theLower"), py::arg("theUpper"), py::arg("theToCopyData"));
	cls_Extrema_Array1OfPOnCurv.def("__iter__", [](const Extrema_Array1OfPOnCurv &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_POnSurf.hxx
	py::class_<Extrema_POnSurf, std::unique_ptr<Extrema_POnSurf, Deleter<Extrema_POnSurf>>> cls_Extrema_POnSurf(mod, "Extrema_POnSurf", "Definition of a point on surface.");
	cls_Extrema_POnSurf.def(py::init<>());
	cls_Extrema_POnSurf.def(py::init<const Standard_Real, const Standard_Real, const gp_Pnt &>(), py::arg("U"), py::arg("V"), py::arg("P"));
	cls_Extrema_POnSurf.def("Value", (const gp_Pnt & (Extrema_POnSurf::*)() const ) &Extrema_POnSurf::Value, "Returns the 3d point.");
	cls_Extrema_POnSurf.def("SetParameters", (void (Extrema_POnSurf::*)(const Standard_Real, const Standard_Real, const gp_Pnt &)) &Extrema_POnSurf::SetParameters, "Sets the params of current POnSurf instance. (e.g. to the point to be projected).", py::arg("theU"), py::arg("theV"), py::arg("thePnt"));
	cls_Extrema_POnSurf.def("Parameter", (void (Extrema_POnSurf::*)(Standard_Real &, Standard_Real &) const ) &Extrema_POnSurf::Parameter, "Returns the parameter values on the surface.", py::arg("U"), py::arg("V"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array1.hxx
	py::class_<Extrema_Array1OfPOnSurf, std::unique_ptr<Extrema_Array1OfPOnSurf, Deleter<Extrema_Array1OfPOnSurf>>> cls_Extrema_Array1OfPOnSurf(mod, "Extrema_Array1OfPOnSurf", "Purpose: The class Array1 represents unidimensional arrays of fixed size known at run time. The range of the index is user defined. An array1 can be constructed with a 'C array'. This functionality is useful to call methods expecting an Array1. It allows to carry the bounds inside the arrays.");
	cls_Extrema_Array1OfPOnSurf.def(py::init<>());
	cls_Extrema_Array1OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnSurf.def(py::init([] (const Extrema_Array1OfPOnSurf &other) {return new Extrema_Array1OfPOnSurf(other);}), "Copy constructor", py::arg("other"));
	// FIXME cls_Extrema_Array1OfPOnSurf.def(py::init<Extrema_Array1OfPOnSurf &&>(), py::arg("theOther"));
	cls_Extrema_Array1OfPOnSurf.def(py::init<const Extrema_POnSurf &, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnSurf.def("begin", (Extrema_Array1OfPOnSurf::iterator (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::begin, "Returns an iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnSurf.def("end", (Extrema_Array1OfPOnSurf::iterator (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::end, "Returns an iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnSurf.def("cbegin", (Extrema_Array1OfPOnSurf::const_iterator (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::cbegin, "Returns a const iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnSurf.def("cend", (Extrema_Array1OfPOnSurf::const_iterator (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::cend, "Returns a const iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnSurf.def("Init", (void (Extrema_Array1OfPOnSurf::*)(const Extrema_POnSurf &)) &Extrema_Array1OfPOnSurf::Init, "Initialise the items with theValue", py::arg("theValue"));
	cls_Extrema_Array1OfPOnSurf.def("Size", (Standard_Integer (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::Size, "Size query");
	cls_Extrema_Array1OfPOnSurf.def("Length", (Standard_Integer (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::Length, "Length query (the same)");
	cls_Extrema_Array1OfPOnSurf.def("IsEmpty", (Standard_Boolean (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::IsEmpty, "Return TRUE if array has zero length.");
	cls_Extrema_Array1OfPOnSurf.def("Lower", (Standard_Integer (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::Lower, "Lower bound");
	cls_Extrema_Array1OfPOnSurf.def("Upper", (Standard_Integer (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::Upper, "Upper bound");
	cls_Extrema_Array1OfPOnSurf.def("IsDeletable", (Standard_Boolean (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::IsDeletable, "myDeletable flag");
	cls_Extrema_Array1OfPOnSurf.def("IsAllocated", (Standard_Boolean (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::IsAllocated, "IsAllocated flag - for naming compatibility");
	cls_Extrema_Array1OfPOnSurf.def("Assign", (Extrema_Array1OfPOnSurf & (Extrema_Array1OfPOnSurf::*)(const Extrema_Array1OfPOnSurf &)) &Extrema_Array1OfPOnSurf::Assign, "Assignment", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnSurf.def("Move", (Extrema_Array1OfPOnSurf & (Extrema_Array1OfPOnSurf::*)(Extrema_Array1OfPOnSurf &&)) &Extrema_Array1OfPOnSurf::Move, "Move assignment", py::arg("theOther"));
	cls_Extrema_Array1OfPOnSurf.def("assign", (Extrema_Array1OfPOnSurf & (Extrema_Array1OfPOnSurf::*)(const Extrema_Array1OfPOnSurf &)) &Extrema_Array1OfPOnSurf::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnSurf.def("assign", (Extrema_Array1OfPOnSurf & (Extrema_Array1OfPOnSurf::*)(Extrema_Array1OfPOnSurf &&)) &Extrema_Array1OfPOnSurf::operator=, py::is_operator(), "Move assignment operator.", py::arg("theOther"));
	cls_Extrema_Array1OfPOnSurf.def("First", (const Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::First, "Returns first element");
	cls_Extrema_Array1OfPOnSurf.def("ChangeFirst", (Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)()) &Extrema_Array1OfPOnSurf::ChangeFirst, "Returns first element");
	cls_Extrema_Array1OfPOnSurf.def("Last", (const Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)() const ) &Extrema_Array1OfPOnSurf::Last, "Returns last element");
	cls_Extrema_Array1OfPOnSurf.def("ChangeLast", (Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)()) &Extrema_Array1OfPOnSurf::ChangeLast, "Returns last element");
	cls_Extrema_Array1OfPOnSurf.def("Value", (const Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnSurf::Value, "Constant value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnSurf.def("__call__", (const Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnSurf::operator(), py::is_operator(), "operator() - alias to Value", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnSurf.def("ChangeValue", (Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)(const Standard_Integer)) &Extrema_Array1OfPOnSurf::ChangeValue, "Variable value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnSurf.def("__call__", (Extrema_POnSurf & (Extrema_Array1OfPOnSurf::*)(const Standard_Integer)) &Extrema_Array1OfPOnSurf::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnSurf.def("SetValue", (void (Extrema_Array1OfPOnSurf::*)(const Standard_Integer, const Extrema_POnSurf &)) &Extrema_Array1OfPOnSurf::SetValue, "Set value", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_Array1OfPOnSurf.def("Resize", (void (Extrema_Array1OfPOnSurf::*)(const Standard_Integer, const Standard_Integer, const Standard_Boolean)) &Extrema_Array1OfPOnSurf::Resize, "Resizes the array to specified bounds. No re-allocation will be done if length of array does not change, but existing values will not be discarded if theToCopyData set to FALSE.", py::arg("theLower"), py::arg("theUpper"), py::arg("theToCopyData"));
	cls_Extrema_Array1OfPOnSurf.def("__iter__", [](const Extrema_Array1OfPOnSurf &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtElCS.hxx
	py::class_<Extrema_ExtElCS, std::unique_ptr<Extrema_ExtElCS, Deleter<Extrema_ExtElCS>>> cls_Extrema_ExtElCS(mod, "Extrema_ExtElCS", "It calculates all the distances between a curve and a surface. These distances can be maximum or minimum.");
	cls_Extrema_ExtElCS.def(py::init<>());
	cls_Extrema_ExtElCS.def(py::init<const gp_Lin &, const gp_Pln &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Lin &, const gp_Cylinder &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Lin &, const gp_Cone &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Lin &, const gp_Sphere &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Lin &, const gp_Torus &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Circ &, const gp_Pln &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Circ &, const gp_Cylinder &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Circ &, const gp_Cone &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Circ &, const gp_Sphere &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Circ &, const gp_Torus &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def(py::init<const gp_Hypr &, const gp_Pln &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Lin &, const gp_Pln &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Lin &, const gp_Cylinder &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Lin &, const gp_Cone &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Lin &, const gp_Sphere &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Lin &, const gp_Torus &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Circ &, const gp_Pln &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Circ &, const gp_Cylinder &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Circ &, const gp_Cone &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Circ &, const gp_Sphere &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Circ &, const gp_Torus &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("Perform", (void (Extrema_ExtElCS::*)(const gp_Hypr &, const gp_Pln &)) &Extrema_ExtElCS::Perform, "None", py::arg("C"), py::arg("S"));
	cls_Extrema_ExtElCS.def("IsDone", (Standard_Boolean (Extrema_ExtElCS::*)() const ) &Extrema_ExtElCS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtElCS.def("IsParallel", (Standard_Boolean (Extrema_ExtElCS::*)() const ) &Extrema_ExtElCS::IsParallel, "Returns True if the curve is on a parallel surface.");
	cls_Extrema_ExtElCS.def("NbExt", (Standard_Integer (Extrema_ExtElCS::*)() const ) &Extrema_ExtElCS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtElCS.def("SquareDistance", [](Extrema_ExtElCS &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtElCS.def("SquareDistance", (Standard_Real (Extrema_ExtElCS::*)(const Standard_Integer) const ) &Extrema_ExtElCS::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtElCS.def("Points", (void (Extrema_ExtElCS::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnSurf &) const ) &Extrema_ExtElCS::Points, "Returns the points of the Nth extremum distance. P1 is on the curve, P2 on the surface.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtCS.hxx
	py::class_<Extrema_ExtCS, std::unique_ptr<Extrema_ExtCS, Deleter<Extrema_ExtCS>>> cls_Extrema_ExtCS(mod, "Extrema_ExtCS", "It calculates all the extremum distances between a curve and a surface. These distances can be minimum or maximum.");
	cls_Extrema_ExtCS.def(py::init<>());
	cls_Extrema_ExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real>(), py::arg("C"), py::arg("S"), py::arg("TolC"), py::arg("TolS"));
	cls_Extrema_ExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C"), py::arg("S"), py::arg("UCinf"), py::arg("UCsup"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolC"), py::arg("TolS"));
	cls_Extrema_ExtCS.def("Initialize", (void (Extrema_ExtCS::*)(const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtCS::Initialize, "Initializes the fields of the algorithm.", py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolC"), py::arg("TolS"));
	cls_Extrema_ExtCS.def("Perform", (void (Extrema_ExtCS::*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Real)) &Extrema_ExtCS::Perform, "Computes the distances. An exception is raised if the fieds have not been initialized.", py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtCS.def("IsDone", (Standard_Boolean (Extrema_ExtCS::*)() const ) &Extrema_ExtCS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtCS.def("IsParallel", (Standard_Boolean (Extrema_ExtCS::*)() const ) &Extrema_ExtCS::IsParallel, "Returns True if the curve is on a parallel surface.");
	cls_Extrema_ExtCS.def("NbExt", (Standard_Integer (Extrema_ExtCS::*)() const ) &Extrema_ExtCS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtCS.def("SquareDistance", (Standard_Real (Extrema_ExtCS::*)(const Standard_Integer) const ) &Extrema_ExtCS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtCS.def("Points", (void (Extrema_ExtCS::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnSurf &) const ) &Extrema_ExtCS::Points, "Returns the point of the Nth resulting distance.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtElSS.hxx
	py::class_<Extrema_ExtElSS, std::unique_ptr<Extrema_ExtElSS, Deleter<Extrema_ExtElSS>>> cls_Extrema_ExtElSS(mod, "Extrema_ExtElSS", "It calculates all the distances between 2 elementary surfaces. These distances can be maximum or minimum.");
	cls_Extrema_ExtElSS.def(py::init<>());
	cls_Extrema_ExtElSS.def(py::init<const gp_Pln &, const gp_Pln &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def(py::init<const gp_Pln &, const gp_Sphere &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def(py::init<const gp_Sphere &, const gp_Sphere &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def(py::init<const gp_Sphere &, const gp_Cylinder &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def(py::init<const gp_Sphere &, const gp_Cone &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def(py::init<const gp_Sphere &, const gp_Torus &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Pln &, const gp_Pln &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Pln &, const gp_Sphere &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Sphere &, const gp_Sphere &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Sphere &, const gp_Cylinder &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Sphere &, const gp_Cone &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("Perform", (void (Extrema_ExtElSS::*)(const gp_Sphere &, const gp_Torus &)) &Extrema_ExtElSS::Perform, "None", py::arg("S1"), py::arg("S2"));
	cls_Extrema_ExtElSS.def("IsDone", (Standard_Boolean (Extrema_ExtElSS::*)() const ) &Extrema_ExtElSS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtElSS.def("IsParallel", (Standard_Boolean (Extrema_ExtElSS::*)() const ) &Extrema_ExtElSS::IsParallel, "Returns True if the two surfaces are parallel.");
	cls_Extrema_ExtElSS.def("NbExt", (Standard_Integer (Extrema_ExtElSS::*)() const ) &Extrema_ExtElSS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtElSS.def("SquareDistance", [](Extrema_ExtElSS &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtElSS.def("SquareDistance", (Standard_Real (Extrema_ExtElSS::*)(const Standard_Integer) const ) &Extrema_ExtElSS::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtElSS.def("Points", (void (Extrema_ExtElSS::*)(const Standard_Integer, Extrema_POnSurf &, Extrema_POnSurf &) const ) &Extrema_ExtElSS::Points, "Returns the points for the Nth resulting distance. P1 is on the first surface, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtSS.hxx
	py::class_<Extrema_ExtSS, std::unique_ptr<Extrema_ExtSS, Deleter<Extrema_ExtSS>>> cls_Extrema_ExtSS(mod, "Extrema_ExtSS", "It calculates all the extremum distances between two surfaces. These distances can be minimum or maximum.");
	cls_Extrema_ExtSS.def(py::init<>());
	cls_Extrema_ExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real>(), py::arg("S1"), py::arg("S2"), py::arg("TolS1"), py::arg("TolS2"));
	cls_Extrema_ExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("S1"), py::arg("S2"), py::arg("Uinf1"), py::arg("Usup1"), py::arg("Vinf1"), py::arg("Vsup1"), py::arg("Uinf2"), py::arg("Usup2"), py::arg("Vinf2"), py::arg("Vsup2"), py::arg("TolS1"), py::arg("TolS2"));
	cls_Extrema_ExtSS.def("Initialize", (void (Extrema_ExtSS::*)(const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtSS::Initialize, "Initializes the fields of the algorithm.", py::arg("S2"), py::arg("Uinf2"), py::arg("Usup2"), py::arg("Vinf2"), py::arg("Vsup2"), py::arg("TolS1"));
	cls_Extrema_ExtSS.def("Perform", (void (Extrema_ExtSS::*)(const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtSS::Perform, "Computes the distances. An exception is raised if the fieds have not been initialized.", py::arg("S1"), py::arg("Uinf1"), py::arg("Usup1"), py::arg("Vinf1"), py::arg("Vsup1"), py::arg("TolS1"));
	cls_Extrema_ExtSS.def("IsDone", (Standard_Boolean (Extrema_ExtSS::*)() const ) &Extrema_ExtSS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtSS.def("IsParallel", (Standard_Boolean (Extrema_ExtSS::*)() const ) &Extrema_ExtSS::IsParallel, "Returns True if the curve is on a parallel surface.");
	cls_Extrema_ExtSS.def("NbExt", (Standard_Integer (Extrema_ExtSS::*)() const ) &Extrema_ExtSS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtSS.def("SquareDistance", (Standard_Real (Extrema_ExtSS::*)(const Standard_Integer) const ) &Extrema_ExtSS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtSS.def("Points", (void (Extrema_ExtSS::*)(const Standard_Integer, Extrema_POnSurf &, Extrema_POnSurf &) const ) &Extrema_ExtSS::Points, "Returns the point of the Nth resulting distance.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPElC.hxx
	py::class_<Extrema_ExtPElC, std::unique_ptr<Extrema_ExtPElC, Deleter<Extrema_ExtPElC>>> cls_Extrema_ExtPElC(mod, "Extrema_ExtPElC", "It calculates all the distances between a point and an elementary curve. These distances can be minimum or maximum.");
	cls_Extrema_ExtPElC.def(py::init<>());
	cls_Extrema_ExtPElC.def(py::init<const gp_Pnt &, const gp_Lin &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def(py::init<const gp_Pnt &, const gp_Circ &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def(py::init<const gp_Pnt &, const gp_Elips &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def(py::init<const gp_Pnt &, const gp_Hypr &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def(py::init<const gp_Pnt &, const gp_Parab &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("Perform", (void (Extrema_ExtPElC::*)(const gp_Pnt &, const gp_Lin &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("Perform", (void (Extrema_ExtPElC::*)(const gp_Pnt &, const gp_Circ &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("Perform", (void (Extrema_ExtPElC::*)(const gp_Pnt &, const gp_Elips &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("Perform", (void (Extrema_ExtPElC::*)(const gp_Pnt &, const gp_Hypr &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("Perform", (void (Extrema_ExtPElC::*)(const gp_Pnt &, const gp_Parab &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC.def("IsDone", (Standard_Boolean (Extrema_ExtPElC::*)() const ) &Extrema_ExtPElC::IsDone, "True if the distances are found.");
	cls_Extrema_ExtPElC.def("NbExt", (Standard_Integer (Extrema_ExtPElC::*)() const ) &Extrema_ExtPElC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPElC.def("SquareDistance", (Standard_Real (Extrema_ExtPElC::*)(const Standard_Integer) const ) &Extrema_ExtPElC::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtPElC.def("IsMin", (Standard_Boolean (Extrema_ExtPElC::*)(const Standard_Integer) const ) &Extrema_ExtPElC::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ExtPElC.def("Point", (const Extrema_POnCurv & (Extrema_ExtPElC::*)(const Standard_Integer) const ) &Extrema_ExtPElC::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCFOfEPCOfExtPC.hxx
	py::class_<Extrema_PCFOfEPCOfExtPC, std::unique_ptr<Extrema_PCFOfEPCOfExtPC, Deleter<Extrema_PCFOfEPCOfExtPC>>, math_FunctionWithDerivative> cls_Extrema_PCFOfEPCOfExtPC(mod, "Extrema_PCFOfEPCOfExtPC", "None");
	cls_Extrema_PCFOfEPCOfExtPC.def(py::init<>());
	cls_Extrema_PCFOfEPCOfExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCFOfEPCOfExtPC.def("Initialize", (void (Extrema_PCFOfEPCOfExtPC::*)(const Adaptor3d_Curve &)) &Extrema_PCFOfEPCOfExtPC::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCFOfEPCOfExtPC.def("SetPoint", (void (Extrema_PCFOfEPCOfExtPC::*)(const gp_Pnt &)) &Extrema_PCFOfEPCOfExtPC::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCFOfEPCOfExtPC.def("Value", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCFOfEPCOfExtPC.def("Derivative", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfExtPC.def("Values", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfExtPC.def("GetStateNumber", (Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)()) &Extrema_PCFOfEPCOfExtPC::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCFOfEPCOfExtPC.def("NbExt", (Standard_Integer (Extrema_PCFOfEPCOfExtPC::*)() const ) &Extrema_PCFOfEPCOfExtPC::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCFOfEPCOfExtPC.def("SquareDistance", (Standard_Real (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC.def("IsMin", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC.def("Point", (const Extrema_POnCurv & (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC.def("SubIntervalInitialize", (void (Extrema_PCFOfEPCOfExtPC::*)(const Standard_Real, const Standard_Real)) &Extrema_PCFOfEPCOfExtPC::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCFOfEPCOfExtPC.def("SearchOfTolerance", (Standard_Real (Extrema_PCFOfEPCOfExtPC::*)()) &Extrema_PCFOfEPCOfExtPC::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_EPCOfExtPC.hxx
	py::class_<Extrema_EPCOfExtPC, std::unique_ptr<Extrema_EPCOfExtPC, Deleter<Extrema_EPCOfExtPC>>> cls_Extrema_EPCOfExtPC(mod, "Extrema_EPCOfExtPC", "None");
	cls_Extrema_EPCOfExtPC.def(py::init<>());
	cls_Extrema_EPCOfExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC.def("Initialize", (void (Extrema_EPCOfExtPC::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC.def("Initialize", (void (Extrema_EPCOfExtPC::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC.def("Initialize", (void (Extrema_EPCOfExtPC::*)(const Adaptor3d_Curve &)) &Extrema_EPCOfExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"));
	cls_Extrema_EPCOfExtPC.def("Initialize", (void (Extrema_EPCOfExtPC::*)(const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC::Initialize, "sets the fields of the algorithm.", py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC.def("Perform", (void (Extrema_EPCOfExtPC::*)(const gp_Pnt &)) &Extrema_EPCOfExtPC::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_EPCOfExtPC.def("IsDone", (Standard_Boolean (Extrema_EPCOfExtPC::*)() const ) &Extrema_EPCOfExtPC::IsDone, "True if the distances are found.");
	cls_Extrema_EPCOfExtPC.def("NbExt", (Standard_Integer (Extrema_EPCOfExtPC::*)() const ) &Extrema_EPCOfExtPC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_EPCOfExtPC.def("SquareDistance", (Standard_Real (Extrema_EPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_EPCOfExtPC.def("IsMin", (Standard_Boolean (Extrema_EPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_EPCOfExtPC.def("Point", (const Extrema_POnCurv & (Extrema_EPCOfExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPC.hxx
	py::class_<Extrema_ExtPC, std::unique_ptr<Extrema_ExtPC, Deleter<Extrema_ExtPC>>> cls_Extrema_ExtPC(mod, "Extrema_ExtPC", "None");
	cls_Extrema_ExtPC.def(py::init<>());
	cls_Extrema_ExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_ExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("TolF"));
	cls_Extrema_ExtPC.def("Initialize", [](Extrema_ExtPC &self, const Adaptor3d_Curve & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Initialize(a0, a1, a2); }, py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPC.def("Initialize", (void (Extrema_ExtPC::*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPC::Initialize, "initializes the fields of the algorithm.", py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ExtPC.def("Perform", (void (Extrema_ExtPC::*)(const gp_Pnt &)) &Extrema_ExtPC::Perform, "An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_ExtPC.def("IsDone", (Standard_Boolean (Extrema_ExtPC::*)() const ) &Extrema_ExtPC::IsDone, "True if the distances are found.");
	cls_Extrema_ExtPC.def("SquareDistance", (Standard_Real (Extrema_ExtPC::*)(const Standard_Integer) const ) &Extrema_ExtPC::SquareDistance, "Returns the value of the <N>th extremum square distance.", py::arg("N"));
	cls_Extrema_ExtPC.def("NbExt", (Standard_Integer (Extrema_ExtPC::*)() const ) &Extrema_ExtPC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPC.def("IsMin", (Standard_Boolean (Extrema_ExtPC::*)(const Standard_Integer) const ) &Extrema_ExtPC::IsMin, "Returns True if the <N>th extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ExtPC.def("Point", (const Extrema_POnCurv & (Extrema_ExtPC::*)(const Standard_Integer) const ) &Extrema_ExtPC::Point, "Returns the point of the <N>th extremum distance.", py::arg("N"));
	cls_Extrema_ExtPC.def("TrimmedSquareDistances", (void (Extrema_ExtPC::*)(Standard_Real &, Standard_Real &, gp_Pnt &, gp_Pnt &) const ) &Extrema_ExtPC::TrimmedSquareDistances, "if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.", py::arg("dist1"), py::arg("dist2"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPElS.hxx
	py::class_<Extrema_ExtPElS, std::unique_ptr<Extrema_ExtPElS, Deleter<Extrema_ExtPElS>>> cls_Extrema_ExtPElS(mod, "Extrema_ExtPElS", "It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.");
	cls_Extrema_ExtPElS.def(py::init<>());
	cls_Extrema_ExtPElS.def(py::init<const gp_Pnt &, const gp_Cylinder &, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def(py::init<const gp_Pnt &, const gp_Pln &, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def(py::init<const gp_Pnt &, const gp_Cone &, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def(py::init<const gp_Pnt &, const gp_Torus &, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def(py::init<const gp_Pnt &, const gp_Sphere &, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("Perform", (void (Extrema_ExtPElS::*)(const gp_Pnt &, const gp_Cylinder &, const Standard_Real)) &Extrema_ExtPElS::Perform, "None", py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("Perform", (void (Extrema_ExtPElS::*)(const gp_Pnt &, const gp_Pln &, const Standard_Real)) &Extrema_ExtPElS::Perform, "None", py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("Perform", (void (Extrema_ExtPElS::*)(const gp_Pnt &, const gp_Cone &, const Standard_Real)) &Extrema_ExtPElS::Perform, "None", py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("Perform", (void (Extrema_ExtPElS::*)(const gp_Pnt &, const gp_Torus &, const Standard_Real)) &Extrema_ExtPElS::Perform, "None", py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("Perform", (void (Extrema_ExtPElS::*)(const gp_Pnt &, const gp_Sphere &, const Standard_Real)) &Extrema_ExtPElS::Perform, "None", py::arg("P"), py::arg("S"), py::arg("Tol"));
	cls_Extrema_ExtPElS.def("IsDone", (Standard_Boolean (Extrema_ExtPElS::*)() const ) &Extrema_ExtPElS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtPElS.def("NbExt", (Standard_Integer (Extrema_ExtPElS::*)() const ) &Extrema_ExtPElS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPElS.def("SquareDistance", (Standard_Real (Extrema_ExtPElS::*)(const Standard_Integer) const ) &Extrema_ExtPElS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtPElS.def("Point", (const Extrema_POnSurf & (Extrema_ExtPElS::*)(const Standard_Integer) const ) &Extrema_ExtPElS::Point, "Returns the point of the Nth resulting distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_POnSurfParams.hxx
	py::class_<Extrema_POnSurfParams, std::unique_ptr<Extrema_POnSurfParams, Deleter<Extrema_POnSurfParams>>, Extrema_POnSurf> cls_Extrema_POnSurfParams(mod, "Extrema_POnSurfParams", "Data container for point on surface parameters. These parameters are required to compute an initial approximation for extrema computation.");
	cls_Extrema_POnSurfParams.def(py::init<>());
	cls_Extrema_POnSurfParams.def(py::init<const Standard_Real, const Standard_Real, const gp_Pnt &>(), py::arg("theU"), py::arg("theV"), py::arg("thePnt"));
	cls_Extrema_POnSurfParams.def("SetSqrDistance", (void (Extrema_POnSurfParams::*)(const Standard_Real)) &Extrema_POnSurfParams::SetSqrDistance, "Sets the square distance from this point to another one (e.g. to the point to be projected).", py::arg("theSqrDistance"));
	cls_Extrema_POnSurfParams.def("GetSqrDistance", (Standard_Real (Extrema_POnSurfParams::*)() const ) &Extrema_POnSurfParams::GetSqrDistance, "Query the square distance from this point to another one.");
	cls_Extrema_POnSurfParams.def("SetElementType", (void (Extrema_POnSurfParams::*)(const Extrema_ElementType)) &Extrema_POnSurfParams::SetElementType, "Sets the element type on which this point is situated.", py::arg("theElementType"));
	cls_Extrema_POnSurfParams.def("GetElementType", (Extrema_ElementType (Extrema_POnSurfParams::*)() const ) &Extrema_POnSurfParams::GetElementType, "Query the element type on which this point is situated.");
	cls_Extrema_POnSurfParams.def("SetIndices", (void (Extrema_POnSurfParams::*)(const Standard_Integer, const Standard_Integer)) &Extrema_POnSurfParams::SetIndices, "Sets the U and V indices of an element that contains this point.", py::arg("theIndexU"), py::arg("theIndexV"));
	cls_Extrema_POnSurfParams.def("GetIndices", (void (Extrema_POnSurfParams::*)(Standard_Integer &, Standard_Integer &) const ) &Extrema_POnSurfParams::GetIndices, "Query the U and V indices of an element that contains this point.", py::arg("theIndexU"), py::arg("theIndexV"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array2.hxx
	py::class_<Extrema_Array2OfPOnSurfParams, std::unique_ptr<Extrema_Array2OfPOnSurfParams, Deleter<Extrema_Array2OfPOnSurfParams>>> cls_Extrema_Array2OfPOnSurfParams(mod, "Extrema_Array2OfPOnSurfParams", "Purpose: The class Array2 represents bi-dimensional arrays of fixed size known at run time. The ranges of indices are user defined.");
	cls_Extrema_Array2OfPOnSurfParams.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnSurfParams.def(py::init([] (const Extrema_Array2OfPOnSurfParams &other) {return new Extrema_Array2OfPOnSurfParams(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_Array2OfPOnSurfParams.def(py::init<const Extrema_POnSurfParams &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnSurfParams.def("Init", (void (Extrema_Array2OfPOnSurfParams::*)(const Extrema_POnSurfParams &)) &Extrema_Array2OfPOnSurfParams::Init, "Initialise the values", py::arg("theValue"));
	cls_Extrema_Array2OfPOnSurfParams.def("Size", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::Size, "Size (number of items)");
	cls_Extrema_Array2OfPOnSurfParams.def("Length", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::Length, "Length (number of items)");
	cls_Extrema_Array2OfPOnSurfParams.def("RowLength", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::RowLength, "Returns length of the row, i.e. number of columns");
	cls_Extrema_Array2OfPOnSurfParams.def("ColLength", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::ColLength, "Returns length of the column, i.e. number of rows");
	cls_Extrema_Array2OfPOnSurfParams.def("LowerRow", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::LowerRow, "LowerRow");
	cls_Extrema_Array2OfPOnSurfParams.def("UpperRow", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::UpperRow, "UpperRow");
	cls_Extrema_Array2OfPOnSurfParams.def("LowerCol", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::LowerCol, "LowerCol");
	cls_Extrema_Array2OfPOnSurfParams.def("UpperCol", (Standard_Integer (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::UpperCol, "UpperCol");
	cls_Extrema_Array2OfPOnSurfParams.def("IsDeletable", (Standard_Boolean (Extrema_Array2OfPOnSurfParams::*)() const ) &Extrema_Array2OfPOnSurfParams::IsDeletable, "myDeletable flag");
	cls_Extrema_Array2OfPOnSurfParams.def("Assign", (Extrema_Array2OfPOnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Extrema_Array2OfPOnSurfParams &)) &Extrema_Array2OfPOnSurfParams::Assign, "Assignment", py::arg("theOther"));
	cls_Extrema_Array2OfPOnSurfParams.def("assign", (Extrema_Array2OfPOnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Extrema_Array2OfPOnSurfParams &)) &Extrema_Array2OfPOnSurfParams::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	cls_Extrema_Array2OfPOnSurfParams.def("Value", (const Extrema_POnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnSurfParams::Value, "Constant value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurfParams.def("__call__", (const Extrema_POnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnSurfParams::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurfParams.def("ChangeValue", (Extrema_POnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnSurfParams::ChangeValue, "Variable value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurfParams.def("__call__", (Extrema_POnSurfParams & (Extrema_Array2OfPOnSurfParams::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnSurfParams::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurfParams.def("SetValue", (void (Extrema_Array2OfPOnSurfParams::*)(const Standard_Integer, const Standard_Integer, const Extrema_POnSurfParams &)) &Extrema_Array2OfPOnSurfParams::SetValue, "SetValue", py::arg("theRow"), py::arg("theCol"), py::arg("theItem"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_FuncPSNorm.hxx
	py::class_<Extrema_FuncPSNorm, std::unique_ptr<Extrema_FuncPSNorm, Deleter<Extrema_FuncPSNorm>>, math_FunctionSetWithDerivatives> cls_Extrema_FuncPSNorm(mod, "Extrema_FuncPSNorm", "Functional for search of extremum of the distance between point P and surface S, starting from approximate solution (u0, v0).");
	cls_Extrema_FuncPSNorm.def(py::init<>());
	cls_Extrema_FuncPSNorm.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &>(), py::arg("P"), py::arg("S"));
	cls_Extrema_FuncPSNorm.def("Initialize", (void (Extrema_FuncPSNorm::*)(const Adaptor3d_Surface &)) &Extrema_FuncPSNorm::Initialize, "sets the field mysurf of the function.", py::arg("S"));
	cls_Extrema_FuncPSNorm.def("SetPoint", (void (Extrema_FuncPSNorm::*)(const gp_Pnt &)) &Extrema_FuncPSNorm::SetPoint, "sets the field mysurf of the function.", py::arg("P"));
	cls_Extrema_FuncPSNorm.def("NbVariables", (Standard_Integer (Extrema_FuncPSNorm::*)() const ) &Extrema_FuncPSNorm::NbVariables, "None");
	cls_Extrema_FuncPSNorm.def("NbEquations", (Standard_Integer (Extrema_FuncPSNorm::*)() const ) &Extrema_FuncPSNorm::NbEquations, "None");
	cls_Extrema_FuncPSNorm.def("Value", (Standard_Boolean (Extrema_FuncPSNorm::*)(const math_Vector &, math_Vector &)) &Extrema_FuncPSNorm::Value, "Calculate Fi(U,V).", py::arg("UV"), py::arg("F"));
	cls_Extrema_FuncPSNorm.def("Derivatives", (Standard_Boolean (Extrema_FuncPSNorm::*)(const math_Vector &, math_Matrix &)) &Extrema_FuncPSNorm::Derivatives, "Calculate Fi'(U,V).", py::arg("UV"), py::arg("DF"));
	cls_Extrema_FuncPSNorm.def("Values", (Standard_Boolean (Extrema_FuncPSNorm::*)(const math_Vector &, math_Vector &, math_Matrix &)) &Extrema_FuncPSNorm::Values, "Calculate Fi(U,V) and Fi'(U,V).", py::arg("UV"), py::arg("F"), py::arg("DF"));
	cls_Extrema_FuncPSNorm.def("GetStateNumber", (Standard_Integer (Extrema_FuncPSNorm::*)()) &Extrema_FuncPSNorm::GetStateNumber, "Save the found extremum.");
	cls_Extrema_FuncPSNorm.def("NbExt", (Standard_Integer (Extrema_FuncPSNorm::*)() const ) &Extrema_FuncPSNorm::NbExt, "Return the number of found extrema.");
	cls_Extrema_FuncPSNorm.def("SquareDistance", (Standard_Real (Extrema_FuncPSNorm::*)(const Standard_Integer) const ) &Extrema_FuncPSNorm::SquareDistance, "Return the value of the Nth distance.", py::arg("N"));
	cls_Extrema_FuncPSNorm.def("Point", (const Extrema_POnSurf & (Extrema_FuncPSNorm::*)(const Standard_Integer) const ) &Extrema_FuncPSNorm::Point, "Returns the Nth extremum.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenExtPS.hxx
	py::class_<Extrema_GenExtPS, std::unique_ptr<Extrema_GenExtPS, Deleter<Extrema_GenExtPS>>> cls_Extrema_GenExtPS(mod, "Extrema_GenExtPS", "It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.");
	cls_Extrema_GenExtPS.def(py::init<>());
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Extrema_ExtFlag>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("TolU"), py::arg("TolV"), py::arg("F"));
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Extrema_ExtFlag, const Extrema_ExtAlgo>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("TolU"), py::arg("TolV"), py::arg("F"), py::arg("A"));
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Extrema_ExtFlag>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"), py::arg("F"));
	cls_Extrema_GenExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Extrema_ExtFlag, const Extrema_ExtAlgo>(), py::arg("P"), py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"), py::arg("F"), py::arg("A"));
	cls_Extrema_GenExtPS.def("Initialize", (void (Extrema_GenExtPS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_GenExtPS::Initialize, "None", py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_GenExtPS.def("Initialize", (void (Extrema_GenExtPS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenExtPS::Initialize, "None", py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_GenExtPS.def("Perform", (void (Extrema_GenExtPS::*)(const gp_Pnt &)) &Extrema_GenExtPS::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_GenExtPS.def("SetFlag", (void (Extrema_GenExtPS::*)(const Extrema_ExtFlag)) &Extrema_GenExtPS::SetFlag, "None", py::arg("F"));
	cls_Extrema_GenExtPS.def("SetAlgo", (void (Extrema_GenExtPS::*)(const Extrema_ExtAlgo)) &Extrema_GenExtPS::SetAlgo, "None", py::arg("A"));
	cls_Extrema_GenExtPS.def("IsDone", (Standard_Boolean (Extrema_GenExtPS::*)() const ) &Extrema_GenExtPS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_GenExtPS.def("NbExt", (Standard_Integer (Extrema_GenExtPS::*)() const ) &Extrema_GenExtPS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_GenExtPS.def("SquareDistance", (Standard_Real (Extrema_GenExtPS::*)(const Standard_Integer) const ) &Extrema_GenExtPS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_GenExtPS.def("Point", (const Extrema_POnSurf & (Extrema_GenExtPS::*)(const Standard_Integer) const ) &Extrema_GenExtPS::Point, "Returns the point of the Nth resulting distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPExtS.hxx
	py::class_<Extrema_ExtPExtS, opencascade::handle<Extrema_ExtPExtS>, Standard_Transient> cls_Extrema_ExtPExtS(mod, "Extrema_ExtPExtS", "It calculates all the extremum (minimum and maximum) distances between a point and a linear extrusion surface.");
	cls_Extrema_ExtPExtS.def(py::init<>());
	cls_Extrema_ExtPExtS.def(py::init<const gp_Pnt &, const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPExtS.def(py::init<const gp_Pnt &, const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPExtS.def("Initialize", (void (Extrema_ExtPExtS::*)(const opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion> &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPExtS::Initialize, "Initializes the fields of the algorithm.", py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPExtS.def("Perform", (void (Extrema_ExtPExtS::*)(const gp_Pnt &)) &Extrema_ExtPExtS::Perform, "None", py::arg("P"));
	cls_Extrema_ExtPExtS.def("IsDone", (Standard_Boolean (Extrema_ExtPExtS::*)() const ) &Extrema_ExtPExtS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtPExtS.def("NbExt", (Standard_Integer (Extrema_ExtPExtS::*)() const ) &Extrema_ExtPExtS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPExtS.def("SquareDistance", (Standard_Real (Extrema_ExtPExtS::*)(const Standard_Integer) const ) &Extrema_ExtPExtS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtPExtS.def("Point", (const Extrema_POnSurf & (Extrema_ExtPExtS::*)(const Standard_Integer) const ) &Extrema_ExtPExtS::Point, "Returns the point of the Nth resulting distance.", py::arg("N"));
	cls_Extrema_ExtPExtS.def_static("get_type_name_", (const char * (*)()) &Extrema_ExtPExtS::get_type_name, "None");
	cls_Extrema_ExtPExtS.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_ExtPExtS::get_type_descriptor, "None");
	cls_Extrema_ExtPExtS.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_ExtPExtS::*)() const ) &Extrema_ExtPExtS::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPRevS.hxx
	py::class_<Extrema_ExtPRevS, opencascade::handle<Extrema_ExtPRevS>, Standard_Transient> cls_Extrema_ExtPRevS(mod, "Extrema_ExtPRevS", "It calculates all the extremum (minimum and maximum) distances between a point and a surface of revolution.");
	cls_Extrema_ExtPRevS.def(py::init<>());
	cls_Extrema_ExtPRevS.def(py::init<const gp_Pnt &, const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPRevS.def(py::init<const gp_Pnt &, const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPRevS.def("Initialize", (void (Extrema_ExtPRevS::*)(const opencascade::handle<GeomAdaptor_HSurfaceOfRevolution> &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPRevS::Initialize, "None", py::arg("S"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPRevS.def("Perform", (void (Extrema_ExtPRevS::*)(const gp_Pnt &)) &Extrema_ExtPRevS::Perform, "None", py::arg("P"));
	cls_Extrema_ExtPRevS.def("IsDone", (Standard_Boolean (Extrema_ExtPRevS::*)() const ) &Extrema_ExtPRevS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtPRevS.def("NbExt", (Standard_Integer (Extrema_ExtPRevS::*)() const ) &Extrema_ExtPRevS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPRevS.def("SquareDistance", (Standard_Real (Extrema_ExtPRevS::*)(const Standard_Integer) const ) &Extrema_ExtPRevS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtPRevS.def("Point", (const Extrema_POnSurf & (Extrema_ExtPRevS::*)(const Standard_Integer) const ) &Extrema_ExtPRevS::Point, "Returns the point of the Nth resulting distance.", py::arg("N"));
	cls_Extrema_ExtPRevS.def_static("get_type_name_", (const char * (*)()) &Extrema_ExtPRevS::get_type_name, "None");
	cls_Extrema_ExtPRevS.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_ExtPRevS::get_type_descriptor, "None");
	cls_Extrema_ExtPRevS.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_ExtPRevS::*)() const ) &Extrema_ExtPRevS::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPS.hxx
	py::class_<Extrema_ExtPS, std::unique_ptr<Extrema_ExtPS, Deleter<Extrema_ExtPS>>> cls_Extrema_ExtPS(mod, "Extrema_ExtPS", "It calculates all the extremum distances between a point and a surface. These distances can be minimum or maximum.");
	cls_Extrema_ExtPS.def(py::init<>());
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Extrema_ExtFlag>(), py::arg("P"), py::arg("S"), py::arg("TolU"), py::arg("TolV"), py::arg("F"));
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Extrema_ExtFlag, const Extrema_ExtAlgo>(), py::arg("P"), py::arg("S"), py::arg("TolU"), py::arg("TolV"), py::arg("F"), py::arg("A"));
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Extrema_ExtFlag>(), py::arg("P"), py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"), py::arg("F"));
	cls_Extrema_ExtPS.def(py::init<const gp_Pnt &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Extrema_ExtFlag, const Extrema_ExtAlgo>(), py::arg("P"), py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"), py::arg("F"), py::arg("A"));
	cls_Extrema_ExtPS.def("Initialize", (void (Extrema_ExtPS::*)(const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPS::Initialize, "Initializes the fields of the algorithm.", py::arg("S"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_ExtPS.def("Perform", (void (Extrema_ExtPS::*)(const gp_Pnt &)) &Extrema_ExtPS::Perform, "Computes the distances. An exception is raised if the fieds have not been initialized.", py::arg("P"));
	cls_Extrema_ExtPS.def("IsDone", (Standard_Boolean (Extrema_ExtPS::*)() const ) &Extrema_ExtPS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtPS.def("NbExt", (Standard_Integer (Extrema_ExtPS::*)() const ) &Extrema_ExtPS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPS.def("SquareDistance", (Standard_Real (Extrema_ExtPS::*)(const Standard_Integer) const ) &Extrema_ExtPS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_ExtPS.def("Point", (const Extrema_POnSurf & (Extrema_ExtPS::*)(const Standard_Integer) const ) &Extrema_ExtPS::Point, "Returns the point of the Nth resulting distance.", py::arg("N"));
	cls_Extrema_ExtPS.def("TrimmedSquareDistances", (void (Extrema_ExtPS::*)(Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &, gp_Pnt &, gp_Pnt &, gp_Pnt &, gp_Pnt &) const ) &Extrema_ExtPS::TrimmedSquareDistances, "if the surface is a trimmed surface, dUfVf is a square distance between <P> and the point of parameter FirstUParameter and FirstVParameter <PUfVf>. dUfVl is a square distance between <P> and the point of parameter FirstUParameter and LastVParameter <PUfVl>. dUlVf is a square distance between <P> and the point of parameter LastUParameter and FirstVParameter <PUlVf>. dUlVl is a square distance between <P> and the point of parameter LastUParameter and LastVParameter <PUlVl>.", py::arg("dUfVf"), py::arg("dUfVl"), py::arg("dUlVf"), py::arg("dUlVl"), py::arg("PUfVf"), py::arg("PUfVl"), py::arg("PUlVf"), py::arg("PUlVl"));
	cls_Extrema_ExtPS.def("SetFlag", (void (Extrema_ExtPS::*)(const Extrema_ExtFlag)) &Extrema_ExtPS::SetFlag, "None", py::arg("F"));
	cls_Extrema_ExtPS.def("SetAlgo", (void (Extrema_ExtPS::*)(const Extrema_ExtAlgo)) &Extrema_ExtPS::SetAlgo, "None", py::arg("A"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx
	py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC, std::unique_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC, Deleter<Extrema_PCLocFOfLocEPCOfLocateExtPC>>, math_FunctionWithDerivative> cls_Extrema_PCLocFOfLocEPCOfLocateExtPC(mod, "Extrema_PCLocFOfLocEPCOfLocateExtPC", "None");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def(py::init<>());
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("Initialize", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Adaptor3d_Curve &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("SetPoint", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const gp_Pnt &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("Value", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("Derivative", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("Values", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("GetStateNumber", (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)()) &Extrema_PCLocFOfLocEPCOfLocateExtPC::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("NbExt", (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)() const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("SquareDistance", (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("IsMin", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("SubIntervalInitialize", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)(const Standard_Real, const Standard_Real)) &Extrema_PCLocFOfLocEPCOfLocateExtPC::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC.def("SearchOfTolerance", (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC::*)()) &Extrema_PCLocFOfLocEPCOfLocateExtPC::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocEPCOfLocateExtPC.hxx
	py::class_<Extrema_LocEPCOfLocateExtPC, std::unique_ptr<Extrema_LocEPCOfLocateExtPC, Deleter<Extrema_LocEPCOfLocateExtPC>>> cls_Extrema_LocEPCOfLocateExtPC(mod, "Extrema_LocEPCOfLocateExtPC", "None");
	cls_Extrema_LocEPCOfLocateExtPC.def(py::init<>());
	cls_Extrema_LocEPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC.def("Initialize", (void (Extrema_LocEPCOfLocateExtPC::*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_LocEPCOfLocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC.def("Perform", (void (Extrema_LocEPCOfLocateExtPC::*)(const gp_Pnt &, const Standard_Real)) &Extrema_LocEPCOfLocateExtPC::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"), py::arg("U0"));
	cls_Extrema_LocEPCOfLocateExtPC.def("IsDone", (Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const ) &Extrema_LocEPCOfLocateExtPC::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocEPCOfLocateExtPC.def("SquareDistance", (Standard_Real (Extrema_LocEPCOfLocateExtPC::*)() const ) &Extrema_LocEPCOfLocateExtPC::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocEPCOfLocateExtPC.def("IsMin", (Standard_Boolean (Extrema_LocEPCOfLocateExtPC::*)() const ) &Extrema_LocEPCOfLocateExtPC::IsMin, "Returns True if the extremum distance is a minimum.");
	cls_Extrema_LocEPCOfLocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_LocEPCOfLocateExtPC::*)() const ) &Extrema_LocEPCOfLocateExtPC::Point, "Returns the point of the extremum distance.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx
	py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC, std::unique_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC, Deleter<Extrema_PCFOfEPCOfELPCOfLocateExtPC>>, math_FunctionWithDerivative> cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC(mod, "Extrema_PCFOfEPCOfELPCOfLocateExtPC", "None");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def(py::init<>());
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("Initialize", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Adaptor3d_Curve &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("SetPoint", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const gp_Pnt &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("Value", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("Derivative", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("Values", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("GetStateNumber", (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)()) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("NbExt", (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)() const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("SquareDistance", (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("IsMin", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("SubIntervalInitialize", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)(const Standard_Real, const Standard_Real)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC.def("SearchOfTolerance", (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC::*)()) &Extrema_PCFOfEPCOfELPCOfLocateExtPC::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_EPCOfELPCOfLocateExtPC.hxx
	py::class_<Extrema_EPCOfELPCOfLocateExtPC, std::unique_ptr<Extrema_EPCOfELPCOfLocateExtPC, Deleter<Extrema_EPCOfELPCOfLocateExtPC>>> cls_Extrema_EPCOfELPCOfLocateExtPC(mod, "Extrema_EPCOfELPCOfLocateExtPC", "None");
	cls_Extrema_EPCOfELPCOfLocateExtPC.def(py::init<>());
	cls_Extrema_EPCOfELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC::*)(const Adaptor3d_Curve &)) &Extrema_EPCOfELPCOfLocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC::*)(const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Perform", (void (Extrema_EPCOfELPCOfLocateExtPC::*)(const gp_Pnt &)) &Extrema_EPCOfELPCOfLocateExtPC::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("IsDone", (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)() const ) &Extrema_EPCOfELPCOfLocateExtPC::IsDone, "True if the distances are found.");
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("NbExt", (Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC::*)() const ) &Extrema_EPCOfELPCOfLocateExtPC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("SquareDistance", (Standard_Real (Extrema_EPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("IsMin", (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_EPCOfELPCOfLocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_EPCOfELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ELPCOfLocateExtPC.hxx
	py::class_<Extrema_ELPCOfLocateExtPC, std::unique_ptr<Extrema_ELPCOfLocateExtPC, Deleter<Extrema_ELPCOfLocateExtPC>>> cls_Extrema_ELPCOfLocateExtPC(mod, "Extrema_ELPCOfLocateExtPC", "None");
	cls_Extrema_ELPCOfLocateExtPC.def(py::init<>());
	cls_Extrema_ELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_ELPCOfLocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC.def("Initialize", [](Extrema_ELPCOfLocateExtPC &self, const Adaptor3d_Curve & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Initialize(a0, a1, a2); }, py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ELPCOfLocateExtPC.def("Initialize", (void (Extrema_ELPCOfLocateExtPC::*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ELPCOfLocateExtPC::Initialize, "initializes the fields of the algorithm.", py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC.def("Perform", (void (Extrema_ELPCOfLocateExtPC::*)(const gp_Pnt &)) &Extrema_ELPCOfLocateExtPC::Perform, "An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_ELPCOfLocateExtPC.def("IsDone", (Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)() const ) &Extrema_ELPCOfLocateExtPC::IsDone, "True if the distances are found.");
	cls_Extrema_ELPCOfLocateExtPC.def("SquareDistance", (Standard_Real (Extrema_ELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC::SquareDistance, "Returns the value of the <N>th extremum square distance.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC.def("NbExt", (Standard_Integer (Extrema_ELPCOfLocateExtPC::*)() const ) &Extrema_ELPCOfLocateExtPC::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ELPCOfLocateExtPC.def("IsMin", (Standard_Boolean (Extrema_ELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC::IsMin, "Returns True if the <N>th extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_ELPCOfLocateExtPC::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC::Point, "Returns the point of the <N>th extremum distance.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC.def("TrimmedSquareDistances", (void (Extrema_ELPCOfLocateExtPC::*)(Standard_Real &, Standard_Real &, gp_Pnt &, gp_Pnt &) const ) &Extrema_ELPCOfLocateExtPC::TrimmedSquareDistances, "if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.", py::arg("dist1"), py::arg("dist2"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocateExtPC.hxx
	py::class_<Extrema_LocateExtPC, std::unique_ptr<Extrema_LocateExtPC, Deleter<Extrema_LocateExtPC>>> cls_Extrema_LocateExtPC(mod, "Extrema_LocateExtPC", "None");
	cls_Extrema_LocateExtPC.def(py::init<>());
	cls_Extrema_LocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("TolF"));
	cls_Extrema_LocateExtPC.def(py::init<const gp_Pnt &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("Umin"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_LocateExtPC.def("Initialize", (void (Extrema_LocateExtPC::*)(const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_LocateExtPC::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("Umin"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_LocateExtPC.def("Perform", (void (Extrema_LocateExtPC::*)(const gp_Pnt &, const Standard_Real)) &Extrema_LocateExtPC::Perform, "None", py::arg("P"), py::arg("U0"));
	cls_Extrema_LocateExtPC.def("IsDone", (Standard_Boolean (Extrema_LocateExtPC::*)() const ) &Extrema_LocateExtPC::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocateExtPC.def("SquareDistance", (Standard_Real (Extrema_LocateExtPC::*)() const ) &Extrema_LocateExtPC::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocateExtPC.def("IsMin", (Standard_Boolean (Extrema_LocateExtPC::*)() const ) &Extrema_LocateExtPC::IsMin, "Returns True if the extremum distance is a minimum.");
	cls_Extrema_LocateExtPC.def("Point", (const Extrema_POnCurv & (Extrema_LocateExtPC::*)() const ) &Extrema_LocateExtPC::Point, "Returns the point of the extremum distance.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocateExtCC.hxx
	py::class_<Extrema_LocateExtCC, std::unique_ptr<Extrema_LocateExtCC, Deleter<Extrema_LocateExtCC>>> cls_Extrema_LocateExtCC(mod, "Extrema_LocateExtCC", "It calculates the distance between two curves with a close point; these distances can be maximum or minimum.");
	cls_Extrema_LocateExtCC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U0"), py::arg("V0"));
	cls_Extrema_LocateExtCC.def("IsDone", (Standard_Boolean (Extrema_LocateExtCC::*)() const ) &Extrema_LocateExtCC::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocateExtCC.def("SquareDistance", (Standard_Real (Extrema_LocateExtCC::*)() const ) &Extrema_LocateExtCC::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocateExtCC.def("Point", (void (Extrema_LocateExtCC::*)(Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_LocateExtCC::Point, "Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_POnCurv2d.hxx
	py::class_<Extrema_POnCurv2d, std::unique_ptr<Extrema_POnCurv2d, Deleter<Extrema_POnCurv2d>>> cls_Extrema_POnCurv2d(mod, "Extrema_POnCurv2d", "None");
	cls_Extrema_POnCurv2d.def(py::init<>());
	cls_Extrema_POnCurv2d.def(py::init<const Standard_Real, const gp_Pnt2d &>(), py::arg("U"), py::arg("P"));
	cls_Extrema_POnCurv2d.def("SetValues", (void (Extrema_POnCurv2d::*)(const Standard_Real, const gp_Pnt2d &)) &Extrema_POnCurv2d::SetValues, "sets the point and parameter values.", py::arg("U"), py::arg("P"));
	cls_Extrema_POnCurv2d.def("Value", (const gp_Pnt2d & (Extrema_POnCurv2d::*)() const ) &Extrema_POnCurv2d::Value, "Returns the point.");
	cls_Extrema_POnCurv2d.def("Parameter", (Standard_Real (Extrema_POnCurv2d::*)() const ) &Extrema_POnCurv2d::Parameter, "Returns the parameter on the curve.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_CCLocFOfLocECC.hxx
	py::class_<Extrema_CCLocFOfLocECC, std::unique_ptr<Extrema_CCLocFOfLocECC, Deleter<Extrema_CCLocFOfLocECC>>, math_FunctionSetWithDerivatives> cls_Extrema_CCLocFOfLocECC(mod, "Extrema_CCLocFOfLocECC", "None");
	cls_Extrema_CCLocFOfLocECC.def(py::init<>());
	cls_Extrema_CCLocFOfLocECC.def(py::init<const Standard_Real>(), py::arg("thetol"));
	cls_Extrema_CCLocFOfLocECC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_CCLocFOfLocECC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("thetol"));
	cls_Extrema_CCLocFOfLocECC.def("SetCurve", (void (Extrema_CCLocFOfLocECC::*)(const Standard_Integer, const Adaptor3d_Curve &)) &Extrema_CCLocFOfLocECC::SetCurve, "None", py::arg("theRank"), py::arg("C1"));
	cls_Extrema_CCLocFOfLocECC.def("SetTolerance", (void (Extrema_CCLocFOfLocECC::*)(const Standard_Real)) &Extrema_CCLocFOfLocECC::SetTolerance, "None", py::arg("theTol"));
	cls_Extrema_CCLocFOfLocECC.def("NbVariables", (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const ) &Extrema_CCLocFOfLocECC::NbVariables, "None");
	cls_Extrema_CCLocFOfLocECC.def("NbEquations", (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const ) &Extrema_CCLocFOfLocECC::NbEquations, "None");
	cls_Extrema_CCLocFOfLocECC.def("Value", (Standard_Boolean (Extrema_CCLocFOfLocECC::*)(const math_Vector &, math_Vector &)) &Extrema_CCLocFOfLocECC::Value, "Calculate Fi(U,V).", py::arg("UV"), py::arg("F"));
	cls_Extrema_CCLocFOfLocECC.def("Derivatives", (Standard_Boolean (Extrema_CCLocFOfLocECC::*)(const math_Vector &, math_Matrix &)) &Extrema_CCLocFOfLocECC::Derivatives, "Calculate Fi'(U,V).", py::arg("UV"), py::arg("DF"));
	cls_Extrema_CCLocFOfLocECC.def("Values", (Standard_Boolean (Extrema_CCLocFOfLocECC::*)(const math_Vector &, math_Vector &, math_Matrix &)) &Extrema_CCLocFOfLocECC::Values, "Calculate Fi(U,V) and Fi'(U,V).", py::arg("UV"), py::arg("F"), py::arg("DF"));
	cls_Extrema_CCLocFOfLocECC.def("GetStateNumber", (Standard_Integer (Extrema_CCLocFOfLocECC::*)()) &Extrema_CCLocFOfLocECC::GetStateNumber, "Save the found extremum.");
	cls_Extrema_CCLocFOfLocECC.def("NbExt", (Standard_Integer (Extrema_CCLocFOfLocECC::*)() const ) &Extrema_CCLocFOfLocECC::NbExt, "Return the number of found extrema.");
	cls_Extrema_CCLocFOfLocECC.def("SquareDistance", (Standard_Real (Extrema_CCLocFOfLocECC::*)(const Standard_Integer) const ) &Extrema_CCLocFOfLocECC::SquareDistance, "Return the value of the Nth distance.", py::arg("N"));
	cls_Extrema_CCLocFOfLocECC.def("Points", (void (Extrema_CCLocFOfLocECC::*)(const Standard_Integer, Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_CCLocFOfLocECC::Points, "Return the points of the Nth extreme distance.", py::arg("N"), py::arg("P1"), py::arg("P2"));
	cls_Extrema_CCLocFOfLocECC.def("CurvePtr", (Standard_Address (Extrema_CCLocFOfLocECC::*)(const Standard_Integer) const ) &Extrema_CCLocFOfLocECC::CurvePtr, "Returns a pointer to the curve specified in the constructor or in SetCurve() method.", py::arg("theRank"));
	cls_Extrema_CCLocFOfLocECC.def("Tolerance", (Standard_Real (Extrema_CCLocFOfLocECC::*)() const ) &Extrema_CCLocFOfLocECC::Tolerance, "Returns a tolerance specified in the constructor or in SetTolerance() method.");
	cls_Extrema_CCLocFOfLocECC.def("SubIntervalInitialize", (void (Extrema_CCLocFOfLocECC::*)(const math_Vector &, const math_Vector &)) &Extrema_CCLocFOfLocECC::SubIntervalInitialize, "Determines of boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_CCLocFOfLocECC.def("SearchOfTolerance", (Standard_Real (Extrema_CCLocFOfLocECC::*)(const Standard_Address)) &Extrema_CCLocFOfLocECC::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.", py::arg("C"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_Curve2dTool.hxx
	py::class_<Extrema_Curve2dTool, std::unique_ptr<Extrema_Curve2dTool, Deleter<Extrema_Curve2dTool>>> cls_Extrema_Curve2dTool(mod, "Extrema_Curve2dTool", "None");
	cls_Extrema_Curve2dTool.def(py::init<>());
	cls_Extrema_Curve2dTool.def_static("FirstParameter_", (Standard_Real (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::FirstParameter, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("LastParameter_", (Standard_Real (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::LastParameter, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Continuity_", (GeomAbs_Shape (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Continuity, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("NbIntervals_", (Standard_Integer (*)(const Adaptor2d_Curve2d &, const GeomAbs_Shape)) &Extrema_Curve2dTool::NbIntervals, "If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.", py::arg("C"), py::arg("S"));
	cls_Extrema_Curve2dTool.def_static("Intervals_", (void (*)(const Adaptor2d_Curve2d &, TColStd_Array1OfReal &, const GeomAbs_Shape)) &Extrema_Curve2dTool::Intervals, "Stores in <T> the parameters bounding the intervals of continuity <S>.", py::arg("C"), py::arg("T"), py::arg("S"));
	cls_Extrema_Curve2dTool.def_static("DeflCurvIntervals_", (opencascade::handle<TColStd_HArray1OfReal> (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::DeflCurvIntervals, "Returns the parameters bounding the intervals of subdivision of curve according to Curvature deflection. Value of deflection is defined in method.", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("IsClosed_", (Standard_Boolean (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::IsClosed, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("IsPeriodic_", (Standard_Boolean (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::IsPeriodic, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Period_", (Standard_Real (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Period, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Value_", (gp_Pnt2d (*)(const Adaptor2d_Curve2d &, const Standard_Real)) &Extrema_Curve2dTool::Value, "Computes the point of parameter U on the curve.", py::arg("C"), py::arg("U"));
	cls_Extrema_Curve2dTool.def_static("D0_", (void (*)(const Adaptor2d_Curve2d &, const Standard_Real, gp_Pnt2d &)) &Extrema_Curve2dTool::D0, "Computes the point of parameter U on the curve.", py::arg("C"), py::arg("U"), py::arg("P"));
	cls_Extrema_Curve2dTool.def_static("D1_", (void (*)(const Adaptor2d_Curve2d &, const Standard_Real, gp_Pnt2d &, gp_Vec2d &)) &Extrema_Curve2dTool::D1, "Computes the point of parameter U on the curve with its first derivative.", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V"));
	cls_Extrema_Curve2dTool.def_static("D2_", (void (*)(const Adaptor2d_Curve2d &, const Standard_Real, gp_Pnt2d &, gp_Vec2d &, gp_Vec2d &)) &Extrema_Curve2dTool::D2, "Returns the point P of parameter U, the first and second derivatives V1 and V2.", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V1"), py::arg("V2"));
	cls_Extrema_Curve2dTool.def_static("D3_", (void (*)(const Adaptor2d_Curve2d &, const Standard_Real, gp_Pnt2d &, gp_Vec2d &, gp_Vec2d &, gp_Vec2d &)) &Extrema_Curve2dTool::D3, "Returns the point P of parameter U, the first, the second and the third derivative.", py::arg("C"), py::arg("U"), py::arg("P"), py::arg("V1"), py::arg("V2"), py::arg("V3"));
	cls_Extrema_Curve2dTool.def_static("DN_", (gp_Vec2d (*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Integer)) &Extrema_Curve2dTool::DN, "The returned vector gives the value of the derivative for the order of derivation N.", py::arg("C"), py::arg("U"), py::arg("N"));
	cls_Extrema_Curve2dTool.def_static("Resolution_", (Standard_Real (*)(const Adaptor2d_Curve2d &, const Standard_Real)) &Extrema_Curve2dTool::Resolution, "Returns the parametric resolution corresponding to the real space resolution <R3d>.", py::arg("C"), py::arg("R3d"));
	cls_Extrema_Curve2dTool.def_static("GetType_", (GeomAbs_CurveType (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::GetType, "Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Line_", (gp_Lin2d (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Line, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Circle_", (gp_Circ2d (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Circle, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Ellipse_", (gp_Elips2d (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Ellipse, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Hyperbola_", (gp_Hypr2d (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Hyperbola, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Parabola_", (gp_Parab2d (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Parabola, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Degree_", (Standard_Integer (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Degree, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("IsRational_", (Standard_Boolean (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::IsRational, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("NbPoles_", (Standard_Integer (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::NbPoles, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("NbKnots_", (Standard_Integer (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::NbKnots, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("Bezier_", (opencascade::handle<Geom2d_BezierCurve> (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::Bezier, "None", py::arg("C"));
	cls_Extrema_Curve2dTool.def_static("BSpline_", (opencascade::handle<Geom2d_BSplineCurve> (*)(const Adaptor2d_Curve2d &)) &Extrema_Curve2dTool::BSpline, "None", py::arg("C"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_CCLocFOfLocECC2d.hxx
	py::class_<Extrema_CCLocFOfLocECC2d, std::unique_ptr<Extrema_CCLocFOfLocECC2d, Deleter<Extrema_CCLocFOfLocECC2d>>, math_FunctionSetWithDerivatives> cls_Extrema_CCLocFOfLocECC2d(mod, "Extrema_CCLocFOfLocECC2d", "None");
	cls_Extrema_CCLocFOfLocECC2d.def(py::init<>());
	cls_Extrema_CCLocFOfLocECC2d.def(py::init<const Standard_Real>(), py::arg("thetol"));
	cls_Extrema_CCLocFOfLocECC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_CCLocFOfLocECC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("thetol"));
	cls_Extrema_CCLocFOfLocECC2d.def("SetCurve", (void (Extrema_CCLocFOfLocECC2d::*)(const Standard_Integer, const Adaptor2d_Curve2d &)) &Extrema_CCLocFOfLocECC2d::SetCurve, "None", py::arg("theRank"), py::arg("C1"));
	cls_Extrema_CCLocFOfLocECC2d.def("SetTolerance", (void (Extrema_CCLocFOfLocECC2d::*)(const Standard_Real)) &Extrema_CCLocFOfLocECC2d::SetTolerance, "None", py::arg("theTol"));
	cls_Extrema_CCLocFOfLocECC2d.def("NbVariables", (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const ) &Extrema_CCLocFOfLocECC2d::NbVariables, "None");
	cls_Extrema_CCLocFOfLocECC2d.def("NbEquations", (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const ) &Extrema_CCLocFOfLocECC2d::NbEquations, "None");
	cls_Extrema_CCLocFOfLocECC2d.def("Value", (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)(const math_Vector &, math_Vector &)) &Extrema_CCLocFOfLocECC2d::Value, "Calculate Fi(U,V).", py::arg("UV"), py::arg("F"));
	cls_Extrema_CCLocFOfLocECC2d.def("Derivatives", (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)(const math_Vector &, math_Matrix &)) &Extrema_CCLocFOfLocECC2d::Derivatives, "Calculate Fi'(U,V).", py::arg("UV"), py::arg("DF"));
	cls_Extrema_CCLocFOfLocECC2d.def("Values", (Standard_Boolean (Extrema_CCLocFOfLocECC2d::*)(const math_Vector &, math_Vector &, math_Matrix &)) &Extrema_CCLocFOfLocECC2d::Values, "Calculate Fi(U,V) and Fi'(U,V).", py::arg("UV"), py::arg("F"), py::arg("DF"));
	cls_Extrema_CCLocFOfLocECC2d.def("GetStateNumber", (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)()) &Extrema_CCLocFOfLocECC2d::GetStateNumber, "Save the found extremum.");
	cls_Extrema_CCLocFOfLocECC2d.def("NbExt", (Standard_Integer (Extrema_CCLocFOfLocECC2d::*)() const ) &Extrema_CCLocFOfLocECC2d::NbExt, "Return the number of found extrema.");
	cls_Extrema_CCLocFOfLocECC2d.def("SquareDistance", (Standard_Real (Extrema_CCLocFOfLocECC2d::*)(const Standard_Integer) const ) &Extrema_CCLocFOfLocECC2d::SquareDistance, "Return the value of the Nth distance.", py::arg("N"));
	cls_Extrema_CCLocFOfLocECC2d.def("Points", (void (Extrema_CCLocFOfLocECC2d::*)(const Standard_Integer, Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_CCLocFOfLocECC2d::Points, "Return the points of the Nth extreme distance.", py::arg("N"), py::arg("P1"), py::arg("P2"));
	cls_Extrema_CCLocFOfLocECC2d.def("CurvePtr", (Standard_Address (Extrema_CCLocFOfLocECC2d::*)(const Standard_Integer) const ) &Extrema_CCLocFOfLocECC2d::CurvePtr, "Returns a pointer to the curve specified in the constructor or in SetCurve() method.", py::arg("theRank"));
	cls_Extrema_CCLocFOfLocECC2d.def("Tolerance", (Standard_Real (Extrema_CCLocFOfLocECC2d::*)() const ) &Extrema_CCLocFOfLocECC2d::Tolerance, "Returns a tolerance specified in the constructor or in SetTolerance() method.");
	cls_Extrema_CCLocFOfLocECC2d.def("SubIntervalInitialize", (void (Extrema_CCLocFOfLocECC2d::*)(const math_Vector &, const math_Vector &)) &Extrema_CCLocFOfLocECC2d::SubIntervalInitialize, "Determines of boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_CCLocFOfLocECC2d.def("SearchOfTolerance", (Standard_Real (Extrema_CCLocFOfLocECC2d::*)(const Standard_Address)) &Extrema_CCLocFOfLocECC2d::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.", py::arg("C"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ECC2d.hxx
	py::class_<Extrema_ECC2d, std::unique_ptr<Extrema_ECC2d, Deleter<Extrema_ECC2d>>> cls_Extrema_ECC2d(mod, "Extrema_ECC2d", "None");
	cls_Extrema_ECC2d.def(py::init<>());
	cls_Extrema_ECC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ECC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"));
	cls_Extrema_ECC2d.def("SetParams", (void (Extrema_ECC2d::*)(const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ECC2d::SetParams, "Set params in case of empty constructor is usage.", py::arg("C1"), py::arg("C2"), py::arg("Uinf"), py::arg("Usup"), py::arg("Vinf"), py::arg("Vsup"));
	cls_Extrema_ECC2d.def("SetTolerance", (void (Extrema_ECC2d::*)(const Standard_Real)) &Extrema_ECC2d::SetTolerance, "None", py::arg("Tol"));
	cls_Extrema_ECC2d.def("SetSingleSolutionFlag", (void (Extrema_ECC2d::*)(const Standard_Boolean)) &Extrema_ECC2d::SetSingleSolutionFlag, "Set flag for single extrema computation. Works on parametric solver only.", py::arg("theSingleSolutionFlag"));
	cls_Extrema_ECC2d.def("GetSingleSolutionFlag", (Standard_Boolean (Extrema_ECC2d::*)() const ) &Extrema_ECC2d::GetSingleSolutionFlag, "Get flag for single extrema computation. Works on parametric solver only.");
	cls_Extrema_ECC2d.def("Perform", (void (Extrema_ECC2d::*)()) &Extrema_ECC2d::Perform, "Performs calculations.");
	cls_Extrema_ECC2d.def("IsDone", (Standard_Boolean (Extrema_ECC2d::*)() const ) &Extrema_ECC2d::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ECC2d.def("IsParallel", (Standard_Boolean (Extrema_ECC2d::*)() const ) &Extrema_ECC2d::IsParallel, "Returns state of myParallel flag.");
	cls_Extrema_ECC2d.def("NbExt", (Standard_Integer (Extrema_ECC2d::*)() const ) &Extrema_ECC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ECC2d.def("SquareDistance", [](Extrema_ECC2d &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ECC2d.def("SquareDistance", (Standard_Real (Extrema_ECC2d::*)(const Standard_Integer) const ) &Extrema_ECC2d::SquareDistance, "Returns the value of the Nth square extremum distance.", py::arg("N"));
	cls_Extrema_ECC2d.def("Points", (void (Extrema_ECC2d::*)(const Standard_Integer, Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_ECC2d::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPElC2d.hxx
	py::class_<Extrema_ExtPElC2d, std::unique_ptr<Extrema_ExtPElC2d, Deleter<Extrema_ExtPElC2d>>> cls_Extrema_ExtPElC2d(mod, "Extrema_ExtPElC2d", "It calculates all the distances between a point and an elementary curve. These distances can be minimum or maximum.");
	cls_Extrema_ExtPElC2d.def(py::init<>());
	cls_Extrema_ExtPElC2d.def(py::init<const gp_Pnt2d &, const gp_Lin2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def(py::init<const gp_Pnt2d &, const gp_Circ2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def(py::init<const gp_Pnt2d &, const gp_Elips2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def(py::init<const gp_Pnt2d &, const gp_Hypr2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def(py::init<const gp_Pnt2d &, const gp_Parab2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("Perform", (void (Extrema_ExtPElC2d::*)(const gp_Pnt2d &, const gp_Lin2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC2d::Perform, "None", py::arg("P"), py::arg("L"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("Perform", (void (Extrema_ExtPElC2d::*)(const gp_Pnt2d &, const gp_Circ2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC2d::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("Perform", (void (Extrema_ExtPElC2d::*)(const gp_Pnt2d &, const gp_Elips2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC2d::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("Perform", (void (Extrema_ExtPElC2d::*)(const gp_Pnt2d &, const gp_Hypr2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC2d::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("Perform", (void (Extrema_ExtPElC2d::*)(const gp_Pnt2d &, const gp_Parab2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPElC2d::Perform, "None", py::arg("P"), py::arg("C"), py::arg("Tol"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPElC2d.def("IsDone", (Standard_Boolean (Extrema_ExtPElC2d::*)() const ) &Extrema_ExtPElC2d::IsDone, "True if the distances are found.");
	cls_Extrema_ExtPElC2d.def("NbExt", (Standard_Integer (Extrema_ExtPElC2d::*)() const ) &Extrema_ExtPElC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPElC2d.def("SquareDistance", (Standard_Real (Extrema_ExtPElC2d::*)(const Standard_Integer) const ) &Extrema_ExtPElC2d::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtPElC2d.def("IsMin", (Standard_Boolean (Extrema_ExtPElC2d::*)(const Standard_Integer) const ) &Extrema_ExtPElC2d::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ExtPElC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_ExtPElC2d::*)(const Standard_Integer) const ) &Extrema_ExtPElC2d::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx
	py::class_<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d, std::unique_ptr<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d, Deleter<Extrema_PCFOfEPCOfELPCOfLocateExtPC2d>>, math_FunctionWithDerivative> cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d(mod, "Extrema_PCFOfEPCOfELPCOfLocateExtPC2d", "None");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def(py::init<>());
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("SetPoint", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const gp_Pnt2d &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("Value", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("Derivative", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("Values", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("GetStateNumber", (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)()) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("NbExt", (Standard_Integer (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)() const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("SubIntervalInitialize", (void (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)(const Standard_Real, const Standard_Real)) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.def("SearchOfTolerance", (Standard_Real (Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::*)()) &Extrema_PCFOfEPCOfELPCOfLocateExtPC2d::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_EPCOfELPCOfLocateExtPC2d.hxx
	py::class_<Extrema_EPCOfELPCOfLocateExtPC2d, std::unique_ptr<Extrema_EPCOfELPCOfLocateExtPC2d, Deleter<Extrema_EPCOfELPCOfLocateExtPC2d>>> cls_Extrema_EPCOfELPCOfLocateExtPC2d(mod, "Extrema_EPCOfELPCOfLocateExtPC2d", "None");
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def(py::init<>());
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &)) &Extrema_EPCOfELPCOfLocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfELPCOfLocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Perform", (void (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const gp_Pnt2d &)) &Extrema_EPCOfELPCOfLocateExtPC2d::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("IsDone", (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const ) &Extrema_EPCOfELPCOfLocateExtPC2d::IsDone, "True if the distances are found.");
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("NbExt", (Standard_Integer (Extrema_EPCOfELPCOfLocateExtPC2d::*)() const ) &Extrema_EPCOfELPCOfLocateExtPC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC2d::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC2d::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_EPCOfELPCOfLocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_EPCOfELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfELPCOfLocateExtPC2d::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ELPCOfLocateExtPC2d.hxx
	py::class_<Extrema_ELPCOfLocateExtPC2d, std::unique_ptr<Extrema_ELPCOfLocateExtPC2d, Deleter<Extrema_ELPCOfLocateExtPC2d>>> cls_Extrema_ELPCOfLocateExtPC2d(mod, "Extrema_ELPCOfLocateExtPC2d", "None");
	cls_Extrema_ELPCOfLocateExtPC2d.def(py::init<>());
	cls_Extrema_ELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_ELPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("Initialize", [](Extrema_ELPCOfLocateExtPC2d &self, const Adaptor2d_Curve2d & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Initialize(a0, a1, a2); }, py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("Initialize", (void (Extrema_ELPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ELPCOfLocateExtPC2d::Initialize, "initializes the fields of the algorithm.", py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("Perform", (void (Extrema_ELPCOfLocateExtPC2d::*)(const gp_Pnt2d &)) &Extrema_ELPCOfLocateExtPC2d::Perform, "An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("IsDone", (Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)() const ) &Extrema_ELPCOfLocateExtPC2d::IsDone, "True if the distances are found.");
	cls_Extrema_ELPCOfLocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_ELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC2d::SquareDistance, "Returns the value of the <N>th extremum square distance.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("NbExt", (Standard_Integer (Extrema_ELPCOfLocateExtPC2d::*)() const ) &Extrema_ELPCOfLocateExtPC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ELPCOfLocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_ELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC2d::IsMin, "Returns True if the <N>th extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_ELPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_ELPCOfLocateExtPC2d::Point, "Returns the point of the <N>th extremum distance.", py::arg("N"));
	cls_Extrema_ELPCOfLocateExtPC2d.def("TrimmedSquareDistances", (void (Extrema_ELPCOfLocateExtPC2d::*)(Standard_Real &, Standard_Real &, gp_Pnt2d &, gp_Pnt2d &) const ) &Extrema_ELPCOfLocateExtPC2d::TrimmedSquareDistances, "if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.", py::arg("dist1"), py::arg("dist2"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCFOfEPCOfExtPC2d.hxx
	py::class_<Extrema_PCFOfEPCOfExtPC2d, std::unique_ptr<Extrema_PCFOfEPCOfExtPC2d, Deleter<Extrema_PCFOfEPCOfExtPC2d>>, math_FunctionWithDerivative> cls_Extrema_PCFOfEPCOfExtPC2d(mod, "Extrema_PCFOfEPCOfExtPC2d", "None");
	cls_Extrema_PCFOfEPCOfExtPC2d.def(py::init<>());
	cls_Extrema_PCFOfEPCOfExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("Initialize", (void (Extrema_PCFOfEPCOfExtPC2d::*)(const Adaptor2d_Curve2d &)) &Extrema_PCFOfEPCOfExtPC2d::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("SetPoint", (void (Extrema_PCFOfEPCOfExtPC2d::*)(const gp_Pnt2d &)) &Extrema_PCFOfEPCOfExtPC2d::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("Value", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC2d::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("Derivative", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC2d::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("Values", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCFOfEPCOfExtPC2d::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("GetStateNumber", (Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)()) &Extrema_PCFOfEPCOfExtPC2d::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCFOfEPCOfExtPC2d.def("NbExt", (Standard_Integer (Extrema_PCFOfEPCOfExtPC2d::*)() const ) &Extrema_PCFOfEPCOfExtPC2d::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCFOfEPCOfExtPC2d.def("SquareDistance", (Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC2d::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("IsMin", (Standard_Boolean (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC2d::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCFOfEPCOfExtPC2d::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("SubIntervalInitialize", (void (Extrema_PCFOfEPCOfExtPC2d::*)(const Standard_Real, const Standard_Real)) &Extrema_PCFOfEPCOfExtPC2d::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCFOfEPCOfExtPC2d.def("SearchOfTolerance", (Standard_Real (Extrema_PCFOfEPCOfExtPC2d::*)()) &Extrema_PCFOfEPCOfExtPC2d::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_EPCOfExtPC2d.hxx
	py::class_<Extrema_EPCOfExtPC2d, std::unique_ptr<Extrema_EPCOfExtPC2d, Deleter<Extrema_EPCOfExtPC2d>>> cls_Extrema_EPCOfExtPC2d(mod, "Extrema_EPCOfExtPC2d", "None");
	cls_Extrema_EPCOfExtPC2d.def(py::init<>());
	cls_Extrema_EPCOfExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC2d.def("Initialize", (void (Extrema_EPCOfExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC2d.def("Initialize", (void (Extrema_EPCOfExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC2d.def("Initialize", (void (Extrema_EPCOfExtPC2d::*)(const Adaptor2d_Curve2d &)) &Extrema_EPCOfExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"));
	cls_Extrema_EPCOfExtPC2d.def("Initialize", (void (Extrema_EPCOfExtPC2d::*)(const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_EPCOfExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("NbU"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"), py::arg("TolF"));
	cls_Extrema_EPCOfExtPC2d.def("Perform", (void (Extrema_EPCOfExtPC2d::*)(const gp_Pnt2d &)) &Extrema_EPCOfExtPC2d::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_EPCOfExtPC2d.def("IsDone", (Standard_Boolean (Extrema_EPCOfExtPC2d::*)() const ) &Extrema_EPCOfExtPC2d::IsDone, "True if the distances are found.");
	cls_Extrema_EPCOfExtPC2d.def("NbExt", (Standard_Integer (Extrema_EPCOfExtPC2d::*)() const ) &Extrema_EPCOfExtPC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_EPCOfExtPC2d.def("SquareDistance", (Standard_Real (Extrema_EPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC2d::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_EPCOfExtPC2d.def("IsMin", (Standard_Boolean (Extrema_EPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC2d::IsMin, "Returns True if the Nth extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_EPCOfExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_EPCOfExtPC2d::*)(const Standard_Integer) const ) &Extrema_EPCOfExtPC2d::Point, "Returns the point of the Nth extremum distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtElC2d.hxx
	py::class_<Extrema_ExtElC2d, std::unique_ptr<Extrema_ExtElC2d, Deleter<Extrema_ExtElC2d>>> cls_Extrema_ExtElC2d(mod, "Extrema_ExtElC2d", "It calculates all the distance between two elementary curves. These distances can be maximum or minimum.");
	cls_Extrema_ExtElC2d.def(py::init<>());
	cls_Extrema_ExtElC2d.def(py::init<const gp_Lin2d &, const gp_Lin2d &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("AngTol"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Lin2d &, const gp_Circ2d &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("Tol"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Lin2d &, const gp_Elips2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Lin2d &, const gp_Hypr2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Lin2d &, const gp_Parab2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Circ2d &, const gp_Circ2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Circ2d &, const gp_Elips2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Circ2d &, const gp_Hypr2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def(py::init<const gp_Circ2d &, const gp_Parab2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtElC2d.def("IsDone", (Standard_Boolean (Extrema_ExtElC2d::*)() const ) &Extrema_ExtElC2d::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtElC2d.def("IsParallel", (Standard_Boolean (Extrema_ExtElC2d::*)() const ) &Extrema_ExtElC2d::IsParallel, "Returns True if the two curves are parallel.");
	cls_Extrema_ExtElC2d.def("NbExt", (Standard_Integer (Extrema_ExtElC2d::*)() const ) &Extrema_ExtElC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtElC2d.def("SquareDistance", [](Extrema_ExtElC2d &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtElC2d.def("SquareDistance", (Standard_Real (Extrema_ExtElC2d::*)(const Standard_Integer) const ) &Extrema_ExtElC2d::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtElC2d.def("Points", (void (Extrema_ExtElC2d::*)(const Standard_Integer, Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_ExtElC2d::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtCC2d.hxx
	py::class_<Extrema_ExtCC2d, std::unique_ptr<Extrema_ExtCC2d, Deleter<Extrema_ExtCC2d>>> cls_Extrema_ExtCC2d(mod, "Extrema_ExtCC2d", "It calculates all the distance between two curves. These distances can be maximum or minimum.");
	cls_Extrema_ExtCC2d.def(py::init<>());
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("TolC1"));
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"));
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"));
	cls_Extrema_ExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC2d.def("Initialize", [](Extrema_ExtCC2d &self, const Adaptor2d_Curve2d & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Initialize(a0, a1, a2); }, py::arg("C2"), py::arg("V1"), py::arg("V2"));
	cls_Extrema_ExtCC2d.def("Initialize", [](Extrema_ExtCC2d &self, const Adaptor2d_Curve2d & a0, const Standard_Real a1, const Standard_Real a2, const Standard_Real a3) -> void { return self.Initialize(a0, a1, a2, a3); }, py::arg("C2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"));
	cls_Extrema_ExtCC2d.def("Initialize", (void (Extrema_ExtCC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtCC2d::Initialize, "initializes the fields.", py::arg("C2"), py::arg("V1"), py::arg("V2"), py::arg("TolC1"), py::arg("TolC2"));
	cls_Extrema_ExtCC2d.def("Perform", (void (Extrema_ExtCC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real)) &Extrema_ExtCC2d::Perform, "None", py::arg("C1"), py::arg("U1"), py::arg("U2"));
	cls_Extrema_ExtCC2d.def("IsDone", (Standard_Boolean (Extrema_ExtCC2d::*)() const ) &Extrema_ExtCC2d::IsDone, "Returns True if the distances are found.");
	cls_Extrema_ExtCC2d.def("NbExt", (Standard_Integer (Extrema_ExtCC2d::*)() const ) &Extrema_ExtCC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtCC2d.def("IsParallel", (Standard_Boolean (Extrema_ExtCC2d::*)() const ) &Extrema_ExtCC2d::IsParallel, "Returns True if the two curves are parallel.");
	cls_Extrema_ExtCC2d.def("SquareDistance", [](Extrema_ExtCC2d &self) -> Standard_Real { return self.SquareDistance(); });
	cls_Extrema_ExtCC2d.def("SquareDistance", (Standard_Real (Extrema_ExtCC2d::*)(const Standard_Integer) const ) &Extrema_ExtCC2d::SquareDistance, "Returns the value of the Nth extremum square distance.", py::arg("N"));
	cls_Extrema_ExtCC2d.def("Points", (void (Extrema_ExtCC2d::*)(const Standard_Integer, Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_ExtCC2d::Points, "Returns the points of the Nth extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("N"), py::arg("P1"), py::arg("P2"));
	cls_Extrema_ExtCC2d.def("TrimmedSquareDistances", (void (Extrema_ExtCC2d::*)(Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &, gp_Pnt2d &, gp_Pnt2d &, gp_Pnt2d &, gp_Pnt2d &) const ) &Extrema_ExtCC2d::TrimmedSquareDistances, "if the curve is a trimmed curve, dist11 is a square distance between the point on C1 of parameter FirstParameter and the point of parameter FirstParameter on C2.", py::arg("dist11"), py::arg("distP12"), py::arg("distP21"), py::arg("distP22"), py::arg("P11"), py::arg("P12"), py::arg("P21"), py::arg("P22"));
	cls_Extrema_ExtCC2d.def("SetSingleSolutionFlag", (void (Extrema_ExtCC2d::*)(const Standard_Boolean)) &Extrema_ExtCC2d::SetSingleSolutionFlag, "Set flag for single extrema computation. Works on parametric solver only.", py::arg("theSingleSolutionFlag"));
	cls_Extrema_ExtCC2d.def("GetSingleSolutionFlag", (Standard_Boolean (Extrema_ExtCC2d::*)() const ) &Extrema_ExtCC2d::GetSingleSolutionFlag, "Get flag for single extrema computation. Works on parametric solver only.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_ExtPC2d.hxx
	py::class_<Extrema_ExtPC2d, std::unique_ptr<Extrema_ExtPC2d, Deleter<Extrema_ExtPC2d>>> cls_Extrema_ExtPC2d(mod, "Extrema_ExtPC2d", "None");
	cls_Extrema_ExtPC2d.def(py::init<>());
	cls_Extrema_ExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_ExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("TolF"));
	cls_Extrema_ExtPC2d.def("Initialize", [](Extrema_ExtPC2d &self, const Adaptor2d_Curve2d & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Initialize(a0, a1, a2); }, py::arg("C"), py::arg("Uinf"), py::arg("Usup"));
	cls_Extrema_ExtPC2d.def("Initialize", (void (Extrema_ExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_ExtPC2d::Initialize, "initializes the fields of the algorithm.", py::arg("C"), py::arg("Uinf"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_ExtPC2d.def("Perform", (void (Extrema_ExtPC2d::*)(const gp_Pnt2d &)) &Extrema_ExtPC2d::Perform, "An exception is raised if the fields have not been initialized.", py::arg("P"));
	cls_Extrema_ExtPC2d.def("IsDone", (Standard_Boolean (Extrema_ExtPC2d::*)() const ) &Extrema_ExtPC2d::IsDone, "True if the distances are found.");
	cls_Extrema_ExtPC2d.def("SquareDistance", (Standard_Real (Extrema_ExtPC2d::*)(const Standard_Integer) const ) &Extrema_ExtPC2d::SquareDistance, "Returns the value of the <N>th extremum square distance.", py::arg("N"));
	cls_Extrema_ExtPC2d.def("NbExt", (Standard_Integer (Extrema_ExtPC2d::*)() const ) &Extrema_ExtPC2d::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_ExtPC2d.def("IsMin", (Standard_Boolean (Extrema_ExtPC2d::*)(const Standard_Integer) const ) &Extrema_ExtPC2d::IsMin, "Returns True if the <N>th extremum distance is a minimum.", py::arg("N"));
	cls_Extrema_ExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_ExtPC2d::*)(const Standard_Integer) const ) &Extrema_ExtPC2d::Point, "Returns the point of the <N>th extremum distance.", py::arg("N"));
	cls_Extrema_ExtPC2d.def("TrimmedSquareDistances", (void (Extrema_ExtPC2d::*)(Standard_Real &, Standard_Real &, gp_Pnt2d &, gp_Pnt2d &) const ) &Extrema_ExtPC2d::TrimmedSquareDistances, "if the curve is a trimmed curve, dist1 is a square distance between <P> and the point of parameter FirstParameter <P1> and dist2 is a square distance between <P> and the point of parameter LastParameter <P2>.", py::arg("dist1"), py::arg("dist2"), py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_FuncExtCS.hxx
	py::class_<Extrema_FuncExtCS, std::unique_ptr<Extrema_FuncExtCS, Deleter<Extrema_FuncExtCS>>, math_FunctionSetWithDerivatives> cls_Extrema_FuncExtCS(mod, "Extrema_FuncExtCS", "Function to find extrema of the distance between a curve and a surface.");
	cls_Extrema_FuncExtCS.def(py::init<>());
	cls_Extrema_FuncExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &>(), py::arg("C"), py::arg("S"));
	cls_Extrema_FuncExtCS.def("Initialize", (void (Extrema_FuncExtCS::*)(const Adaptor3d_Curve &, const Adaptor3d_Surface &)) &Extrema_FuncExtCS::Initialize, "sets the field mysurf of the function.", py::arg("C"), py::arg("S"));
	cls_Extrema_FuncExtCS.def("NbVariables", (Standard_Integer (Extrema_FuncExtCS::*)() const ) &Extrema_FuncExtCS::NbVariables, "None");
	cls_Extrema_FuncExtCS.def("NbEquations", (Standard_Integer (Extrema_FuncExtCS::*)() const ) &Extrema_FuncExtCS::NbEquations, "None");
	cls_Extrema_FuncExtCS.def("Value", (Standard_Boolean (Extrema_FuncExtCS::*)(const math_Vector &, math_Vector &)) &Extrema_FuncExtCS::Value, "Calculation of Fi(U,V).", py::arg("UV"), py::arg("F"));
	cls_Extrema_FuncExtCS.def("Derivatives", (Standard_Boolean (Extrema_FuncExtCS::*)(const math_Vector &, math_Matrix &)) &Extrema_FuncExtCS::Derivatives, "Calculation of Fi'(U,V).", py::arg("UV"), py::arg("DF"));
	cls_Extrema_FuncExtCS.def("Values", (Standard_Boolean (Extrema_FuncExtCS::*)(const math_Vector &, math_Vector &, math_Matrix &)) &Extrema_FuncExtCS::Values, "Calculation of Fi(U,V) and Fi'(U,V).", py::arg("UV"), py::arg("F"), py::arg("DF"));
	cls_Extrema_FuncExtCS.def("GetStateNumber", (Standard_Integer (Extrema_FuncExtCS::*)()) &Extrema_FuncExtCS::GetStateNumber, "Save the found extremum.");
	cls_Extrema_FuncExtCS.def("NbExt", (Standard_Integer (Extrema_FuncExtCS::*)() const ) &Extrema_FuncExtCS::NbExt, "Return the number of found extrema.");
	cls_Extrema_FuncExtCS.def("SquareDistance", (Standard_Real (Extrema_FuncExtCS::*)(const Standard_Integer) const ) &Extrema_FuncExtCS::SquareDistance, "Return the value of the Nth distance.", py::arg("N"));
	cls_Extrema_FuncExtCS.def("PointOnCurve", (const Extrema_POnCurv & (Extrema_FuncExtCS::*)(const Standard_Integer) const ) &Extrema_FuncExtCS::PointOnCurve, "Returns the Nth extremum on C.", py::arg("N"));
	cls_Extrema_FuncExtCS.def("PointOnSurface", (const Extrema_POnSurf & (Extrema_FuncExtCS::*)(const Standard_Integer) const ) &Extrema_FuncExtCS::PointOnSurface, "Return the Nth extremum on S.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_FuncExtSS.hxx
	py::class_<Extrema_FuncExtSS, std::unique_ptr<Extrema_FuncExtSS, Deleter<Extrema_FuncExtSS>>, math_FunctionSetWithDerivatives> cls_Extrema_FuncExtSS(mod, "Extrema_FuncExtSS", "Function to find extrema of the distance between two surfaces.");
	cls_Extrema_FuncExtSS.def(py::init<>());
	cls_Extrema_FuncExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &>(), py::arg("S1"), py::arg("S2"));
	cls_Extrema_FuncExtSS.def("Initialize", (void (Extrema_FuncExtSS::*)(const Adaptor3d_Surface &, const Adaptor3d_Surface &)) &Extrema_FuncExtSS::Initialize, "sets the field mysurf of the function.", py::arg("S1"), py::arg("S2"));
	cls_Extrema_FuncExtSS.def("NbVariables", (Standard_Integer (Extrema_FuncExtSS::*)() const ) &Extrema_FuncExtSS::NbVariables, "None");
	cls_Extrema_FuncExtSS.def("NbEquations", (Standard_Integer (Extrema_FuncExtSS::*)() const ) &Extrema_FuncExtSS::NbEquations, "None");
	cls_Extrema_FuncExtSS.def("Value", (Standard_Boolean (Extrema_FuncExtSS::*)(const math_Vector &, math_Vector &)) &Extrema_FuncExtSS::Value, "Calculate Fi(U,V).", py::arg("UV"), py::arg("F"));
	cls_Extrema_FuncExtSS.def("Derivatives", (Standard_Boolean (Extrema_FuncExtSS::*)(const math_Vector &, math_Matrix &)) &Extrema_FuncExtSS::Derivatives, "Calculate Fi'(U,V).", py::arg("UV"), py::arg("DF"));
	cls_Extrema_FuncExtSS.def("Values", (Standard_Boolean (Extrema_FuncExtSS::*)(const math_Vector &, math_Vector &, math_Matrix &)) &Extrema_FuncExtSS::Values, "Calculate Fi(U,V) and Fi'(U,V).", py::arg("UV"), py::arg("F"), py::arg("DF"));
	cls_Extrema_FuncExtSS.def("GetStateNumber", (Standard_Integer (Extrema_FuncExtSS::*)()) &Extrema_FuncExtSS::GetStateNumber, "Save the found extremum.");
	cls_Extrema_FuncExtSS.def("NbExt", (Standard_Integer (Extrema_FuncExtSS::*)() const ) &Extrema_FuncExtSS::NbExt, "Return the number of found extrema.");
	cls_Extrema_FuncExtSS.def("SquareDistance", (Standard_Real (Extrema_FuncExtSS::*)(const Standard_Integer) const ) &Extrema_FuncExtSS::SquareDistance, "Return the value of the Nth distance.", py::arg("N"));
	cls_Extrema_FuncExtSS.def("PointOnS1", (const Extrema_POnSurf & (Extrema_FuncExtSS::*)(const Standard_Integer) const ) &Extrema_FuncExtSS::PointOnS1, "Return the Nth extremum on S1.", py::arg("N"));
	cls_Extrema_FuncExtSS.def("PointOnS2", (const Extrema_POnSurf & (Extrema_FuncExtSS::*)(const Standard_Integer) const ) &Extrema_FuncExtSS::PointOnS2, "Renvoie le Nieme extremum sur S2.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_FuncPSDist.hxx
	py::class_<Extrema_FuncPSDist, std::unique_ptr<Extrema_FuncPSDist, Deleter<Extrema_FuncPSDist>>, math_MultipleVarFunctionWithGradient> cls_Extrema_FuncPSDist(mod, "Extrema_FuncPSDist", "Functional for search of extremum of the square Euclidean distance between point P and surface S, starting from approximate solution (u0, v0).");
	cls_Extrema_FuncPSDist.def(py::init<const Adaptor3d_Surface &, const gp_Pnt &>(), py::arg("theS"), py::arg("theP"));
	cls_Extrema_FuncPSDist.def("NbVariables", (Standard_Integer (Extrema_FuncPSDist::*)() const ) &Extrema_FuncPSDist::NbVariables, "Number of variables.");
	cls_Extrema_FuncPSDist.def("Value", (Standard_Boolean (Extrema_FuncPSDist::*)(const math_Vector &, Standard_Real &)) &Extrema_FuncPSDist::Value, "Value.", py::arg("X"), py::arg("F"));
	cls_Extrema_FuncPSDist.def("Gradient", (Standard_Boolean (Extrema_FuncPSDist::*)(const math_Vector &, math_Vector &)) &Extrema_FuncPSDist::Gradient, "Gradient.", py::arg("X"), py::arg("G"));
	cls_Extrema_FuncPSDist.def("Values", (Standard_Boolean (Extrema_FuncPSDist::*)(const math_Vector &, Standard_Real &, math_Vector &)) &Extrema_FuncPSDist::Values, "Value and gradient.", py::arg("X"), py::arg("F"), py::arg("G"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenExtCS.hxx
	py::class_<Extrema_GenExtCS, std::unique_ptr<Extrema_GenExtCS, Deleter<Extrema_GenExtCS>>> cls_Extrema_GenExtCS(mod, "Extrema_GenExtCS", "It calculates all the extremum distances between acurve and a surface. These distances can be minimum or maximum.");
	cls_Extrema_GenExtCS.def(py::init<>());
	cls_Extrema_GenExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("C"), py::arg("S"), py::arg("NbT"), py::arg("NbU"), py::arg("NbV"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C"), py::arg("S"), py::arg("NbT"), py::arg("NbU"), py::arg("NbV"), py::arg("tmin"), py::arg("tsup"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenExtCS.def("Initialize", (void (Extrema_GenExtCS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real)) &Extrema_GenExtCS::Initialize, "None", py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Tol2"));
	cls_Extrema_GenExtCS.def("Initialize", (void (Extrema_GenExtCS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenExtCS::Initialize, "None", py::arg("S"), py::arg("NbU"), py::arg("NbV"), py::arg("Umin"), py::arg("Usup"), py::arg("Vmin"), py::arg("Vsup"), py::arg("Tol2"));
	cls_Extrema_GenExtCS.def("Perform", (void (Extrema_GenExtCS::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real)) &Extrema_GenExtCS::Perform, "the algorithm is done with S An exception is raised if the fields have not been initialized.", py::arg("C"), py::arg("NbT"), py::arg("Tol1"));
	cls_Extrema_GenExtCS.def("Perform", (void (Extrema_GenExtCS::*)(const Adaptor3d_Curve &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenExtCS::Perform, "the algorithm is done with C An exception is raised if the fields have not been initialized.", py::arg("C"), py::arg("NbT"), py::arg("tmin"), py::arg("tsup"), py::arg("Tol1"));
	cls_Extrema_GenExtCS.def("IsDone", (Standard_Boolean (Extrema_GenExtCS::*)() const ) &Extrema_GenExtCS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_GenExtCS.def("NbExt", (Standard_Integer (Extrema_GenExtCS::*)() const ) &Extrema_GenExtCS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_GenExtCS.def("SquareDistance", (Standard_Real (Extrema_GenExtCS::*)(const Standard_Integer) const ) &Extrema_GenExtCS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_GenExtCS.def("PointOnCurve", (const Extrema_POnCurv & (Extrema_GenExtCS::*)(const Standard_Integer) const ) &Extrema_GenExtCS::PointOnCurve, "Returns the point of the Nth resulting distance.", py::arg("N"));
	cls_Extrema_GenExtCS.def("PointOnSurface", (const Extrema_POnSurf & (Extrema_GenExtCS::*)(const Standard_Integer) const ) &Extrema_GenExtCS::PointOnSurface, "Returns the point of the Nth resulting distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenExtSS.hxx
	py::class_<Extrema_GenExtSS, std::unique_ptr<Extrema_GenExtSS, Deleter<Extrema_GenExtSS>>> cls_Extrema_GenExtSS(mod, "Extrema_GenExtSS", "It calculates all the extremum distances between two surfaces. These distances can be minimum or maximum.");
	cls_Extrema_GenExtSS.def(py::init<>());
	cls_Extrema_GenExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("S1"), py::arg("S2"), py::arg("NbU"), py::arg("NbV"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("S1"), py::arg("S2"), py::arg("NbU"), py::arg("NbV"), py::arg("U1min"), py::arg("U1sup"), py::arg("V1min"), py::arg("V1sup"), py::arg("U2min"), py::arg("U2sup"), py::arg("V2min"), py::arg("V2sup"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenExtSS.def("Initialize", (void (Extrema_GenExtSS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real)) &Extrema_GenExtSS::Initialize, "None", py::arg("S2"), py::arg("NbU"), py::arg("NbV"), py::arg("Tol2"));
	cls_Extrema_GenExtSS.def("Initialize", (void (Extrema_GenExtSS::*)(const Adaptor3d_Surface &, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenExtSS::Initialize, "None", py::arg("S2"), py::arg("NbU"), py::arg("NbV"), py::arg("U2min"), py::arg("U2sup"), py::arg("V2min"), py::arg("V2sup"), py::arg("Tol2"));
	cls_Extrema_GenExtSS.def("Perform", (void (Extrema_GenExtSS::*)(const Adaptor3d_Surface &, const Standard_Real)) &Extrema_GenExtSS::Perform, "the algorithm is done with S1 An exception is raised if the fields have not been initialized.", py::arg("S1"), py::arg("Tol1"));
	cls_Extrema_GenExtSS.def("Perform", (void (Extrema_GenExtSS::*)(const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenExtSS::Perform, "the algorithm is done withS1 An exception is raised if the fields have not been initialized.", py::arg("S1"), py::arg("U1min"), py::arg("U1sup"), py::arg("V1min"), py::arg("V1sup"), py::arg("Tol1"));
	cls_Extrema_GenExtSS.def("IsDone", (Standard_Boolean (Extrema_GenExtSS::*)() const ) &Extrema_GenExtSS::IsDone, "Returns True if the distances are found.");
	cls_Extrema_GenExtSS.def("NbExt", (Standard_Integer (Extrema_GenExtSS::*)() const ) &Extrema_GenExtSS::NbExt, "Returns the number of extremum distances.");
	cls_Extrema_GenExtSS.def("SquareDistance", (Standard_Real (Extrema_GenExtSS::*)(const Standard_Integer) const ) &Extrema_GenExtSS::SquareDistance, "Returns the value of the Nth resulting square distance.", py::arg("N"));
	cls_Extrema_GenExtSS.def("PointOnS1", (const Extrema_POnSurf & (Extrema_GenExtSS::*)(const Standard_Integer) const ) &Extrema_GenExtSS::PointOnS1, "Returns the point of the Nth resulting distance.", py::arg("N"));
	cls_Extrema_GenExtSS.def("PointOnS2", (const Extrema_POnSurf & (Extrema_GenExtSS::*)(const Standard_Integer) const ) &Extrema_GenExtSS::PointOnS2, "Returns the point of the Nth resulting distance.", py::arg("N"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenLocateExtCS.hxx
	py::class_<Extrema_GenLocateExtCS, std::unique_ptr<Extrema_GenLocateExtCS, Deleter<Extrema_GenLocateExtCS>>> cls_Extrema_GenLocateExtCS(mod, "Extrema_GenLocateExtCS", "With two close points it calculates the distance between two surfaces. This distance can be a minimum or a maximum.");
	cls_Extrema_GenLocateExtCS.def(py::init<>());
	cls_Extrema_GenLocateExtCS.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C"), py::arg("S"), py::arg("T"), py::arg("U"), py::arg("V"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenLocateExtCS.def("Perform", (void (Extrema_GenLocateExtCS::*)(const Adaptor3d_Curve &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenLocateExtCS::Perform, "None", py::arg("C"), py::arg("S"), py::arg("T"), py::arg("U"), py::arg("V"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenLocateExtCS.def("IsDone", (Standard_Boolean (Extrema_GenLocateExtCS::*)() const ) &Extrema_GenLocateExtCS::IsDone, "Returns True if the distance is found.");
	cls_Extrema_GenLocateExtCS.def("SquareDistance", (Standard_Real (Extrema_GenLocateExtCS::*)() const ) &Extrema_GenLocateExtCS::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_GenLocateExtCS.def("PointOnCurve", (const Extrema_POnCurv & (Extrema_GenLocateExtCS::*)() const ) &Extrema_GenLocateExtCS::PointOnCurve, "Returns the point of the extremum distance on C.");
	cls_Extrema_GenLocateExtCS.def("PointOnSurface", (const Extrema_POnSurf & (Extrema_GenLocateExtCS::*)() const ) &Extrema_GenLocateExtCS::PointOnSurface, "Returns the point of the extremum distance on S.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenLocateExtPS.hxx
	py::class_<Extrema_GenLocateExtPS, std::unique_ptr<Extrema_GenLocateExtPS, Deleter<Extrema_GenLocateExtPS>>> cls_Extrema_GenLocateExtPS(mod, "Extrema_GenLocateExtPS", "With a close point, it calculates the distance between a point and a surface. Criteria type is defined in 'Perform' method.");
	cls_Extrema_GenLocateExtPS.def(py::init<const Adaptor3d_Surface &>(), py::arg("theS"));
	cls_Extrema_GenLocateExtPS.def(py::init<const Adaptor3d_Surface &, const Standard_Real>(), py::arg("theS"), py::arg("theTolU"));
	cls_Extrema_GenLocateExtPS.def(py::init<const Adaptor3d_Surface &, const Standard_Real, const Standard_Real>(), py::arg("theS"), py::arg("theTolU"), py::arg("theTolV"));
	cls_Extrema_GenLocateExtPS.def("Perform", [](Extrema_GenLocateExtPS &self, const gp_Pnt & a0, const Standard_Real a1, const Standard_Real a2) -> void { return self.Perform(a0, a1, a2); }, py::arg("theP"), py::arg("theU0"), py::arg("theV0"));
	cls_Extrema_GenLocateExtPS.def("Perform", (void (Extrema_GenLocateExtPS::*)(const gp_Pnt &, const Standard_Real, const Standard_Real, const Standard_Boolean)) &Extrema_GenLocateExtPS::Perform, "Calculates the extrema between the point and the surface using a close point. The close point is defined by the parameter values theU0 and theV0. Type of the algorithm depends on the isDistanceCriteria flag. If flag value is false - normal projection criteria will be used. If flag value is true - distance criteria will be used.", py::arg("theP"), py::arg("theU0"), py::arg("theV0"), py::arg("isDistanceCriteria"));
	cls_Extrema_GenLocateExtPS.def("IsDone", (Standard_Boolean (Extrema_GenLocateExtPS::*)() const ) &Extrema_GenLocateExtPS::IsDone, "Returns True if the distance is found.");
	cls_Extrema_GenLocateExtPS.def("SquareDistance", (Standard_Real (Extrema_GenLocateExtPS::*)() const ) &Extrema_GenLocateExtPS::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_GenLocateExtPS.def("Point", (const Extrema_POnSurf & (Extrema_GenLocateExtPS::*)() const ) &Extrema_GenLocateExtPS::Point, "Returns the point of the extremum distance.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GenLocateExtSS.hxx
	py::class_<Extrema_GenLocateExtSS, std::unique_ptr<Extrema_GenLocateExtSS, Deleter<Extrema_GenLocateExtSS>>> cls_Extrema_GenLocateExtSS(mod, "Extrema_GenLocateExtSS", "With two close points it calculates the distance between two surfaces. This distance can be a minimum or a maximum.");
	cls_Extrema_GenLocateExtSS.def(py::init<>());
	cls_Extrema_GenLocateExtSS.def(py::init<const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("S1"), py::arg("S2"), py::arg("U1"), py::arg("V1"), py::arg("U2"), py::arg("V2"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenLocateExtSS.def("Perform", (void (Extrema_GenLocateExtSS::*)(const Adaptor3d_Surface &, const Adaptor3d_Surface &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_GenLocateExtSS::Perform, "None", py::arg("S1"), py::arg("S2"), py::arg("U1"), py::arg("V1"), py::arg("U2"), py::arg("V2"), py::arg("Tol1"), py::arg("Tol2"));
	cls_Extrema_GenLocateExtSS.def("IsDone", (Standard_Boolean (Extrema_GenLocateExtSS::*)() const ) &Extrema_GenLocateExtSS::IsDone, "Returns True if the distance is found.");
	cls_Extrema_GenLocateExtSS.def("SquareDistance", (Standard_Real (Extrema_GenLocateExtSS::*)() const ) &Extrema_GenLocateExtSS::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_GenLocateExtSS.def("PointOnS1", (const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const ) &Extrema_GenLocateExtSS::PointOnS1, "Returns the point of the extremum distance on S1.");
	cls_Extrema_GenLocateExtSS.def("PointOnS2", (const Extrema_POnSurf & (Extrema_GenLocateExtSS::*)() const ) &Extrema_GenLocateExtSS::PointOnS2, "Returns the point of the extremum distance on S2.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GlobOptFuncCC.hxx
	py::class_<Extrema_GlobOptFuncCCC0, std::unique_ptr<Extrema_GlobOptFuncCCC0, Deleter<Extrema_GlobOptFuncCCC0>>, math_MultipleVarFunction> cls_Extrema_GlobOptFuncCCC0(mod, "Extrema_GlobOptFuncCCC0", "This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C0.");
	cls_Extrema_GlobOptFuncCCC0.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC0.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC0.def("NbVariables", (Standard_Integer (Extrema_GlobOptFuncCCC0::*)() const ) &Extrema_GlobOptFuncCCC0::NbVariables, "None");
	cls_Extrema_GlobOptFuncCCC0.def("Value", (Standard_Boolean (Extrema_GlobOptFuncCCC0::*)(const math_Vector &, Standard_Real &)) &Extrema_GlobOptFuncCCC0::Value, "None", py::arg("X"), py::arg("F"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GlobOptFuncCC.hxx
	py::class_<Extrema_GlobOptFuncCCC1, std::unique_ptr<Extrema_GlobOptFuncCCC1, Deleter<Extrema_GlobOptFuncCCC1>>, math_MultipleVarFunctionWithGradient> cls_Extrema_GlobOptFuncCCC1(mod, "Extrema_GlobOptFuncCCC1", "This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C1.");
	cls_Extrema_GlobOptFuncCCC1.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC1.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC1.def("NbVariables", (Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const ) &Extrema_GlobOptFuncCCC1::NbVariables, "None");
	cls_Extrema_GlobOptFuncCCC1.def("Value", (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)(const math_Vector &, Standard_Real &)) &Extrema_GlobOptFuncCCC1::Value, "None", py::arg("X"), py::arg("F"));
	cls_Extrema_GlobOptFuncCCC1.def("Gradient", (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)(const math_Vector &, math_Vector &)) &Extrema_GlobOptFuncCCC1::Gradient, "None", py::arg("X"), py::arg("G"));
	cls_Extrema_GlobOptFuncCCC1.def("Values", (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)(const math_Vector &, Standard_Real &, math_Vector &)) &Extrema_GlobOptFuncCCC1::Values, "None", py::arg("X"), py::arg("F"), py::arg("G"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GlobOptFuncCC.hxx
	py::class_<Extrema_GlobOptFuncCCC2, std::unique_ptr<Extrema_GlobOptFuncCCC2, Deleter<Extrema_GlobOptFuncCCC2>>, math_MultipleVarFunctionWithHessian> cls_Extrema_GlobOptFuncCCC2(mod, "Extrema_GlobOptFuncCCC2", "This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C2.");
	cls_Extrema_GlobOptFuncCCC2.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC2.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));
	cls_Extrema_GlobOptFuncCCC2.def("NbVariables", (Standard_Integer (Extrema_GlobOptFuncCCC2::*)() const ) &Extrema_GlobOptFuncCCC2::NbVariables, "None");
	cls_Extrema_GlobOptFuncCCC2.def("Value", (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)(const math_Vector &, Standard_Real &)) &Extrema_GlobOptFuncCCC2::Value, "None", py::arg("X"), py::arg("F"));
	cls_Extrema_GlobOptFuncCCC2.def("Gradient", (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)(const math_Vector &, math_Vector &)) &Extrema_GlobOptFuncCCC2::Gradient, "None", py::arg("X"), py::arg("G"));
	cls_Extrema_GlobOptFuncCCC2.def("Values", (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)(const math_Vector &, Standard_Real &, math_Vector &)) &Extrema_GlobOptFuncCCC2::Values, "None", py::arg("X"), py::arg("F"), py::arg("G"));
	cls_Extrema_GlobOptFuncCCC2.def("Values", (Standard_Boolean (Extrema_GlobOptFuncCCC2::*)(const math_Vector &, Standard_Real &, math_Vector &, math_Matrix &)) &Extrema_GlobOptFuncCCC2::Values, "None", py::arg("X"), py::arg("F"), py::arg("G"), py::arg("H"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_GlobOptFuncCS.hxx
	py::class_<Extrema_GlobOptFuncCS, std::unique_ptr<Extrema_GlobOptFuncCS, Deleter<Extrema_GlobOptFuncCS>>, math_MultipleVarFunctionWithHessian> cls_Extrema_GlobOptFuncCS(mod, "Extrema_GlobOptFuncCS", "This class implements function which calculate square Eucluidean distance between point on curve and point on surface in case of continuity is C2.");
	cls_Extrema_GlobOptFuncCS.def(py::init<const Adaptor3d_Curve *, const Adaptor3d_Surface *>(), py::arg("C"), py::arg("S"));
	cls_Extrema_GlobOptFuncCS.def("NbVariables", (Standard_Integer (Extrema_GlobOptFuncCS::*)() const ) &Extrema_GlobOptFuncCS::NbVariables, "None");
	cls_Extrema_GlobOptFuncCS.def("Value", (Standard_Boolean (Extrema_GlobOptFuncCS::*)(const math_Vector &, Standard_Real &)) &Extrema_GlobOptFuncCS::Value, "None", py::arg("theX"), py::arg("theF"));
	cls_Extrema_GlobOptFuncCS.def("Gradient", (Standard_Boolean (Extrema_GlobOptFuncCS::*)(const math_Vector &, math_Vector &)) &Extrema_GlobOptFuncCS::Gradient, "None", py::arg("theX"), py::arg("theG"));
	cls_Extrema_GlobOptFuncCS.def("Values", (Standard_Boolean (Extrema_GlobOptFuncCS::*)(const math_Vector &, Standard_Real &, math_Vector &)) &Extrema_GlobOptFuncCS::Values, "None", py::arg("theX"), py::arg("theF"), py::arg("theG"));
	cls_Extrema_GlobOptFuncCS.def("Values", (Standard_Boolean (Extrema_GlobOptFuncCS::*)(const math_Vector &, Standard_Real &, math_Vector &, math_Matrix &)) &Extrema_GlobOptFuncCS::Values, "None", py::arg("theX"), py::arg("theF"), py::arg("theG"), py::arg("theH"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array1.hxx
	py::class_<Extrema_Array1OfPOnCurv2d, std::unique_ptr<Extrema_Array1OfPOnCurv2d, Deleter<Extrema_Array1OfPOnCurv2d>>> cls_Extrema_Array1OfPOnCurv2d(mod, "Extrema_Array1OfPOnCurv2d", "Purpose: The class Array1 represents unidimensional arrays of fixed size known at run time. The range of the index is user defined. An array1 can be constructed with a 'C array'. This functionality is useful to call methods expecting an Array1. It allows to carry the bounds inside the arrays.");
	cls_Extrema_Array1OfPOnCurv2d.def(py::init<>());
	cls_Extrema_Array1OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnCurv2d.def(py::init([] (const Extrema_Array1OfPOnCurv2d &other) {return new Extrema_Array1OfPOnCurv2d(other);}), "Copy constructor", py::arg("other"));
	// FIXME cls_Extrema_Array1OfPOnCurv2d.def(py::init<Extrema_Array1OfPOnCurv2d &&>(), py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv2d.def(py::init<const Extrema_POnCurv2d &, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_Array1OfPOnCurv2d.def("begin", (Extrema_Array1OfPOnCurv2d::iterator (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::begin, "Returns an iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnCurv2d.def("end", (Extrema_Array1OfPOnCurv2d::iterator (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::end, "Returns an iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnCurv2d.def("cbegin", (Extrema_Array1OfPOnCurv2d::const_iterator (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::cbegin, "Returns a const iterator pointing to the first element in the array.");
	cls_Extrema_Array1OfPOnCurv2d.def("cend", (Extrema_Array1OfPOnCurv2d::const_iterator (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::cend, "Returns a const iterator referring to the past-the-end element in the array.");
	cls_Extrema_Array1OfPOnCurv2d.def("Init", (void (Extrema_Array1OfPOnCurv2d::*)(const Extrema_POnCurv2d &)) &Extrema_Array1OfPOnCurv2d::Init, "Initialise the items with theValue", py::arg("theValue"));
	cls_Extrema_Array1OfPOnCurv2d.def("Size", (Standard_Integer (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::Size, "Size query");
	cls_Extrema_Array1OfPOnCurv2d.def("Length", (Standard_Integer (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::Length, "Length query (the same)");
	cls_Extrema_Array1OfPOnCurv2d.def("IsEmpty", (Standard_Boolean (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::IsEmpty, "Return TRUE if array has zero length.");
	cls_Extrema_Array1OfPOnCurv2d.def("Lower", (Standard_Integer (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::Lower, "Lower bound");
	cls_Extrema_Array1OfPOnCurv2d.def("Upper", (Standard_Integer (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::Upper, "Upper bound");
	cls_Extrema_Array1OfPOnCurv2d.def("IsDeletable", (Standard_Boolean (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::IsDeletable, "myDeletable flag");
	cls_Extrema_Array1OfPOnCurv2d.def("IsAllocated", (Standard_Boolean (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::IsAllocated, "IsAllocated flag - for naming compatibility");
	cls_Extrema_Array1OfPOnCurv2d.def("Assign", (Extrema_Array1OfPOnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Extrema_Array1OfPOnCurv2d &)) &Extrema_Array1OfPOnCurv2d::Assign, "Assignment", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnCurv2d.def("Move", (Extrema_Array1OfPOnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(Extrema_Array1OfPOnCurv2d &&)) &Extrema_Array1OfPOnCurv2d::Move, "Move assignment", py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv2d.def("assign", (Extrema_Array1OfPOnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Extrema_Array1OfPOnCurv2d &)) &Extrema_Array1OfPOnCurv2d::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	// FIXME cls_Extrema_Array1OfPOnCurv2d.def("assign", (Extrema_Array1OfPOnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(Extrema_Array1OfPOnCurv2d &&)) &Extrema_Array1OfPOnCurv2d::operator=, py::is_operator(), "Move assignment operator.", py::arg("theOther"));
	cls_Extrema_Array1OfPOnCurv2d.def("First", (const Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::First, "Returns first element");
	cls_Extrema_Array1OfPOnCurv2d.def("ChangeFirst", (Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)()) &Extrema_Array1OfPOnCurv2d::ChangeFirst, "Returns first element");
	cls_Extrema_Array1OfPOnCurv2d.def("Last", (const Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)() const ) &Extrema_Array1OfPOnCurv2d::Last, "Returns last element");
	cls_Extrema_Array1OfPOnCurv2d.def("ChangeLast", (Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)()) &Extrema_Array1OfPOnCurv2d::ChangeLast, "Returns last element");
	cls_Extrema_Array1OfPOnCurv2d.def("Value", (const Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnCurv2d::Value, "Constant value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv2d.def("__call__", (const Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer) const ) &Extrema_Array1OfPOnCurv2d::operator(), py::is_operator(), "operator() - alias to Value", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv2d.def("ChangeValue", (Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer)) &Extrema_Array1OfPOnCurv2d::ChangeValue, "Variable value access", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv2d.def("__call__", (Extrema_POnCurv2d & (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer)) &Extrema_Array1OfPOnCurv2d::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theIndex"));
	cls_Extrema_Array1OfPOnCurv2d.def("SetValue", (void (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer, const Extrema_POnCurv2d &)) &Extrema_Array1OfPOnCurv2d::SetValue, "Set value", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_Array1OfPOnCurv2d.def("Resize", (void (Extrema_Array1OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer, const Standard_Boolean)) &Extrema_Array1OfPOnCurv2d::Resize, "Resizes the array to specified bounds. No re-allocation will be done if length of array does not change, but existing values will not be discarded if theToCopyData set to FALSE.", py::arg("theLower"), py::arg("theUpper"), py::arg("theToCopyData"));
	cls_Extrema_Array1OfPOnCurv2d.def("__iter__", [](const Extrema_Array1OfPOnCurv2d &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array2.hxx
	py::class_<Extrema_Array2OfPOnCurv, std::unique_ptr<Extrema_Array2OfPOnCurv, Deleter<Extrema_Array2OfPOnCurv>>> cls_Extrema_Array2OfPOnCurv(mod, "Extrema_Array2OfPOnCurv", "Purpose: The class Array2 represents bi-dimensional arrays of fixed size known at run time. The ranges of indices are user defined.");
	cls_Extrema_Array2OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnCurv.def(py::init([] (const Extrema_Array2OfPOnCurv &other) {return new Extrema_Array2OfPOnCurv(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_Array2OfPOnCurv.def(py::init<const Extrema_POnCurv &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnCurv.def("Init", (void (Extrema_Array2OfPOnCurv::*)(const Extrema_POnCurv &)) &Extrema_Array2OfPOnCurv::Init, "Initialise the values", py::arg("theValue"));
	cls_Extrema_Array2OfPOnCurv.def("Size", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::Size, "Size (number of items)");
	cls_Extrema_Array2OfPOnCurv.def("Length", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::Length, "Length (number of items)");
	cls_Extrema_Array2OfPOnCurv.def("RowLength", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::RowLength, "Returns length of the row, i.e. number of columns");
	cls_Extrema_Array2OfPOnCurv.def("ColLength", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::ColLength, "Returns length of the column, i.e. number of rows");
	cls_Extrema_Array2OfPOnCurv.def("LowerRow", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::LowerRow, "LowerRow");
	cls_Extrema_Array2OfPOnCurv.def("UpperRow", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::UpperRow, "UpperRow");
	cls_Extrema_Array2OfPOnCurv.def("LowerCol", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::LowerCol, "LowerCol");
	cls_Extrema_Array2OfPOnCurv.def("UpperCol", (Standard_Integer (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::UpperCol, "UpperCol");
	cls_Extrema_Array2OfPOnCurv.def("IsDeletable", (Standard_Boolean (Extrema_Array2OfPOnCurv::*)() const ) &Extrema_Array2OfPOnCurv::IsDeletable, "myDeletable flag");
	cls_Extrema_Array2OfPOnCurv.def("Assign", (Extrema_Array2OfPOnCurv & (Extrema_Array2OfPOnCurv::*)(const Extrema_Array2OfPOnCurv &)) &Extrema_Array2OfPOnCurv::Assign, "Assignment", py::arg("theOther"));
	cls_Extrema_Array2OfPOnCurv.def("assign", (Extrema_Array2OfPOnCurv & (Extrema_Array2OfPOnCurv::*)(const Extrema_Array2OfPOnCurv &)) &Extrema_Array2OfPOnCurv::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	cls_Extrema_Array2OfPOnCurv.def("Value", (const Extrema_POnCurv & (Extrema_Array2OfPOnCurv::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnCurv::Value, "Constant value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv.def("__call__", (const Extrema_POnCurv & (Extrema_Array2OfPOnCurv::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnCurv::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv.def("ChangeValue", (Extrema_POnCurv & (Extrema_Array2OfPOnCurv::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnCurv::ChangeValue, "Variable value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv.def("__call__", (Extrema_POnCurv & (Extrema_Array2OfPOnCurv::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnCurv::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv.def("SetValue", (void (Extrema_Array2OfPOnCurv::*)(const Standard_Integer, const Standard_Integer, const Extrema_POnCurv &)) &Extrema_Array2OfPOnCurv::SetValue, "SetValue", py::arg("theRow"), py::arg("theCol"), py::arg("theItem"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array2.hxx
	py::class_<Extrema_Array2OfPOnCurv2d, std::unique_ptr<Extrema_Array2OfPOnCurv2d, Deleter<Extrema_Array2OfPOnCurv2d>>> cls_Extrema_Array2OfPOnCurv2d(mod, "Extrema_Array2OfPOnCurv2d", "Purpose: The class Array2 represents bi-dimensional arrays of fixed size known at run time. The ranges of indices are user defined.");
	cls_Extrema_Array2OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnCurv2d.def(py::init([] (const Extrema_Array2OfPOnCurv2d &other) {return new Extrema_Array2OfPOnCurv2d(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_Array2OfPOnCurv2d.def(py::init<const Extrema_POnCurv2d &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnCurv2d.def("Init", (void (Extrema_Array2OfPOnCurv2d::*)(const Extrema_POnCurv2d &)) &Extrema_Array2OfPOnCurv2d::Init, "Initialise the values", py::arg("theValue"));
	cls_Extrema_Array2OfPOnCurv2d.def("Size", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::Size, "Size (number of items)");
	cls_Extrema_Array2OfPOnCurv2d.def("Length", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::Length, "Length (number of items)");
	cls_Extrema_Array2OfPOnCurv2d.def("RowLength", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::RowLength, "Returns length of the row, i.e. number of columns");
	cls_Extrema_Array2OfPOnCurv2d.def("ColLength", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::ColLength, "Returns length of the column, i.e. number of rows");
	cls_Extrema_Array2OfPOnCurv2d.def("LowerRow", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::LowerRow, "LowerRow");
	cls_Extrema_Array2OfPOnCurv2d.def("UpperRow", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::UpperRow, "UpperRow");
	cls_Extrema_Array2OfPOnCurv2d.def("LowerCol", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::LowerCol, "LowerCol");
	cls_Extrema_Array2OfPOnCurv2d.def("UpperCol", (Standard_Integer (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::UpperCol, "UpperCol");
	cls_Extrema_Array2OfPOnCurv2d.def("IsDeletable", (Standard_Boolean (Extrema_Array2OfPOnCurv2d::*)() const ) &Extrema_Array2OfPOnCurv2d::IsDeletable, "myDeletable flag");
	cls_Extrema_Array2OfPOnCurv2d.def("Assign", (Extrema_Array2OfPOnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Extrema_Array2OfPOnCurv2d &)) &Extrema_Array2OfPOnCurv2d::Assign, "Assignment", py::arg("theOther"));
	cls_Extrema_Array2OfPOnCurv2d.def("assign", (Extrema_Array2OfPOnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Extrema_Array2OfPOnCurv2d &)) &Extrema_Array2OfPOnCurv2d::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	cls_Extrema_Array2OfPOnCurv2d.def("Value", (const Extrema_POnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnCurv2d::Value, "Constant value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv2d.def("__call__", (const Extrema_POnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnCurv2d::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv2d.def("ChangeValue", (Extrema_POnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnCurv2d::ChangeValue, "Variable value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv2d.def("__call__", (Extrema_POnCurv2d & (Extrema_Array2OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnCurv2d::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnCurv2d.def("SetValue", (void (Extrema_Array2OfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer, const Extrema_POnCurv2d &)) &Extrema_Array2OfPOnCurv2d::SetValue, "SetValue", py::arg("theRow"), py::arg("theCol"), py::arg("theItem"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Array2.hxx
	py::class_<Extrema_Array2OfPOnSurf, std::unique_ptr<Extrema_Array2OfPOnSurf, Deleter<Extrema_Array2OfPOnSurf>>> cls_Extrema_Array2OfPOnSurf(mod, "Extrema_Array2OfPOnSurf", "Purpose: The class Array2 represents bi-dimensional arrays of fixed size known at run time. The ranges of indices are user defined.");
	cls_Extrema_Array2OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnSurf.def(py::init([] (const Extrema_Array2OfPOnSurf &other) {return new Extrema_Array2OfPOnSurf(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_Array2OfPOnSurf.def(py::init<const Extrema_POnSurf &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theBegin"), py::arg("theRowLower"), py::arg("theRowUpper"), py::arg("theColLower"), py::arg("theColUpper"));
	cls_Extrema_Array2OfPOnSurf.def("Init", (void (Extrema_Array2OfPOnSurf::*)(const Extrema_POnSurf &)) &Extrema_Array2OfPOnSurf::Init, "Initialise the values", py::arg("theValue"));
	cls_Extrema_Array2OfPOnSurf.def("Size", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::Size, "Size (number of items)");
	cls_Extrema_Array2OfPOnSurf.def("Length", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::Length, "Length (number of items)");
	cls_Extrema_Array2OfPOnSurf.def("RowLength", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::RowLength, "Returns length of the row, i.e. number of columns");
	cls_Extrema_Array2OfPOnSurf.def("ColLength", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::ColLength, "Returns length of the column, i.e. number of rows");
	cls_Extrema_Array2OfPOnSurf.def("LowerRow", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::LowerRow, "LowerRow");
	cls_Extrema_Array2OfPOnSurf.def("UpperRow", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::UpperRow, "UpperRow");
	cls_Extrema_Array2OfPOnSurf.def("LowerCol", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::LowerCol, "LowerCol");
	cls_Extrema_Array2OfPOnSurf.def("UpperCol", (Standard_Integer (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::UpperCol, "UpperCol");
	cls_Extrema_Array2OfPOnSurf.def("IsDeletable", (Standard_Boolean (Extrema_Array2OfPOnSurf::*)() const ) &Extrema_Array2OfPOnSurf::IsDeletable, "myDeletable flag");
	cls_Extrema_Array2OfPOnSurf.def("Assign", (Extrema_Array2OfPOnSurf & (Extrema_Array2OfPOnSurf::*)(const Extrema_Array2OfPOnSurf &)) &Extrema_Array2OfPOnSurf::Assign, "Assignment", py::arg("theOther"));
	cls_Extrema_Array2OfPOnSurf.def("assign", (Extrema_Array2OfPOnSurf & (Extrema_Array2OfPOnSurf::*)(const Extrema_Array2OfPOnSurf &)) &Extrema_Array2OfPOnSurf::operator=, py::is_operator(), "Assignment operator", py::arg("theOther"));
	cls_Extrema_Array2OfPOnSurf.def("Value", (const Extrema_POnSurf & (Extrema_Array2OfPOnSurf::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnSurf::Value, "Constant value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurf.def("__call__", (const Extrema_POnSurf & (Extrema_Array2OfPOnSurf::*)(const Standard_Integer, const Standard_Integer) const ) &Extrema_Array2OfPOnSurf::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurf.def("ChangeValue", (Extrema_POnSurf & (Extrema_Array2OfPOnSurf::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnSurf::ChangeValue, "Variable value access", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurf.def("__call__", (Extrema_POnSurf & (Extrema_Array2OfPOnSurf::*)(const Standard_Integer, const Standard_Integer)) &Extrema_Array2OfPOnSurf::operator(), py::is_operator(), "operator() - alias to ChangeValue", py::arg("theRow"), py::arg("theCol"));
	cls_Extrema_Array2OfPOnSurf.def("SetValue", (void (Extrema_Array2OfPOnSurf::*)(const Standard_Integer, const Standard_Integer, const Extrema_POnSurf &)) &Extrema_Array2OfPOnSurf::SetValue, "SetValue", py::arg("theRow"), py::arg("theCol"), py::arg("theItem"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocateExtCC2d.hxx
	py::class_<Extrema_LocateExtCC2d, std::unique_ptr<Extrema_LocateExtCC2d, Deleter<Extrema_LocateExtCC2d>>> cls_Extrema_LocateExtCC2d(mod, "Extrema_LocateExtCC2d", "It calculates the distance between two curves with a close point; these distances can be maximum or minimum.");
	cls_Extrema_LocateExtCC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U0"), py::arg("V0"));
	cls_Extrema_LocateExtCC2d.def("IsDone", (Standard_Boolean (Extrema_LocateExtCC2d::*)() const ) &Extrema_LocateExtCC2d::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocateExtCC2d.def("SquareDistance", (Standard_Real (Extrema_LocateExtCC2d::*)() const ) &Extrema_LocateExtCC2d::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocateExtCC2d.def("Point", (void (Extrema_LocateExtCC2d::*)(Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_LocateExtCC2d::Point, "Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx
	py::class_<Extrema_PCLocFOfLocEPCOfLocateExtPC2d, std::unique_ptr<Extrema_PCLocFOfLocEPCOfLocateExtPC2d, Deleter<Extrema_PCLocFOfLocEPCOfLocateExtPC2d>>, math_FunctionWithDerivative> cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d(mod, "Extrema_PCLocFOfLocEPCOfLocateExtPC2d", "None");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def(py::init<>());
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &>(), py::arg("P"), py::arg("C"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("Initialize", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Initialize, "sets the field mycurve of the function.", py::arg("C"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("SetPoint", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const gp_Pnt2d &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SetPoint, "sets the field P of the function.", py::arg("P"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("Value", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Value, "Calculation of F(U).", py::arg("U"), py::arg("F"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("Derivative", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Derivative, "Calculation of F'(U).", py::arg("U"), py::arg("DF"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("Values", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Real, Standard_Real &, Standard_Real &)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Values, "Calculation of F(U) and F'(U).", py::arg("U"), py::arg("F"), py::arg("DF"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("GetStateNumber", (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)()) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::GetStateNumber, "Save the found extremum.");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("NbExt", (Standard_Integer (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)() const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::NbExt, "Return the nunber of found extrema.");
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SquareDistance, "Returns the Nth distance.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::IsMin, "Shows if the Nth distance is a minimum.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Integer) const ) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::Point, "Returns the Nth extremum.", py::arg("N"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("SubIntervalInitialize", (void (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)(const Standard_Real, const Standard_Real)) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SubIntervalInitialize, "Determines boundaries of subinterval for find of root.", py::arg("theUfirst"), py::arg("theUlast"));
	cls_Extrema_PCLocFOfLocEPCOfLocateExtPC2d.def("SearchOfTolerance", (Standard_Real (Extrema_PCLocFOfLocEPCOfLocateExtPC2d::*)()) &Extrema_PCLocFOfLocEPCOfLocateExtPC2d::SearchOfTolerance, "Computes a Tol value. If 1st derivative of curve |D1|<Tol, it is considered D1=0.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocEPCOfLocateExtPC2d.hxx
	py::class_<Extrema_LocEPCOfLocateExtPC2d, std::unique_ptr<Extrema_LocEPCOfLocateExtPC2d, Deleter<Extrema_LocEPCOfLocateExtPC2d>>> cls_Extrema_LocEPCOfLocateExtPC2d(mod, "Extrema_LocEPCOfLocateExtPC2d", "None");
	cls_Extrema_LocEPCOfLocateExtPC2d.def(py::init<>());
	cls_Extrema_LocEPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC2d.def("Initialize", (void (Extrema_LocEPCOfLocateExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_LocEPCOfLocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("Umin"), py::arg("Usup"), py::arg("TolU"));
	cls_Extrema_LocEPCOfLocateExtPC2d.def("Perform", (void (Extrema_LocEPCOfLocateExtPC2d::*)(const gp_Pnt2d &, const Standard_Real)) &Extrema_LocEPCOfLocateExtPC2d::Perform, "the algorithm is done with the point P. An exception is raised if the fields have not been initialized.", py::arg("P"), py::arg("U0"));
	cls_Extrema_LocEPCOfLocateExtPC2d.def("IsDone", (Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const ) &Extrema_LocEPCOfLocateExtPC2d::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocEPCOfLocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_LocEPCOfLocateExtPC2d::*)() const ) &Extrema_LocEPCOfLocateExtPC2d::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocEPCOfLocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_LocEPCOfLocateExtPC2d::*)() const ) &Extrema_LocEPCOfLocateExtPC2d::IsMin, "Returns True if the extremum distance is a minimum.");
	cls_Extrema_LocEPCOfLocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_LocEPCOfLocateExtPC2d::*)() const ) &Extrema_LocEPCOfLocateExtPC2d::Point, "Returns the point of the extremum distance.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocateExtPC2d.hxx
	py::class_<Extrema_LocateExtPC2d, std::unique_ptr<Extrema_LocateExtPC2d, Deleter<Extrema_LocateExtPC2d>>> cls_Extrema_LocateExtPC2d(mod, "Extrema_LocateExtPC2d", "None");
	cls_Extrema_LocateExtPC2d.def(py::init<>());
	cls_Extrema_LocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("TolF"));
	cls_Extrema_LocateExtPC2d.def(py::init<const gp_Pnt2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("P"), py::arg("C"), py::arg("U0"), py::arg("Umin"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_LocateExtPC2d.def("Initialize", (void (Extrema_LocateExtPC2d::*)(const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real)) &Extrema_LocateExtPC2d::Initialize, "sets the fields of the algorithm.", py::arg("C"), py::arg("Umin"), py::arg("Usup"), py::arg("TolF"));
	cls_Extrema_LocateExtPC2d.def("Perform", (void (Extrema_LocateExtPC2d::*)(const gp_Pnt2d &, const Standard_Real)) &Extrema_LocateExtPC2d::Perform, "None", py::arg("P"), py::arg("U0"));
	cls_Extrema_LocateExtPC2d.def("IsDone", (Standard_Boolean (Extrema_LocateExtPC2d::*)() const ) &Extrema_LocateExtPC2d::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocateExtPC2d.def("SquareDistance", (Standard_Real (Extrema_LocateExtPC2d::*)() const ) &Extrema_LocateExtPC2d::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocateExtPC2d.def("IsMin", (Standard_Boolean (Extrema_LocateExtPC2d::*)() const ) &Extrema_LocateExtPC2d::IsMin, "Returns True if the extremum distance is a minimum.");
	cls_Extrema_LocateExtPC2d.def("Point", (const Extrema_POnCurv2d & (Extrema_LocateExtPC2d::*)() const ) &Extrema_LocateExtPC2d::Point, "Returns the point of the extremum distance.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocECC.hxx
	py::class_<Extrema_LocECC, std::unique_ptr<Extrema_LocECC, Deleter<Extrema_LocECC>>> cls_Extrema_LocECC(mod, "Extrema_LocECC", "None");
	cls_Extrema_LocECC.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U0"), py::arg("V0"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_LocECC.def("IsDone", (Standard_Boolean (Extrema_LocECC::*)() const ) &Extrema_LocECC::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocECC.def("SquareDistance", (Standard_Real (Extrema_LocECC::*)() const ) &Extrema_LocECC::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocECC.def("Point", (void (Extrema_LocECC::*)(Extrema_POnCurv &, Extrema_POnCurv &) const ) &Extrema_LocECC::Point, "Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_LocECC2d.hxx
	py::class_<Extrema_LocECC2d, std::unique_ptr<Extrema_LocECC2d, Deleter<Extrema_LocECC2d>>> cls_Extrema_LocECC2d(mod, "Extrema_LocECC2d", "None");
	cls_Extrema_LocECC2d.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real>(), py::arg("C1"), py::arg("C2"), py::arg("U0"), py::arg("V0"), py::arg("TolU"), py::arg("TolV"));
	cls_Extrema_LocECC2d.def("IsDone", (Standard_Boolean (Extrema_LocECC2d::*)() const ) &Extrema_LocECC2d::IsDone, "Returns True if the distance is found.");
	cls_Extrema_LocECC2d.def("SquareDistance", (Standard_Real (Extrema_LocECC2d::*)() const ) &Extrema_LocECC2d::SquareDistance, "Returns the value of the extremum square distance.");
	cls_Extrema_LocECC2d.def("Point", (void (Extrema_LocECC2d::*)(Extrema_POnCurv2d &, Extrema_POnCurv2d &) const ) &Extrema_LocECC2d::Point, "Returns the points of the extremum distance. P1 is on the first curve, P2 on the second one.", py::arg("P1"), py::arg("P2"));

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Sequence.hxx
	py::class_<Extrema_SequenceOfPOnCurv, std::unique_ptr<Extrema_SequenceOfPOnCurv, Deleter<Extrema_SequenceOfPOnCurv>>, NCollection_BaseSequence> cls_Extrema_SequenceOfPOnCurv(mod, "Extrema_SequenceOfPOnCurv", "Purpose: Definition of a sequence of elements indexed by an Integer in range of 1..n");
	cls_Extrema_SequenceOfPOnCurv.def(py::init<>());
	cls_Extrema_SequenceOfPOnCurv.def(py::init<const opencascade::handle<NCollection_BaseAllocator> &>(), py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnCurv.def(py::init([] (const Extrema_SequenceOfPOnCurv &other) {return new Extrema_SequenceOfPOnCurv(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_SequenceOfPOnCurv.def("begin", (Extrema_SequenceOfPOnCurv::iterator (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::begin, "Returns an iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv.def("end", (Extrema_SequenceOfPOnCurv::iterator (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::end, "Returns an iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv.def("cbegin", (Extrema_SequenceOfPOnCurv::const_iterator (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::cbegin, "Returns a const iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv.def("cend", (Extrema_SequenceOfPOnCurv::const_iterator (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::cend, "Returns a const iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv.def("Size", (Standard_Integer (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::Size, "Number of items");
	cls_Extrema_SequenceOfPOnCurv.def("Length", (Standard_Integer (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::Length, "Number of items");
	cls_Extrema_SequenceOfPOnCurv.def("Lower", (Standard_Integer (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::Lower, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnCurv.def("Upper", (Standard_Integer (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::Upper, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnCurv.def("IsEmpty", (Standard_Boolean (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::IsEmpty, "Empty query");
	cls_Extrema_SequenceOfPOnCurv.def("Reverse", (void (Extrema_SequenceOfPOnCurv::*)()) &Extrema_SequenceOfPOnCurv::Reverse, "Reverse sequence");
	cls_Extrema_SequenceOfPOnCurv.def("Exchange", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnCurv::Exchange, "Exchange two members", py::arg("I"), py::arg("J"));
	cls_Extrema_SequenceOfPOnCurv.def_static("delNode_", (void (*)(NCollection_SeqNode *, opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnCurv::delNode, "Static deleter to be passed to BaseSequence", py::arg("theNode"), py::arg("theAl"));
	cls_Extrema_SequenceOfPOnCurv.def("Clear", [](Extrema_SequenceOfPOnCurv &self) -> void { return self.Clear(); });
	cls_Extrema_SequenceOfPOnCurv.def("Clear", (void (Extrema_SequenceOfPOnCurv::*)(const opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnCurv::Clear, "Clear the items out, take a new allocator if non null", py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnCurv.def("Assign", (Extrema_SequenceOfPOnCurv & (Extrema_SequenceOfPOnCurv::*)(const Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::Assign, "Replace this sequence by the items of theOther. This method does not change the internal allocator.", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnCurv.def("assign", (Extrema_SequenceOfPOnCurv & (Extrema_SequenceOfPOnCurv::*)(const Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::operator=, py::is_operator(), "Replacement operator", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnCurv.def("Remove", (void (Extrema_SequenceOfPOnCurv::*)(Extrema_SequenceOfPOnCurv::Iterator &)) &Extrema_SequenceOfPOnCurv::Remove, "Remove one item", py::arg("thePosition"));
	cls_Extrema_SequenceOfPOnCurv.def("Remove", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv::Remove, "Remove one item", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("Remove", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnCurv::Remove, "Remove range of items", py::arg("theFromIndex"), py::arg("theToIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("Append", (void (Extrema_SequenceOfPOnCurv::*)(const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::Append, "Append one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("Append", (void (Extrema_SequenceOfPOnCurv::*)(Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::Append, "Append another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv.def("Prepend", (void (Extrema_SequenceOfPOnCurv::*)(const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::Prepend, "Prepend one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("Prepend", (void (Extrema_SequenceOfPOnCurv::*)(Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::Prepend, "Prepend another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv.def("InsertBefore", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::InsertBefore, "InsertBefore theIndex theItem", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("InsertBefore", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::InsertBefore, "InsertBefore theIndex another sequence", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv::*)(Extrema_SequenceOfPOnCurv::Iterator &, const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::InsertAfter, "InsertAfter the position of iterator", py::arg("thePosition"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::InsertAfter, "InsertAfter theIndex theItem", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::InsertAfter, "InsertAfter theIndex another sequence", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("Split", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv &)) &Extrema_SequenceOfPOnCurv::Split, "Split in two sequences", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv.def("First", (const Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::First, "First item access");
	cls_Extrema_SequenceOfPOnCurv.def("ChangeFirst", (Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)()) &Extrema_SequenceOfPOnCurv::ChangeFirst, "First item access");
	cls_Extrema_SequenceOfPOnCurv.def("Last", (const Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)() const ) &Extrema_SequenceOfPOnCurv::Last, "Last item access");
	cls_Extrema_SequenceOfPOnCurv.def("ChangeLast", (Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)()) &Extrema_SequenceOfPOnCurv::ChangeLast, "Last item access");
	cls_Extrema_SequenceOfPOnCurv.def("Value", (const Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnCurv::Value, "Constant item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("__call__", (const Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnCurv::operator(), py::is_operator(), "Constant operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("ChangeValue", (Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv::ChangeValue, "Variable item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("__call__", (Extrema_POnCurv & (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv::operator(), py::is_operator(), "Variable operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv.def("SetValue", (void (Extrema_SequenceOfPOnCurv::*)(const Standard_Integer, const Extrema_POnCurv &)) &Extrema_SequenceOfPOnCurv::SetValue, "Set item value by theIndex", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv.def("__iter__", [](const Extrema_SequenceOfPOnCurv &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray1OfPOnCurv.hxx
	py::class_<Extrema_HArray1OfPOnCurv, opencascade::handle<Extrema_HArray1OfPOnCurv>, Extrema_Array1OfPOnCurv, Standard_Transient> cls_Extrema_HArray1OfPOnCurv(mod, "Extrema_HArray1OfPOnCurv", "None");
	cls_Extrema_HArray1OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_HArray1OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer, const Extrema_Array1OfPOnCurv::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
	cls_Extrema_HArray1OfPOnCurv.def(py::init<const Extrema_Array1OfPOnCurv &>(), py::arg("theOther"));
	cls_Extrema_HArray1OfPOnCurv.def("Array1", (const Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)() const ) &Extrema_HArray1OfPOnCurv::Array1, "None");
	cls_Extrema_HArray1OfPOnCurv.def("ChangeArray1", (Extrema_Array1OfPOnCurv & (Extrema_HArray1OfPOnCurv::*)()) &Extrema_HArray1OfPOnCurv::ChangeArray1, "None");
	cls_Extrema_HArray1OfPOnCurv.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray1OfPOnCurv::get_type_name, "None");
	cls_Extrema_HArray1OfPOnCurv.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray1OfPOnCurv::get_type_descriptor, "None");
	cls_Extrema_HArray1OfPOnCurv.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv::*)() const ) &Extrema_HArray1OfPOnCurv::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray1OfPOnSurf.hxx
	py::class_<Extrema_HArray1OfPOnSurf, opencascade::handle<Extrema_HArray1OfPOnSurf>, Extrema_Array1OfPOnSurf, Standard_Transient> cls_Extrema_HArray1OfPOnSurf(mod, "Extrema_HArray1OfPOnSurf", "None");
	cls_Extrema_HArray1OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_HArray1OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer, const Extrema_Array1OfPOnSurf::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
	cls_Extrema_HArray1OfPOnSurf.def(py::init<const Extrema_Array1OfPOnSurf &>(), py::arg("theOther"));
	cls_Extrema_HArray1OfPOnSurf.def("Array1", (const Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)() const ) &Extrema_HArray1OfPOnSurf::Array1, "None");
	cls_Extrema_HArray1OfPOnSurf.def("ChangeArray1", (Extrema_Array1OfPOnSurf & (Extrema_HArray1OfPOnSurf::*)()) &Extrema_HArray1OfPOnSurf::ChangeArray1, "None");
	cls_Extrema_HArray1OfPOnSurf.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray1OfPOnSurf::get_type_name, "None");
	cls_Extrema_HArray1OfPOnSurf.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray1OfPOnSurf::get_type_descriptor, "None");
	cls_Extrema_HArray1OfPOnSurf.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnSurf::*)() const ) &Extrema_HArray1OfPOnSurf::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Sequence.hxx
	py::class_<Extrema_SequenceOfPOnSurf, std::unique_ptr<Extrema_SequenceOfPOnSurf, Deleter<Extrema_SequenceOfPOnSurf>>, NCollection_BaseSequence> cls_Extrema_SequenceOfPOnSurf(mod, "Extrema_SequenceOfPOnSurf", "Purpose: Definition of a sequence of elements indexed by an Integer in range of 1..n");
	cls_Extrema_SequenceOfPOnSurf.def(py::init<>());
	cls_Extrema_SequenceOfPOnSurf.def(py::init<const opencascade::handle<NCollection_BaseAllocator> &>(), py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnSurf.def(py::init([] (const Extrema_SequenceOfPOnSurf &other) {return new Extrema_SequenceOfPOnSurf(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_SequenceOfPOnSurf.def("begin", (Extrema_SequenceOfPOnSurf::iterator (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::begin, "Returns an iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnSurf.def("end", (Extrema_SequenceOfPOnSurf::iterator (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::end, "Returns an iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnSurf.def("cbegin", (Extrema_SequenceOfPOnSurf::const_iterator (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::cbegin, "Returns a const iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnSurf.def("cend", (Extrema_SequenceOfPOnSurf::const_iterator (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::cend, "Returns a const iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnSurf.def("Size", (Standard_Integer (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::Size, "Number of items");
	cls_Extrema_SequenceOfPOnSurf.def("Length", (Standard_Integer (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::Length, "Number of items");
	cls_Extrema_SequenceOfPOnSurf.def("Lower", (Standard_Integer (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::Lower, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnSurf.def("Upper", (Standard_Integer (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::Upper, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnSurf.def("IsEmpty", (Standard_Boolean (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::IsEmpty, "Empty query");
	cls_Extrema_SequenceOfPOnSurf.def("Reverse", (void (Extrema_SequenceOfPOnSurf::*)()) &Extrema_SequenceOfPOnSurf::Reverse, "Reverse sequence");
	cls_Extrema_SequenceOfPOnSurf.def("Exchange", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnSurf::Exchange, "Exchange two members", py::arg("I"), py::arg("J"));
	cls_Extrema_SequenceOfPOnSurf.def_static("delNode_", (void (*)(NCollection_SeqNode *, opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnSurf::delNode, "Static deleter to be passed to BaseSequence", py::arg("theNode"), py::arg("theAl"));
	cls_Extrema_SequenceOfPOnSurf.def("Clear", [](Extrema_SequenceOfPOnSurf &self) -> void { return self.Clear(); });
	cls_Extrema_SequenceOfPOnSurf.def("Clear", (void (Extrema_SequenceOfPOnSurf::*)(const opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnSurf::Clear, "Clear the items out, take a new allocator if non null", py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnSurf.def("Assign", (Extrema_SequenceOfPOnSurf & (Extrema_SequenceOfPOnSurf::*)(const Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::Assign, "Replace this sequence by the items of theOther. This method does not change the internal allocator.", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnSurf.def("assign", (Extrema_SequenceOfPOnSurf & (Extrema_SequenceOfPOnSurf::*)(const Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::operator=, py::is_operator(), "Replacement operator", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnSurf.def("Remove", (void (Extrema_SequenceOfPOnSurf::*)(Extrema_SequenceOfPOnSurf::Iterator &)) &Extrema_SequenceOfPOnSurf::Remove, "Remove one item", py::arg("thePosition"));
	cls_Extrema_SequenceOfPOnSurf.def("Remove", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer)) &Extrema_SequenceOfPOnSurf::Remove, "Remove one item", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("Remove", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnSurf::Remove, "Remove range of items", py::arg("theFromIndex"), py::arg("theToIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("Append", (void (Extrema_SequenceOfPOnSurf::*)(const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::Append, "Append one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("Append", (void (Extrema_SequenceOfPOnSurf::*)(Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::Append, "Append another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnSurf.def("Prepend", (void (Extrema_SequenceOfPOnSurf::*)(const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::Prepend, "Prepend one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("Prepend", (void (Extrema_SequenceOfPOnSurf::*)(Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::Prepend, "Prepend another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnSurf.def("InsertBefore", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::InsertBefore, "InsertBefore theIndex theItem", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("InsertBefore", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::InsertBefore, "InsertBefore theIndex another sequence", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnSurf.def("InsertAfter", (void (Extrema_SequenceOfPOnSurf::*)(Extrema_SequenceOfPOnSurf::Iterator &, const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::InsertAfter, "InsertAfter the position of iterator", py::arg("thePosition"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("InsertAfter", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::InsertAfter, "InsertAfter theIndex theItem", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnSurf.def("InsertAfter", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::InsertAfter, "InsertAfter theIndex another sequence", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("Split", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, Extrema_SequenceOfPOnSurf &)) &Extrema_SequenceOfPOnSurf::Split, "Split in two sequences", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnSurf.def("First", (const Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::First, "First item access");
	cls_Extrema_SequenceOfPOnSurf.def("ChangeFirst", (Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)()) &Extrema_SequenceOfPOnSurf::ChangeFirst, "First item access");
	cls_Extrema_SequenceOfPOnSurf.def("Last", (const Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)() const ) &Extrema_SequenceOfPOnSurf::Last, "Last item access");
	cls_Extrema_SequenceOfPOnSurf.def("ChangeLast", (Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)()) &Extrema_SequenceOfPOnSurf::ChangeLast, "Last item access");
	cls_Extrema_SequenceOfPOnSurf.def("Value", (const Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnSurf::Value, "Constant item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("__call__", (const Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnSurf::operator(), py::is_operator(), "Constant operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("ChangeValue", (Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer)) &Extrema_SequenceOfPOnSurf::ChangeValue, "Variable item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("__call__", (Extrema_POnSurf & (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer)) &Extrema_SequenceOfPOnSurf::operator(), py::is_operator(), "Variable operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnSurf.def("SetValue", (void (Extrema_SequenceOfPOnSurf::*)(const Standard_Integer, const Extrema_POnSurf &)) &Extrema_SequenceOfPOnSurf::SetValue, "Set item value by theIndex", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnSurf.def("__iter__", [](const Extrema_SequenceOfPOnSurf &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray2OfPOnSurfParams.hxx
	py::class_<Extrema_HArray2OfPOnSurfParams, opencascade::handle<Extrema_HArray2OfPOnSurfParams>, Extrema_Array2OfPOnSurfParams, Standard_Transient> cls_Extrema_HArray2OfPOnSurfParams(mod, "Extrema_HArray2OfPOnSurfParams", "None");
	cls_Extrema_HArray2OfPOnSurfParams.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"));
	cls_Extrema_HArray2OfPOnSurfParams.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Extrema_Array2OfPOnSurfParams::value_type &>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"), py::arg("theValue"));
	cls_Extrema_HArray2OfPOnSurfParams.def(py::init<const Extrema_Array2OfPOnSurfParams &>(), py::arg("theOther"));
	cls_Extrema_HArray2OfPOnSurfParams.def("Array2", (const Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)() const ) &Extrema_HArray2OfPOnSurfParams::Array2, "None");
	cls_Extrema_HArray2OfPOnSurfParams.def("ChangeArray2", (Extrema_Array2OfPOnSurfParams & (Extrema_HArray2OfPOnSurfParams::*)()) &Extrema_HArray2OfPOnSurfParams::ChangeArray2, "None");
	cls_Extrema_HArray2OfPOnSurfParams.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray2OfPOnSurfParams::get_type_name, "None");
	cls_Extrema_HArray2OfPOnSurfParams.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray2OfPOnSurfParams::get_type_descriptor, "None");
	cls_Extrema_HArray2OfPOnSurfParams.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurfParams::*)() const ) &Extrema_HArray2OfPOnSurfParams::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_UBTree.hxx
	py::class_<Extrema_UBTreeOfSphere, std::unique_ptr<Extrema_UBTreeOfSphere, Deleter<Extrema_UBTreeOfSphere>>> cls_Extrema_UBTreeOfSphere(mod, "Extrema_UBTreeOfSphere", "The algorithm of unbalanced binary tree of overlapped bounding boxes.");
	cls_Extrema_UBTreeOfSphere.def(py::init<>());
	cls_Extrema_UBTreeOfSphere.def(py::init<const opencascade::handle<NCollection_BaseAllocator> &>(), py::arg("theAllocator"));
	cls_Extrema_UBTreeOfSphere.def("Add", (Standard_Boolean (Extrema_UBTreeOfSphere::*)(const Standard_Integer &, const Bnd_Sphere &)) &Extrema_UBTreeOfSphere::Add, "Update the tree with a new object and its bounding box.", py::arg("theObj"), py::arg("theBnd"));
	cls_Extrema_UBTreeOfSphere.def("Select", (Standard_Integer (Extrema_UBTreeOfSphere::*)(Extrema_UBTreeOfSphere::Selector &) const ) &Extrema_UBTreeOfSphere::Select, "Searches in the tree all objects conforming to the given selector. return Number of objects accepted", py::arg("theSelector"));
	cls_Extrema_UBTreeOfSphere.def("Clear", [](Extrema_UBTreeOfSphere &self) -> void { return self.Clear(); });
	cls_Extrema_UBTreeOfSphere.def("Clear", (void (Extrema_UBTreeOfSphere::*)(const opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_UBTreeOfSphere::Clear, "Clears the contents of the tree.", py::arg("aNewAlloc"));
	cls_Extrema_UBTreeOfSphere.def("IsEmpty", (Standard_Boolean (Extrema_UBTreeOfSphere::*)() const ) &Extrema_UBTreeOfSphere::IsEmpty, "None");
	cls_Extrema_UBTreeOfSphere.def("Root", (const Extrema_UBTreeOfSphere::TreeNode & (Extrema_UBTreeOfSphere::*)() const ) &Extrema_UBTreeOfSphere::Root, "Returns the root node of the tree");
	cls_Extrema_UBTreeOfSphere.def("Allocator", (const opencascade::handle<NCollection_BaseAllocator> & (Extrema_UBTreeOfSphere::*)() const ) &Extrema_UBTreeOfSphere::Allocator, "Recommended to be used only in sub-classes.");

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_UBTreeFiller.hxx
	py::class_<Extrema_UBTreeFillerOfSphere, std::unique_ptr<Extrema_UBTreeFillerOfSphere, Deleter<Extrema_UBTreeFillerOfSphere>>> cls_Extrema_UBTreeFillerOfSphere(mod, "Extrema_UBTreeFillerOfSphere", "This class is used to fill an UBTree in a random order. The quality of a tree is much better (from the point of view of the search time) if objects are added to it in a random order to avoid adding a chain of neerby objects one following each other.");
	cls_Extrema_UBTreeFillerOfSphere.def(py::init<Extrema_UBTreeFillerOfSphere::UBTree &>(), py::arg("theTree"));
	cls_Extrema_UBTreeFillerOfSphere.def(py::init<Extrema_UBTreeFillerOfSphere::UBTree &, const opencascade::handle<NCollection_BaseAllocator> &>(), py::arg("theTree"), py::arg("theAlloc"));
	cls_Extrema_UBTreeFillerOfSphere.def(py::init<Extrema_UBTreeFillerOfSphere::UBTree &, const opencascade::handle<NCollection_BaseAllocator> &, const Standard_Boolean>(), py::arg("theTree"), py::arg("theAlloc"), py::arg("isFullRandom"));
	cls_Extrema_UBTreeFillerOfSphere.def("Add", (void (Extrema_UBTreeFillerOfSphere::*)(const Standard_Integer &, const Bnd_Sphere &)) &Extrema_UBTreeFillerOfSphere::Add, "Adds a pair (theObj, theBnd) to my sequence", py::arg("theObj"), py::arg("theBnd"));
	cls_Extrema_UBTreeFillerOfSphere.def("Fill", (Standard_Integer (Extrema_UBTreeFillerOfSphere::*)()) &Extrema_UBTreeFillerOfSphere::Fill, "Fills the tree with the objects from my sequence. This method clears the internal buffer of added items making sure that no item would be added twice.");
	cls_Extrema_UBTreeFillerOfSphere.def("Reset", (void (Extrema_UBTreeFillerOfSphere::*)()) &Extrema_UBTreeFillerOfSphere::Reset, "Remove all data from Filler, partculary if the Tree no more needed so the destructor of this Filler should not populate the useless Tree.");
	cls_Extrema_UBTreeFillerOfSphere.def("CheckTree", (Standard_Integer (Extrema_UBTreeFillerOfSphere::*)(Standard_OStream &)) &Extrema_UBTreeFillerOfSphere::CheckTree, "Check the filled tree for the total number of items and the balance outputting these results to ostream.", py::arg("theStream"));

	/* FIXME
	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Handle.hxx
	py::class_<Extrema_HUBTreeOfSphere, std::unique_ptr<Extrema_HUBTreeOfSphere, Deleter<Extrema_HUBTreeOfSphere>>, opencascade::handle<Standard_Transient>> cls_Extrema_HUBTreeOfSphere(mod, "Extrema_HUBTreeOfSphere", "Purpose: This template class is used to define Handle adaptor for allocated dynamically objects of arbitrary type.");
	cls_Extrema_HUBTreeOfSphere.def(py::init<>());
	cls_Extrema_HUBTreeOfSphere.def(py::init<Extrema_UBTreeOfSphere *>(), py::arg("theObject"));
	cls_Extrema_HUBTreeOfSphere.def("get", (Extrema_UBTreeOfSphere * (Extrema_HUBTreeOfSphere::*)()) &Extrema_HUBTreeOfSphere::get, "Cast handle to contained type");
	cls_Extrema_HUBTreeOfSphere.def("get", (const Extrema_UBTreeOfSphere * (Extrema_HUBTreeOfSphere::*)() const ) &Extrema_HUBTreeOfSphere::get, "Cast handle to contained type");
	// FIXME cls_Extrema_HUBTreeOfSphere.def("operator->", (Extrema_UBTreeOfSphere * (Extrema_HUBTreeOfSphere::*)()) &Extrema_HUBTreeOfSphere::operator->, "Cast handle to contained type");
	// FIXME cls_Extrema_HUBTreeOfSphere.def("operator->", (const Extrema_UBTreeOfSphere * (Extrema_HUBTreeOfSphere::*)() const ) &Extrema_HUBTreeOfSphere::operator->, "Cast handle to contained type");
	cls_Extrema_HUBTreeOfSphere.def("__mul__", (Extrema_UBTreeOfSphere & (Extrema_HUBTreeOfSphere::*)()) &Extrema_HUBTreeOfSphere::operator*, py::is_operator(), "Cast handle to contained type");
	cls_Extrema_HUBTreeOfSphere.def("__mul__", (const Extrema_UBTreeOfSphere & (Extrema_HUBTreeOfSphere::*)() const ) &Extrema_HUBTreeOfSphere::operator*, py::is_operator(), "Cast handle to contained type");
	cls_Extrema_HUBTreeOfSphere.def_static("DownCast_", (Extrema_HUBTreeOfSphere (*)(const opencascade::handle<Standard_Transient> &)) &Extrema_HUBTreeOfSphere::DownCast, "Downcast arbitrary Handle to the argument type if contained object is Handle for this type; returns null otherwise", py::arg("theOther"));
	*/

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray1OfPOnCurv2d.hxx
	py::class_<Extrema_HArray1OfPOnCurv2d, opencascade::handle<Extrema_HArray1OfPOnCurv2d>, Extrema_Array1OfPOnCurv2d, Standard_Transient> cls_Extrema_HArray1OfPOnCurv2d(mod, "Extrema_HArray1OfPOnCurv2d", "None");
	cls_Extrema_HArray1OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
	cls_Extrema_HArray1OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer, const Extrema_Array1OfPOnCurv2d::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
	cls_Extrema_HArray1OfPOnCurv2d.def(py::init<const Extrema_Array1OfPOnCurv2d &>(), py::arg("theOther"));
	cls_Extrema_HArray1OfPOnCurv2d.def("Array1", (const Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)() const ) &Extrema_HArray1OfPOnCurv2d::Array1, "None");
	cls_Extrema_HArray1OfPOnCurv2d.def("ChangeArray1", (Extrema_Array1OfPOnCurv2d & (Extrema_HArray1OfPOnCurv2d::*)()) &Extrema_HArray1OfPOnCurv2d::ChangeArray1, "None");
	cls_Extrema_HArray1OfPOnCurv2d.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray1OfPOnCurv2d::get_type_name, "None");
	cls_Extrema_HArray1OfPOnCurv2d.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray1OfPOnCurv2d::get_type_descriptor, "None");
	cls_Extrema_HArray1OfPOnCurv2d.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray1OfPOnCurv2d::*)() const ) &Extrema_HArray1OfPOnCurv2d::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray2OfPOnCurv.hxx
	py::class_<Extrema_HArray2OfPOnCurv, opencascade::handle<Extrema_HArray2OfPOnCurv>, Extrema_Array2OfPOnCurv, Standard_Transient> cls_Extrema_HArray2OfPOnCurv(mod, "Extrema_HArray2OfPOnCurv", "None");
	cls_Extrema_HArray2OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"));
	cls_Extrema_HArray2OfPOnCurv.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Extrema_Array2OfPOnCurv::value_type &>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"), py::arg("theValue"));
	cls_Extrema_HArray2OfPOnCurv.def(py::init<const Extrema_Array2OfPOnCurv &>(), py::arg("theOther"));
	cls_Extrema_HArray2OfPOnCurv.def("Array2", (const Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)() const ) &Extrema_HArray2OfPOnCurv::Array2, "None");
	cls_Extrema_HArray2OfPOnCurv.def("ChangeArray2", (Extrema_Array2OfPOnCurv & (Extrema_HArray2OfPOnCurv::*)()) &Extrema_HArray2OfPOnCurv::ChangeArray2, "None");
	cls_Extrema_HArray2OfPOnCurv.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray2OfPOnCurv::get_type_name, "None");
	cls_Extrema_HArray2OfPOnCurv.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray2OfPOnCurv::get_type_descriptor, "None");
	cls_Extrema_HArray2OfPOnCurv.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv::*)() const ) &Extrema_HArray2OfPOnCurv::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray2OfPOnCurv2d.hxx
	py::class_<Extrema_HArray2OfPOnCurv2d, opencascade::handle<Extrema_HArray2OfPOnCurv2d>, Extrema_Array2OfPOnCurv2d, Standard_Transient> cls_Extrema_HArray2OfPOnCurv2d(mod, "Extrema_HArray2OfPOnCurv2d", "None");
	cls_Extrema_HArray2OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"));
	cls_Extrema_HArray2OfPOnCurv2d.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Extrema_Array2OfPOnCurv2d::value_type &>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"), py::arg("theValue"));
	cls_Extrema_HArray2OfPOnCurv2d.def(py::init<const Extrema_Array2OfPOnCurv2d &>(), py::arg("theOther"));
	cls_Extrema_HArray2OfPOnCurv2d.def("Array2", (const Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)() const ) &Extrema_HArray2OfPOnCurv2d::Array2, "None");
	cls_Extrema_HArray2OfPOnCurv2d.def("ChangeArray2", (Extrema_Array2OfPOnCurv2d & (Extrema_HArray2OfPOnCurv2d::*)()) &Extrema_HArray2OfPOnCurv2d::ChangeArray2, "None");
	cls_Extrema_HArray2OfPOnCurv2d.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray2OfPOnCurv2d::get_type_name, "None");
	cls_Extrema_HArray2OfPOnCurv2d.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray2OfPOnCurv2d::get_type_descriptor, "None");
	cls_Extrema_HArray2OfPOnCurv2d.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnCurv2d::*)() const ) &Extrema_HArray2OfPOnCurv2d::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\Extrema_HArray2OfPOnSurf.hxx
	py::class_<Extrema_HArray2OfPOnSurf, opencascade::handle<Extrema_HArray2OfPOnSurf>, Extrema_Array2OfPOnSurf, Standard_Transient> cls_Extrema_HArray2OfPOnSurf(mod, "Extrema_HArray2OfPOnSurf", "None");
	cls_Extrema_HArray2OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"));
	cls_Extrema_HArray2OfPOnSurf.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Extrema_Array2OfPOnSurf::value_type &>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"), py::arg("theValue"));
	cls_Extrema_HArray2OfPOnSurf.def(py::init<const Extrema_Array2OfPOnSurf &>(), py::arg("theOther"));
	cls_Extrema_HArray2OfPOnSurf.def("Array2", (const Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)() const ) &Extrema_HArray2OfPOnSurf::Array2, "None");
	cls_Extrema_HArray2OfPOnSurf.def("ChangeArray2", (Extrema_Array2OfPOnSurf & (Extrema_HArray2OfPOnSurf::*)()) &Extrema_HArray2OfPOnSurf::ChangeArray2, "None");
	cls_Extrema_HArray2OfPOnSurf.def_static("get_type_name_", (const char * (*)()) &Extrema_HArray2OfPOnSurf::get_type_name, "None");
	cls_Extrema_HArray2OfPOnSurf.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Extrema_HArray2OfPOnSurf::get_type_descriptor, "None");
	cls_Extrema_HArray2OfPOnSurf.def("DynamicType", (const opencascade::handle<Standard_Type> & (Extrema_HArray2OfPOnSurf::*)() const ) &Extrema_HArray2OfPOnSurf::DynamicType, "None");

	// C:\Miniconda\envs\occt\Library\include\opencascade\NCollection_Sequence.hxx
	py::class_<Extrema_SequenceOfPOnCurv2d, std::unique_ptr<Extrema_SequenceOfPOnCurv2d, Deleter<Extrema_SequenceOfPOnCurv2d>>, NCollection_BaseSequence> cls_Extrema_SequenceOfPOnCurv2d(mod, "Extrema_SequenceOfPOnCurv2d", "Purpose: Definition of a sequence of elements indexed by an Integer in range of 1..n");
	cls_Extrema_SequenceOfPOnCurv2d.def(py::init<>());
	cls_Extrema_SequenceOfPOnCurv2d.def(py::init<const opencascade::handle<NCollection_BaseAllocator> &>(), py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnCurv2d.def(py::init([] (const Extrema_SequenceOfPOnCurv2d &other) {return new Extrema_SequenceOfPOnCurv2d(other);}), "Copy constructor", py::arg("other"));
	cls_Extrema_SequenceOfPOnCurv2d.def("begin", (Extrema_SequenceOfPOnCurv2d::iterator (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::begin, "Returns an iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv2d.def("end", (Extrema_SequenceOfPOnCurv2d::iterator (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::end, "Returns an iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv2d.def("cbegin", (Extrema_SequenceOfPOnCurv2d::const_iterator (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::cbegin, "Returns a const iterator pointing to the first element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv2d.def("cend", (Extrema_SequenceOfPOnCurv2d::const_iterator (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::cend, "Returns a const iterator referring to the past-the-end element in the sequence.");
	cls_Extrema_SequenceOfPOnCurv2d.def("Size", (Standard_Integer (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::Size, "Number of items");
	cls_Extrema_SequenceOfPOnCurv2d.def("Length", (Standard_Integer (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::Length, "Number of items");
	cls_Extrema_SequenceOfPOnCurv2d.def("Lower", (Standard_Integer (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::Lower, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnCurv2d.def("Upper", (Standard_Integer (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::Upper, "Method for consistency with other collections.");
	cls_Extrema_SequenceOfPOnCurv2d.def("IsEmpty", (Standard_Boolean (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::IsEmpty, "Empty query");
	cls_Extrema_SequenceOfPOnCurv2d.def("Reverse", (void (Extrema_SequenceOfPOnCurv2d::*)()) &Extrema_SequenceOfPOnCurv2d::Reverse, "Reverse sequence");
	cls_Extrema_SequenceOfPOnCurv2d.def("Exchange", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnCurv2d::Exchange, "Exchange two members", py::arg("I"), py::arg("J"));
	cls_Extrema_SequenceOfPOnCurv2d.def_static("delNode_", (void (*)(NCollection_SeqNode *, opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnCurv2d::delNode, "Static deleter to be passed to BaseSequence", py::arg("theNode"), py::arg("theAl"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Clear", [](Extrema_SequenceOfPOnCurv2d &self) -> void { return self.Clear(); });
	cls_Extrema_SequenceOfPOnCurv2d.def("Clear", (void (Extrema_SequenceOfPOnCurv2d::*)(const opencascade::handle<NCollection_BaseAllocator> &)) &Extrema_SequenceOfPOnCurv2d::Clear, "Clear the items out, take a new allocator if non null", py::arg("theAllocator"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Assign", (Extrema_SequenceOfPOnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Assign, "Replace this sequence by the items of theOther. This method does not change the internal allocator.", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnCurv2d.def("assign", (Extrema_SequenceOfPOnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::operator=, py::is_operator(), "Replacement operator", py::arg("theOther"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Remove", (void (Extrema_SequenceOfPOnCurv2d::*)(Extrema_SequenceOfPOnCurv2d::Iterator &)) &Extrema_SequenceOfPOnCurv2d::Remove, "Remove one item", py::arg("thePosition"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Remove", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv2d::Remove, "Remove one item", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Remove", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, const Standard_Integer)) &Extrema_SequenceOfPOnCurv2d::Remove, "Remove range of items", py::arg("theFromIndex"), py::arg("theToIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Append", (void (Extrema_SequenceOfPOnCurv2d::*)(const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Append, "Append one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Append", (void (Extrema_SequenceOfPOnCurv2d::*)(Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Append, "Append another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Prepend", (void (Extrema_SequenceOfPOnCurv2d::*)(const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Prepend, "Prepend one item", py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Prepend", (void (Extrema_SequenceOfPOnCurv2d::*)(Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Prepend, "Prepend another sequence (making it empty)", py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv2d.def("InsertBefore", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::InsertBefore, "InsertBefore theIndex theItem", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("InsertBefore", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::InsertBefore, "InsertBefore theIndex another sequence", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv2d.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv2d::*)(Extrema_SequenceOfPOnCurv2d::Iterator &, const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::InsertAfter, "InsertAfter the position of iterator", py::arg("thePosition"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::InsertAfter, "InsertAfter theIndex theItem", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv2d.def("InsertAfter", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::InsertAfter, "InsertAfter theIndex another sequence", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("Split", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, Extrema_SequenceOfPOnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::Split, "Split in two sequences", py::arg("theIndex"), py::arg("theSeq"));
	cls_Extrema_SequenceOfPOnCurv2d.def("First", (const Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::First, "First item access");
	cls_Extrema_SequenceOfPOnCurv2d.def("ChangeFirst", (Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)()) &Extrema_SequenceOfPOnCurv2d::ChangeFirst, "First item access");
	cls_Extrema_SequenceOfPOnCurv2d.def("Last", (const Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)() const ) &Extrema_SequenceOfPOnCurv2d::Last, "Last item access");
	cls_Extrema_SequenceOfPOnCurv2d.def("ChangeLast", (Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)()) &Extrema_SequenceOfPOnCurv2d::ChangeLast, "Last item access");
	cls_Extrema_SequenceOfPOnCurv2d.def("Value", (const Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnCurv2d::Value, "Constant item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("__call__", (const Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer) const ) &Extrema_SequenceOfPOnCurv2d::operator(), py::is_operator(), "Constant operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("ChangeValue", (Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv2d::ChangeValue, "Variable item access by theIndex", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("__call__", (Extrema_POnCurv2d & (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer)) &Extrema_SequenceOfPOnCurv2d::operator(), py::is_operator(), "Variable operator()", py::arg("theIndex"));
	cls_Extrema_SequenceOfPOnCurv2d.def("SetValue", (void (Extrema_SequenceOfPOnCurv2d::*)(const Standard_Integer, const Extrema_POnCurv2d &)) &Extrema_SequenceOfPOnCurv2d::SetValue, "Set item value by theIndex", py::arg("theIndex"), py::arg("theItem"));
	cls_Extrema_SequenceOfPOnCurv2d.def("__iter__", [](const Extrema_SequenceOfPOnCurv2d &s) { return py::make_iterator(s.begin(), s.end()); }, py::keep_alive<0, 1>());


}
