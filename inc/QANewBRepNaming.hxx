// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_HeaderFile
#define _QANewBRepNaming_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TNaming_Evolution_HeaderFile
#include <TNaming_Evolution.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TDF_Label;
class TNaming_Builder;
class TopoDS_Shape;
class TopLoc_Location;
class QANewBRepNaming_LoaderParent;
class QANewBRepNaming_Loader;
class QANewBRepNaming_TopNaming;
class QANewBRepNaming_Box;
class QANewBRepNaming_Prism;
class QANewBRepNaming_Revol;
class QANewBRepNaming_Cylinder;
class QANewBRepNaming_Sphere;
class QANewBRepNaming_BooleanOperation;
class QANewBRepNaming_BooleanOperationFeat;
class QANewBRepNaming_Common;
class QANewBRepNaming_Cut;
class QANewBRepNaming_Fuse;
class QANewBRepNaming_Fillet;
class QANewBRepNaming_Chamfer;
class QANewBRepNaming_ImportShape;
class QANewBRepNaming_Gluing;
class QANewBRepNaming_Intersection;
class QANewBRepNaming_Limitation;


//! Implements  methods   to   load  the  Make   Shape <br>
//!          operations in  the  naming data-structure (package <br>
//!          TNaming),  which    provides  topological   naming <br>
//!          facilities.  Shape  generation, modifications  and <br>
//!          deletions   are  recorded in   the  data-framework <br>
//!          (package  TDF)   using the builder  from   package <br>
//!          TNaming. <br>
class QANewBRepNaming  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void CleanStructure(const TDF_Label& theLabel) ;
  
  Standard_EXPORT   static  void LoadNamedShape(TNaming_Builder& theBuilder,const TNaming_Evolution theEvol,const TopoDS_Shape& theOS,const TopoDS_Shape& theNS) ;
  
  Standard_EXPORT   static  void Displace(const TDF_Label& theLabel,const TopLoc_Location& theLoc,const Standard_Boolean theWithOld) ;





protected:





private:




friend class QANewBRepNaming_LoaderParent;
friend class QANewBRepNaming_Loader;
friend class QANewBRepNaming_TopNaming;
friend class QANewBRepNaming_Box;
friend class QANewBRepNaming_Prism;
friend class QANewBRepNaming_Revol;
friend class QANewBRepNaming_Cylinder;
friend class QANewBRepNaming_Sphere;
friend class QANewBRepNaming_BooleanOperation;
friend class QANewBRepNaming_BooleanOperationFeat;
friend class QANewBRepNaming_Common;
friend class QANewBRepNaming_Cut;
friend class QANewBRepNaming_Fuse;
friend class QANewBRepNaming_Fillet;
friend class QANewBRepNaming_Chamfer;
friend class QANewBRepNaming_ImportShape;
friend class QANewBRepNaming_Gluing;
friend class QANewBRepNaming_Intersection;
friend class QANewBRepNaming_Limitation;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif