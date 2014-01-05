/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file incorporates work covered by the following license notice:
 *
 *   Licensed to the Apache Software Foundation (ASF) under one or more
 *   contributor license agreements. See the NOTICE file distributed
 *   with this work for additional information regarding copyright
 *   ownership. The ASF licenses this file to you under the Apache
 *   License, Version 2.0 (the "License"); you may not use this file
 *   except in compliance with the License. You may obtain a copy of
 *   the License at http://www.apache.org/licenses/LICENSE-2.0 .
 */
#ifndef INCLUDED_SW_INC_ACCMAP_HXX
#define INCLUDED_SW_INC_ACCMAP_HXX

// #include <cppuhelper/weakref.hxx>
// #include <com/sun/star/accessibility/XAccessible.hpp>
// #include <rtl/ref.hxx>
// #include <osl/mutex.hxx>
#include <svx/IAccessibleViewForwarder.hxx>
#include <svx/IAccessibleParent.hxx>
// #include <tools/fract.hxx>
// #include <svx/AccessibleControlShape.hxx>
// #include <svx/AccessibleShape.hxx>
// #include "fesh.hxx"
// #include <vector>
// #include <set>

class SwAccessibleParagraph;

class SwViewShell;
//class Rectangle;
class SwFrm;
class SwTxtFrm;
class SwPageFrm;
//class SwAccessibleContext;
class SwAccessibleContextMap_Impl;
class SwAccessibleEventList_Impl;
class SwAccessibleEventMap_Impl;
class SwShapeList_Impl;
class SdrObject;
namespace accessibility {
    class AccessibleShape;
}
class SwAccessibleShapeMap_Impl;
struct SwAccessibleEvent_Impl;
class SwAccessibleSelectedParas_Impl;
class SwRect;
class MapMode;
class SwAccPreviewData;
struct PreviewPage;
class Window;
#endif

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
