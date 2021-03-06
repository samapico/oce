// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_EdgeList_HeaderFile
#define _IGESSolid_EdgeList_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_EdgeList.hxx>

#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <Handle_IGESSolid_HArray1OfVertexList.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_IGESSolid_VertexList.hxx>
class IGESData_HArray1OfIGESEntity;
class IGESSolid_HArray1OfVertexList;
class TColStd_HArray1OfInteger;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class IGESSolid_VertexList;


//! defines EdgeList, Type <504> Form <1>
//! in package IGESSolid
//! EdgeList is defined as a segment joining two vertices
//! It contains one or more edge tuples.
class IGESSolid_EdgeList : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_EdgeList();
  
  //! This method is used to set the fields of the class
  //! EdgeList
  //! - curves           : the model space curves
  //! - startVertexList  : the vertex list that contains the
  //! start vertices
  //! - startVertexIndex : the index of the vertex in the
  //! corresponding vertex list
  //! - endVertexList    : the vertex list that contains the
  //! end vertices
  //! - endVertexIndex   : the index of the vertex in the
  //! corresponding vertex list
  //! raises exception if size of curves,startVertexList,startVertexIndex,
  //! endVertexList and endVertexIndex do no match
  Standard_EXPORT   void Init (const Handle(IGESData_HArray1OfIGESEntity)& curves, const Handle(IGESSolid_HArray1OfVertexList)& startVertexList, const Handle(TColStd_HArray1OfInteger)& startVertexIndex, const Handle(IGESSolid_HArray1OfVertexList)& endVertexList, const Handle(TColStd_HArray1OfInteger)& endVertexIndex) ;
  
  //! returns the number of edges in the edge list
  Standard_EXPORT   Standard_Integer NbEdges()  const;
  
  //! returns the num'th model space curve
  //! raises Exception if num <= 0 or num > NbEdges()
  Standard_EXPORT   Handle(IGESData_IGESEntity) Curve (const Standard_Integer num)  const;
  
  //! returns the num'th start vertex list
  //! raises Exception if num <= 0 or num > NbEdges()
  Standard_EXPORT   Handle(IGESSolid_VertexList) StartVertexList (const Standard_Integer num)  const;
  
  //! returns the index of num'th start vertex in
  //! the corresponding start vertex list
  //! raises Exception if num <= 0 or num > NbEdges()
  Standard_EXPORT   Standard_Integer StartVertexIndex (const Standard_Integer num)  const;
  
  //! returns the num'th end vertex list
  //! raises Exception if num <= 0 or num > NbEdges()
  Standard_EXPORT   Handle(IGESSolid_VertexList) EndVertexList (const Standard_Integer num)  const;
  
  //! returns the index of num'th end vertex in
  //! the corresponding end vertex list
  //! raises Exception if num <= 0 or num > NbEdges()
  Standard_EXPORT   Standard_Integer EndVertexIndex (const Standard_Integer num)  const;




  DEFINE_STANDARD_RTTI(IGESSolid_EdgeList)

protected:




private: 


  Handle(IGESData_HArray1OfIGESEntity) theCurves;
  Handle(IGESSolid_HArray1OfVertexList) theStartVertexList;
  Handle(TColStd_HArray1OfInteger) theStartVertexIndex;
  Handle(IGESSolid_HArray1OfVertexList) theEndVertexList;
  Handle(TColStd_HArray1OfInteger) theEndVertexIndex;


};







#endif // _IGESSolid_EdgeList_HeaderFile
