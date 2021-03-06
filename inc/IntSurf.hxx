// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_HeaderFile
#define _IntSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

class gp_Vec;
class gp_Dir;
class IntSurf_Transition;
class IntSurf_PntOn2S;
class IntSurf_Couple;
class IntSurf_SequenceOfCouple;
class IntSurf_LineOn2S;
class IntSurf_Quadric;
class IntSurf_QuadricTool;
class IntSurf_PathPoint;
class IntSurf_SequenceOfPathPoint;
class IntSurf_PathPointTool;
class IntSurf_InteriorPoint;
class IntSurf_SequenceOfInteriorPoint;
class IntSurf_InteriorPointTool;
class IntSurf_Transition;
class IntSurf_ListOfPntOn2S;
class IntSurf_SequenceNodeOfSequenceOfCouple;
class IntSurf_SequenceNodeOfSequenceOfPathPoint;
class IntSurf_SequenceNodeOfSequenceOfInteriorPoint;
class IntSurf_ListNodeOfListOfPntOn2S;
class IntSurf_ListIteratorOfListOfPntOn2S;


//! This package provides resources for
//! all the packages concerning the intersection
//! between surfaces.
class IntSurf 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the transition of the intersection point
  //! between the two lines.
  //! TgFirst is the tangent vector of the first line.
  //! TgSecond is the tangent vector of the second line.
  //! Normal is the direction used to orientate the cross
  //! product TgFirst^TgSecond.
  //! TFirst is the transition of the point on the first line.
  //! TSecond is the transition of the point on the second line.
  Standard_EXPORT static   void MakeTransition (const gp_Vec& TgFirst, const gp_Vec& TgSecond, const gp_Dir& Normal, IntSurf_Transition& TFirst, IntSurf_Transition& TSecond) ;




protected:





private:




friend class IntSurf_PntOn2S;
friend class IntSurf_Couple;
friend class IntSurf_SequenceOfCouple;
friend class IntSurf_LineOn2S;
friend class IntSurf_Quadric;
friend class IntSurf_QuadricTool;
friend class IntSurf_PathPoint;
friend class IntSurf_SequenceOfPathPoint;
friend class IntSurf_PathPointTool;
friend class IntSurf_InteriorPoint;
friend class IntSurf_SequenceOfInteriorPoint;
friend class IntSurf_InteriorPointTool;
friend class IntSurf_Transition;
friend class IntSurf_ListOfPntOn2S;
friend class IntSurf_SequenceNodeOfSequenceOfCouple;
friend class IntSurf_SequenceNodeOfSequenceOfPathPoint;
friend class IntSurf_SequenceNodeOfSequenceOfInteriorPoint;
friend class IntSurf_ListNodeOfListOfPntOn2S;
friend class IntSurf_ListIteratorOfListOfPntOn2S;

};







#endif // _IntSurf_HeaderFile
