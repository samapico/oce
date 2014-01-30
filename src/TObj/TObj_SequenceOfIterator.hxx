// Created on: 2004-11-23
// Created by: Pavel TELKOV
// Copyright (c) 2004-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

// The original implementation Copyright: (C) RINA S.p.A

#ifndef TObj_SequenceOfIterator_HeaderFile
#define TObj_SequenceOfIterator_HeaderFile

#include <NCollection_DefineBaseCollection.hxx>
#include <NCollection_DefineSequence.hxx>

#include <TObj_ObjectIterator.hxx>

DEFINE_BASECOLLECTION (TObj_CollectionOfIterator, Handle(TObj_ObjectIterator))
DEFINE_SEQUENCE (TObj_SequenceOfIterator, TObj_CollectionOfIterator,
                 Handle(TObj_ObjectIterator))

#endif

#ifdef _MSC_VER
#pragma once
#endif