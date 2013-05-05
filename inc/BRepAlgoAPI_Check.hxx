// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Check_HeaderFile
#define _BRepAlgoAPI_Check_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BOPAlgo_PArgumentAnalyzer_HeaderFile
#include <BOPAlgo_PArgumentAnalyzer.hxx>
#endif
#ifndef _BOPAlgo_ListOfCheckResult_HeaderFile
#include <BOPAlgo_ListOfCheckResult.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BOPAlgo_Operation_HeaderFile
#include <BOPAlgo_Operation.hxx>
#endif
class TopoDS_Shape;



//! The class Check provides a diagnostic tool for checking <br>
//! single shape or couple of shapes. <br>
//! Single shape is checking on topological validity, small edges <br>
//! and self-interference. For couple of shapes added check <br>
//! on validity for boolean operation of given type. <br>
//! <br>
//! The class provides two ways of checking shape(-s) <br>
//! 1. Constructors <br>
//!    BRepAlgoAPI_Check aCh(theS); <br>
//!    Standard_Boolean bV=aCh.IsValid(); <br>
//! 2. Methods SetData and Perform <br>
//!    BRepAlgoAPI_Check aCh; <br>
//!    aCh.SetData(theS1, theS2, BOPAlgo_FUSE, Standard_False); <br>
//!    aCh.Perform(); <br>
//!    Standard_Boolean bV=aCh.IsValid(); <br>
class BRepAlgoAPI_Check  {
public:

  DEFINE_STANDARD_ALLOC

  //!  Empty constructor. <br>
  Standard_EXPORT   BRepAlgoAPI_Check();
Standard_EXPORT virtual ~BRepAlgoAPI_Check();
  //!  Constructor for checking single shape. <br>
//! It calls methods <br>
//! Init(theS, TopoDS_Shape(), BOPAlgo_UNKNOWN, bTestSE, bTestSI) <br>
//! and Perform(). <br>
//! Params: <br>
//!  theS   - the shape that should be checked; <br>
//!  bTestSE - flag that specifies whether check on small edges <br>
//!            should be performed; by default it is set to TRUE; <br>
//!  bTestSI - flag that specifies whether check on self-interference <br>
//!            should be performed; by default it is set to TRUE; <br>
  Standard_EXPORT   BRepAlgoAPI_Check(const TopoDS_Shape& theS,const Standard_Boolean bTestSE = Standard_True,const Standard_Boolean bTestSI = Standard_True);
  //! Constructor for couple of shapes. <br>
//! It calls methods <br>
//! Init(theS1, theS2, theOp, bTestSE, bTestSI) and Perform(). <br>
//! Params: <br>
//!  theS1, theS2 - the initial shapes. <br>
//!  theOp - the type of Boolean Operation; <br>
//!          if it is not defined (set to UNKNOWN) for each shape <br>
//!          performed check as for single shape. <br>
//!  bTestSE - flag that specifies whether check on small edges <br>
//!            should be performed; by default it is set to TRUE; <br>
//!  bTestSI - flag that specifies whether check on self-interference <br>
//!            should be performed; by default it is set to TRUE; <br>
  Standard_EXPORT   BRepAlgoAPI_Check(const TopoDS_Shape& theS1,const TopoDS_Shape& theS2,const BOPAlgo_Operation theOp = BOPAlgo_UNKNOWN,const Standard_Boolean bTestSE = Standard_True,const Standard_Boolean bTestSI = Standard_True);
  //! Sets data for check by Init method. <br>
//! The method provides alternative way for checking single shape. <br>
  Standard_EXPORT     void SetData(const TopoDS_Shape& theS,const Standard_Boolean bTestSE = Standard_True,const Standard_Boolean bTestSI = Standard_True) ;
  //! Sets data for check by Init method. <br>
//! The method provides alternative way for checking couple of shapes. <br>
  Standard_EXPORT     void SetData(const TopoDS_Shape& theS1,const TopoDS_Shape& theS2,const BOPAlgo_Operation theOp = BOPAlgo_UNKNOWN,const Standard_Boolean bTestSE = Standard_True,const Standard_Boolean bTestSI = Standard_True) ;
  //! Performs the check. <br>
  Standard_EXPORT     void Perform() ;
  //! Shows whether shape(s) valid or not. <br>
  Standard_EXPORT     Standard_Boolean IsValid() ;
  //! Returns faulty shapes. <br>
  Standard_EXPORT    const BOPAlgo_ListOfCheckResult& Result() ;





protected:

  //! Initialyzes data. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& theS1,const TopoDS_Shape& theS2,const BOPAlgo_Operation theOp,const Standard_Boolean bTestSE,const Standard_Boolean bTestSI) ;


TopoDS_Shape myS1;
TopoDS_Shape myS2;
BOPAlgo_PArgumentAnalyzer myAnalyzer;
BOPAlgo_ListOfCheckResult myResult;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif