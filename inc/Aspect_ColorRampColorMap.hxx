// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_ColorRampColorMap_HeaderFile
#define _Aspect_ColorRampColorMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_ColorRampColorMap_HeaderFile
#include <Handle_Aspect_ColorRampColorMap.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_ColorMap_HeaderFile
#include <Aspect_ColorMap.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class Standard_RangeError;
class Aspect_BadAccess;
class Quantity_Color;
class Aspect_ColorMapEntry;


//! This class defines a ColorRampColorMap object. <br>
class Aspect_ColorRampColorMap : public Aspect_ColorMap {

public:

  //! Create a Color Ramp Colormap starting from Black at <br>
//!	     basepixel to color at basepixel+dimension-1. <br>
  Standard_EXPORT   Aspect_ColorRampColorMap(const Standard_Integer basepixel,const Standard_Integer dimension,const Quantity_Color& color);
  //! Create a Color Ramp Colormap starting from Black at <br>
//!	     basepixel to color at basepixel+dimension-1. <br>
  Standard_EXPORT   Aspect_ColorRampColorMap(const Standard_Integer basepixel,const Standard_Integer dimension,const Quantity_NameOfColor colorName);
  //! Get  Color Ramp Colormap definition . <br>
  Standard_EXPORT     void ColorRampDefinition(Standard_Integer& basepixel,Standard_Integer& dimension,Quantity_Color& color) const;
  //! Returns the index in the ColorMap of the <br>
//!	    ColorMapEntry.Index() equal to <AnEntryIndex>. <br>
//!  Warning: Raises BadAccess if the index is not defined in the <br>
//!	    ColorMap. <br>
  Standard_EXPORT     Standard_Integer FindColorMapIndex(const Standard_Integer ColorMapEntryIndex) const;
  //! Returns the ColorMapEntry with ColorMapEntry.Index() <br>
//!	    equal to <AnEntryIndex>. <br>
//!  Warning: Raises BadAccess if the index is not defined in the <br>
//!	    ColorMap. <br>
  Standard_EXPORT    const Aspect_ColorMapEntry& FindEntry(const Standard_Integer AColorMapEntryIndex) const;
  //! Returns the index in the ColorMap of the <br>
//!	    nearest matching ColorMapEntry <br>
  Standard_EXPORT     Standard_Integer NearestColorMapIndex(const Quantity_Color& aColor) const;
  //! Returns the nearest ColorMapEntry that match aColor . <br>
  Standard_EXPORT    const Aspect_ColorMapEntry& NearestEntry(const Quantity_Color& aColor) const;
  //! Search an identical color entry in the color map <me> <br>
//! or returns the nearest ColorMapEntry Index. <br>
  Standard_EXPORT     Standard_Integer AddEntry(const Quantity_Color& aColor) ;




  DEFINE_STANDARD_RTTI(Aspect_ColorRampColorMap)

protected:




private: 

  //! Create a Color Ramp Colormap starting from Black at <br>
//!	     basepixel to color at basepixel+dimension-1. <br>
  Standard_EXPORT     void ComputeEntry(const Standard_Integer basepixel,const Standard_Integer dimension,const Quantity_Color& color) ;

Quantity_Color mycolor;
Standard_Integer mybasepixel;
Standard_Integer mydimension;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif