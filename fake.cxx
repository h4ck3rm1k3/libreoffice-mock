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


#include <com/sun/star/uno/Any.hxx>
#include <com/sun/star/uno/Type.hxx>
#include <com/sun/star/uno/Sequence.hxx>
#include <com/sun/star/accessibility/AccessibleRole.hpp>
#include <com/sun/star/accessibility/AccessibleRelation.hpp>
#include <com/sun/star/accessibility/AccessibleRelationType.hpp>
#include <com/sun/star/accessibility/AccessibleStateType.hpp>
#include <com/sun/star/accessibility/XAccessible.hpp>
#include <com/sun/star/accessibility/XAccessibleText.hpp>
#include <com/sun/star/accessibility/XAccessibleTextMarkup.hpp>
#include <com/sun/star/accessibility/XAccessibleTextAttributes.hpp>
#include <com/sun/star/accessibility/XAccessibleValue.hpp>
#include <com/sun/star/accessibility/XAccessibleAction.hpp>
#include <com/sun/star/accessibility/XAccessibleContext.hpp>
#include <com/sun/star/accessibility/XAccessibleComponent.hpp>
#include <com/sun/star/accessibility/XAccessibleEventBroadcaster.hpp>
#include <com/sun/star/accessibility/XAccessibleMultiLineText.hpp>
#include <com/sun/star/accessibility/XAccessibleStateSet.hpp>
#include <com/sun/star/accessibility/XAccessibleRelationSet.hpp>
#include <com/sun/star/accessibility/XAccessibleTable.hpp>
#include <com/sun/star/accessibility/XAccessibleEditableText.hpp>
#include <com/sun/star/accessibility/XAccessibleImage.hpp>
#include <com/sun/star/accessibility/XAccessibleHyperlink.hpp>
#include <com/sun/star/accessibility/XAccessibleHypertext.hpp>
#include <com/sun/star/accessibility/XAccessibleSelection.hpp>
#include <com/sun/star/awt/XExtendedToolkit.hpp>
#include <com/sun/star/awt/XTopWindow.hpp>
#include <com/sun/star/awt/XTopWindowListener.hpp>
#include <com/sun/star/awt/XWindow.hpp>
#include <com/sun/star/lang/XComponent.hpp>
#include <com/sun/star/lang/XServiceInfo.hpp>
#include <com/sun/star/lang/XInitialization.hpp>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>
#include <com/sun/star/lang/XSingleServiceFactory.hpp>
#include <com/sun/star/beans/Property.hpp>

#include <rtl/ref.hxx>
#include <cppuhelper/factory.hxx>
#include <cppuhelper/queryinterface.hxx>

#include <vcl/unx/gtk/a11y/atkwrapper.hxx>
#include <vcl/unx/gtk/a11y/atkregistry.hxx>
#include "vcl/unx/gtk/a11y/atklistener.hxx"

#ifdef ENABLE_TRACING
#include <stdio.h>
#endif

#include <string.h>

using namespace com::sun::star::uno;
using namespace com::sun::star::accessibility;

//template <>   static const com::sun::star::uno::Type& (*)
//  cppu::UnoType<XAccessibleAction>::get() {}
/*
template <>  {}
template <>  cppu::UnoType<XAccessibleComponent>::get{}
template <>  cppu::UnoType<XAccessibleEditableText>::get{}
template <>  cppu::UnoType<XAccessibleHypertext>::get{}
template <> void cppu::UnoType<XAccessibleImage>::get{}
template <> void cppu::UnoType<XAccessibleSelection>::get{}
template <> void cppu::UnoType<XAccessibleTable>::get{}
template <> void cppu::UnoType<XAccessibleText>::get{}
template <> void cppu::UnoType<XAccessibleValue>::get{}
*/
//void editableTextIfaceInit{}
//void hypertextIfaceInit{}
//void imageIfaceInit{}
void ooo_wrapper_registry_add(Reference<XAccessible> const&, _AtkObject*){}
AtkObject * ooo_wrapper_registry_get(Reference<XAccessible> const&){}
void ooo_wrapper_registry_remove(XAccessible*){}

void actionIfaceInit(AtkActionIface *iface) {}
void componentIfaceInit(AtkComponentIface *iface) {}
void editableTextIfaceInit(AtkEditableTextIface *iface) {}
void hypertextIfaceInit(AtkHypertextIface *iface) {}
void imageIfaceInit(AtkImageIface *iface) {}
void selectionIfaceInit(AtkSelectionIface *iface){}
void tableIfaceInit(AtkTableIface *iface){}
void textIfaceInit(AtkTextIface *iface){}
void valueIfaceInit(AtkValueIface *iface){}
//AtkListener::AtkListener(AtkObjectWrapper * pWrapper);

/*
AtkObject *
atk_object_wrapper_new( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible >& rxAccessible,
                        AtkObject* parent )
*/

#include <iostream>

AtkRole mapToAtkRole( sal_Int16 nRole );
void test_mapToAtkRole() {

  for (
       sal_Int16 nRole = 0;
       nRole <  ATK_ROLE_LAST_DEFINED;
       nRole ++) {
    AtkRole r= mapToAtkRole( nRole );
    std::cout <<nRole;
    std::cout << '\t';
    std::cout <<r;
    std::cout << std::endl;
    
  }
}

void test_atk () {
  
  test_mapToAtkRole();
};

int main () {
  test_atk();

}
