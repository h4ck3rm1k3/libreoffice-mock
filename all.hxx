#pragma once
#define ISA(X) DOISA(X())

// block this from being included

#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCCELL_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCCONTEXT_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCCONTEXT_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCDOC_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCEMBEDDED_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFOOTNOTE_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFRAMEBASE_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFRAME_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFRMOBJMAP_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFRMOBJSLIST_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCFRMOBJ_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCGRAPHIC_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCHEADERFOOTER_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCHYPERLINK_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCHYPERTEXTDATA_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCNOTEXTFRAME_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCPAGE_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCPARA_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCPORTIONS_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCPREVIEW_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCSELECTIONHELPER_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCTABLE_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_ACCTEXTFRAME_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_PARACHANGETRACKINGINFO_HXX
#define INCLUDED_SW_SOURCE_CORE_ACCESS_TEXTMARKUPHELPER_HXX
#define _ACCNOTEXTHYPERLINK_HXX
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTID_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEEVENTOBJECT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATIONTYPE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLEROLE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLESTATETYPE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGETYPE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETEXTTYPE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ILLEGALACCESSIBLECOMPONENTSTATEEXCEPTION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_TEXTSEGMENT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEACTION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLECOMPONENT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLECONTEXT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEDITABLETEXT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEVENTBROADCASTER_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEVENTLISTENER_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEXTENDEDATTRIBUTES_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEEXTENDEDCOMPONENT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEGETACCFLOWTO_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEGROUPPOSITION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEHYPERLINK_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEHYPERTEXT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEIMAGE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEKEYBINDING_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEMULTILINETEXT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLERELATIONSET_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLESELECTION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLESTATESET_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETABLE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETABLESELECTION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTATTRIBUTES_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXT_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTMARKUP_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLETEXTSELECTION_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XACCESSIBLEVALUE_HDL
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_XMSAASERVICE_HDL


//#include <com/sun/star/uno/Any.hxx>
//#include <com/sun/star/lang/XComponent.hpp>
//#include <atkobject.h>
//::com::sun::star::lang::IndexOutOfBoundsException
#include <atk/atk.h>
#include <vector>
#include <assert.h>
#include <iostream>
#include <memory>
#include <set>
#include <boost/unordered_map.hpp>

// real states for events
#define ACC_STATE_EDITABLE 0x01
#define ACC_STATE_OPAQUE 0x02
// pseudo states for events
#define ACC_STATE_TEXT_ATTRIBUTE_CHANGED 0x0200
#define ACC_STATE_TEXT_SELECTION_CHANGED 0x0100
#define ACC_STATE_CARET 0x80
#define ACC_STATE_RELATION_FROM 0x40
#define ACC_STATE_RELATION_TO 0x20
#define ACC_STATE_RELATION_MASK 0x60
#define ACC_STATE_MASK 0x1F
//typedef sal_uInt16 tAccessibleStates;
#define CHECK_FOR_DEFUNC(X)
#define CHECK_FOR_WINDOW(X,Y)
//template <class T> void (T,const char *){}
#define THROW_RUNTIME_EXCEPTION(X,Y)
template <class T, class U> void CHECk_FOR_WINDOW(T,U){}

#define EDITENG_DLLPUBLIC
#define DECLARE_XINTERFACE(X)
namespace com{ namespace sun{ namespace star{ namespace uno{
        class XInterface;
      }}}}
namespace com{namespace sun{namespace star{ namespace drawing{class XShape{};      }}}}
class ChangeType{};
class PreviewPage {};
namespace accessibility {
  /*dcl*/class AccessibleControlShape; 
}
/*dcl*/class MapMode{};
/*dcl*/class OUStringBuffer{};
/*dcl*/class SET_PARA {}; 
/*dcl*/class SdrHint{};
/*dcl*/class SfxBoolItem{};
/*dcl*/class SfxPoolItem {}; 
/*dcl*/class SvxAdjustItem{};
/*dcl*/class SvxAutoKernItem{};
/*dcl*/class SvxBlinkItem{};
/*dcl*/class SvxBoxItem{};
/*dcl*/class SvxCaseMapItem{};
/*dcl*/class SvxCharHiddenItem{};
/*dcl*/class SvxCharReliefItem{};
/*dcl*/class SvxCharRotateItem{};
/*dcl*/class SvxCharScaleWidthItem{};
/*dcl*/class SvxCharSetColorItem{};
/*dcl*/class SvxColorItem{};
/*dcl*/class SvxContourItem{};
/*dcl*/class SvxCrossedOutItem{};
/*dcl*/class SvxEmphasisMarkItem{};
/*dcl*/class SvxEscapementItem{};
/*dcl*/class SvxFmtBreakItem{};
/*dcl*/class SvxFmtKeepItem{};
/*dcl*/class SvxFmtSplitItem{};
/*dcl*/class SvxFontHeightItem{};
/*dcl*/class SvxFontItem{};
/*dcl*/class SvxForbiddenRuleItem{};
/*dcl*/class SvxFrameDirectionItem{};
/*dcl*/class SvxHangingPunctuationItem{};
/*dcl*/class SvxHyphenZoneItem{};
/*dcl*/class SvxKerningItem{};
/*dcl*/class SvxLRSpaceItem{};
/*dcl*/class SvxLanguageItem{};
/*dcl*/class SvxLineSpacingItem{};
/*dcl*/class SvxMacroItem{};
/*dcl*/class SvxNoHyphenItem{};
/*dcl*/class SvxOpaqueItem{};
/*dcl*/class SvxOrphansItem{};
/*dcl*/class SvxOverlineItem{};
/*dcl*/class SvxPaperBinItem{};
/*dcl*/class SvxParaGridItem{};
/*dcl*/class SvxParaVertAlignItem{};
/*dcl*/class SvxPostureItem{};
/*dcl*/class SvxPrintItem{};
/*dcl*/class SvxPropSizeItem{};
/*dcl*/class SvxProtectItem{};
/*dcl*/class SvxScriptSpaceItem{};
/*dcl*/class SvxShadowItem{};
/*dcl*/class SvxShadowedItem{};
/*dcl*/class SvxTabStopItem{};
/*dcl*/class SvxTwoLinesItem{};
/*dcl*/class SvxULSpaceItem{};
/*dcl*/class SvxUnderlineItem{};
/*dcl*/class SvxWeightItem{};
/*dcl*/class SvxWidowsItem{};
/*dcl*/class SvxWordLineModeItem{};
/*dcl*/class SwAccPreviewData; // IMPL
/*dcl*/class SwAccessibleContext; 

/*dcl*/class SwAccessibleContextMap_Impl; 
/*dcl*/class SwAccessibleEventList_Impl; 
/*dcl*/class SwAccessibleEventMap_Impl; 
/*dcl*/class SwAccessibleEvent_Impl; 
/*dcl*/class SwAccessibleSelectedParas_Impl;
/*dcl*/class SwAccessibleShapeMap_Impl; 

/*dcl*/class SwAccessibleField{};
/*dcl*/class SwChannelBGrf{};
/*dcl*/class SwChannelGGrf{};
/*dcl*/class SwChannelRGrf{};
/*dcl*/class SwContrastGrf{};
/*dcl*/class SwCropGrf{};
/*dcl*/class SwDrawModeGrf{};
/*dcl*/class SwFmtChain{};
/*dcl*/class SwFmtDrop{};
/*dcl*/class SwFmtEditInReadonly{};
/*dcl*/class SwFmtEndAtTxtEnd{};
/*dcl*/class SwFmtFillOrder{};
/*dcl*/class SwFmtFollowTextFlow{};
/*dcl*/class SwFmtFooter{};
/*dcl*/class SwFmtFrmSize{};
/*dcl*/class SwFmtFtnAtTxtEnd{};
/*dcl*/class SwFmtHeader{};
/*dcl*/class SwFmtHoriOrient{};
/*dcl*/class SwFmtLayoutSplit{};
/*dcl*/class SwFmtLineNumber{};
/*dcl*/class SwFmtNoBalancedColumns{};
/*dcl*/class SwFmtPageDesc{};
/*dcl*/class SwFmtRowSplit{};
/*dcl*/class SwFmtSurround{};
/*dcl*/class SwFmtURL{};
/*dcl*/class SwFmtVertOrient{};
/*dcl*/class SwFmtWrapInfluenceOnObjPos{};
/*dcl*/class SwFooterFrm{};
/*dcl*/class SwFtnFrm{};
/*dcl*/class SwGammaGrf{};
/*dcl*/class SwHeaderAndFooterEatSpacingItem{};
/*dcl*/class SwHeaderFrm{};
/*dcl*/class SwInvertGrf{};
/*dcl*/class SwLuminanceGrf{};
/*dcl*/class SwMirrorGrf{};
/*dcl*/class SwNumRuleItem{};
/*dcl*/class SwParaConnectBorderItem{};
/*dcl*/class SwRegisterItem{};
/*dcl*/class SwRootFrm{};
/*dcl*/class SwRotationGrf{};
/*dcl*/class SwShapeList_Impl; 
/*dcl*/class SwTblBoxNumFormat{};
/*dcl*/class SwTextGridItem{};
/*dcl*/class SwTransparencyGrf{};
/*dcl*/class SwTxtAttr{};
/*dcl*/class XFillGradientItem{};
/*dcl*/class XFillStyleItem{};
class SvxUnoTextRangeBase{};




/*dcl*/class AccessibleControlShape {}; 
namespace com {namespace sun {namespace star {namespace accessibility { class AccessibleEventObject; }}}}

///*dcl*/class AccessibleRelation {}; 
/*dcl*/class AccessibleTextHelper {}; 
///*dcl*/class IllegalAccessibleComponentStateException {}; 


/*dcl*/class SvxEditViewForwarder {}; 
/*dcl*/class SvxUnoTextRangeBaseList {}; 
/*dcl*/class SvxViewForwarder {}; 



///*dcl*/class TextSegment {}; 
/*dcl*/class VEC_CELL {}; 
/*dcl*/class _Alloc {}; 
/*dcl*/class _Distance {}; 
/*dcl*/class _DistanceType {}; 
/*dcl*/class align_t {}; 
/*dcl*/class aligner_ {}; 
/*dcl*/class bidirectional_iterator_tag {}; 
/*dcl*/class const_reverse_iterator {}; 
/*dcl*/class difference_type {}; 
/*dcl*/class emplace_return {}; 
/*dcl*/class internal_type {}; 
/*dcl*/class link_pointer {}; 
/*dcl*/class m_nCurrent {}; 
/*dcl*/class node_pointer {}; 
/*dcl*/class pair {}; 
/*dcl*/class reference {}; 
/*dcl*/class reverse_iterator {}; 
/*dcl*/class SvxTextForwarder{};
/*dcl*/class SwAccessibleHyperTextData {}; 
///*dcl*/class SwAccessiblePortionData {}; 
/*dcl*/class SwParaChangeTrackingInfo {}; 
/*dcl*/class SwRedline {}; 
/*dcl*/class SwXTextPortion {}; 



#define DECLARE_XTYPEPROVIDER(X)
#define SAL_NO_VTABLE
#define SVX_DLLPUBLIC
#define SVX_DLLPRIVATE
#define SAL_CALL
#define SAL_UNUSED_PARAMETER
#define CPPU_GCC_DLLPUBLIC_EXPORT
#define CPPU_GCC_DLLPRIVATE
#define CPPU_GCC3_ALIGN
#define SAL_THROW(X)

#define DECL_LINK(X,Y)
#define SAL_WNODEPRECATED_DECLARATIONS_PUSH
#define SAL_WNODEPRECATED_DECLARATIONS_POP
typedef bool sal_Bool;
typedef char sal_Char;
typedef char sal_Int8;
typedef unsigned char  sal_uInt8;
typedef int  sal_Int32;
typedef int  sal_Unicode;
typedef long long sal_Int64;
typedef long sal_uLong;
typedef short sal_Int16;
typedef short KSHORT;
typedef unsigned int   sal_uInt32;
typedef unsigned short sal_uInt16;
class UnoTunnelIdInit{};
class xTableReference{};
const sal_Bool sal_False=false;
const sal_Bool sal_True=false;
const int SW_ADD_SELECT = 1;
enum colors{
  COL_BLACK,
  COL_WHITE
};
namespace accessibility {
class AccessibleShapeTreeInfo{};

}


//{
//   ATK_ROLE_INVALID = 0,
//   ATK_ROLE_ACCEL_LABEL,
//   ATK_ROLE_ALERT,
//   ATK_ROLE_ANIMATION,
//   ATK_ROLE_ARROW,
//   ATK_ROLE_CALENDAR,
//   ATK_ROLE_CANVAS,
//   ATK_ROLE_CHECK_BOX,
//   ATK_ROLE_CHECK_MENU_ITEM,
//   ATK_ROLE_COLOR_CHOOSER,
//   ATK_ROLE_COLUMN_HEADER,
//   ATK_ROLE_COMBO_BOX,
//   ATK_ROLE_DATE_EDITOR,
//   ATK_ROLE_DESKTOP_ICON,
//   ATK_ROLE_DESKTOP_FRAME,
//   ATK_ROLE_DIAL,
//   ATK_ROLE_DIALOG,
//   ATK_ROLE_DIRECTORY_PANE,
//   ATK_ROLE_DRAWING_AREA,
//   ATK_ROLE_FILE_CHOOSER,
//   ATK_ROLE_FILLER,
//   ATK_ROLE_FONT_CHOOSER,
//   ATK_ROLE_FRAME,
//   ATK_ROLE_GLASS_PANE,
//   ATK_ROLE_HTML_CONTAINER,
//   ATK_ROLE_ICON,
//   ATK_ROLE_IMAGE,
//   ATK_ROLE_INTERNAL_FRAME,
//   ATK_ROLE_LABEL,
//   ATK_ROLE_LAYERED_PANE,
//   ATK_ROLE_LIST,
//   ATK_ROLE_LIST_ITEM,
//   ATK_ROLE_MENU,
//   ATK_ROLE_MENU_BAR,
//   ATK_ROLE_MENU_ITEM,
//   ATK_ROLE_OPTION_PANE,
//   ATK_ROLE_PAGE_TAB,
//   ATK_ROLE_PAGE_TAB_LIST,
//   ATK_ROLE_PANEL,
//   ATK_ROLE_PASSWORD_TEXT,
//   ATK_ROLE_POPUP_MENU,
//   ATK_ROLE_PROGRESS_BAR,
//   ATK_ROLE_PUSH_BUTTON,
//   ATK_ROLE_RADIO_BUTTON,
//   ATK_ROLE_RADIO_MENU_ITEM,
//   ATK_ROLE_ROOT_PANE,
//   ATK_ROLE_ROW_HEADER,
//   ATK_ROLE_SCROLL_BAR,
//   ATK_ROLE_SCROLL_PANE,
//   ATK_ROLE_SEPARATOR,
//   ATK_ROLE_SLIDER,
//   ATK_ROLE_SPLIT_PANE,
//   ATK_ROLE_SPIN_BUTTON,
//   ATK_ROLE_STATUSBAR,
//   ATK_ROLE_TABLE,
//   ATK_ROLE_TABLE_CELL,
//   ATK_ROLE_TABLE_COLUMN_HEADER,
//   ATK_ROLE_TABLE_ROW_HEADER,
//   ATK_ROLE_TEAR_OFF_MENU_ITEM,
//   ATK_ROLE_TERMINAL,
//   ATK_ROLE_TEXT,
//   ATK_ROLE_TOGGLE_BUTTON,
//   ATK_ROLE_TOOL_BAR,
//   ATK_ROLE_TOOL_TIP,
//   ATK_ROLE_TREE,
//   ATK_ROLE_TREE_TABLE,
//   ATK_ROLE_UNKNOWN,
//   ATK_ROLE_VIEWPORT,
//   ATK_ROLE_WINDOW,
//   ATK_ROLE_HEADER,
//   ATK_ROLE_FOOTER,
//   ATK_ROLE_PARAGRAPH,
//   ATK_ROLE_RULER,
//   ATK_ROLE_APPLICATION,
//   ATK_ROLE_AUTOCOMPLETE,
//   ATK_ROLE_EDITBAR,
//   ATK_ROLE_EMBEDDED,
//   ATK_ROLE_ENTRY,
//   ATK_ROLE_CHART,
//   ATK_ROLE_CAPTION,
//   ATK_ROLE_DOCUMENT_FRAME,
//   ATK_ROLE_HEADING,
//   ATK_ROLE_PAGE,
//   ATK_ROLE_SECTION,
//   ATK_ROLE_REDUNDANT_OBJECT,
//   ATK_ROLE_FORM,
//   ATK_ROLE_LINK,
//   ATK_ROLE_INPUT_METHOD_WINDOW,
//   ATK_ROLE_TABLE_ROW,
//   ATK_ROLE_TREE_ITEM,
//   ATK_ROLE_DOCUMENT_SPREADSHEET,
//   ATK_ROLE_DOCUMENT_PRESENTATION,
//   ATK_ROLE_DOCUMENT_TEXT,
//   ATK_ROLE_DOCUMENT_WEB,
//   ATK_ROLE_DOCUMENT_EMAIL,
//   ATK_ROLE_COMMENT,
//   ATK_ROLE_LIST_BOX,
//   ATK_ROLE_GROUPING,
//   ATK_ROLE_IMAGE_MAP,
//   ATK_ROLE_NOTIFICATION,
//   ATK_ROLE_INFO_BAR,
//   ATK_ROLE_LEVEL_BAR,
//   ATK_ROLE_LAST_DEFINED
// } AtkRole;
class SwAccessibleMap;
class SwAccessibleParagraph;

const char * SW_RESSTR(sal_uInt16&){}
class SwStartNodeType{};
class ViewShell{};
class xmlTextWriterPtr{};
class xub_StrLen{};
namespace osl{
  class Mutex{};
  class MutexGuard{
  public:
    MutexGuard(Mutex){}
  };
};
class OString{
public:
  OString(const char *){}
  const char * getStr(){}
  OString & operator += (const char *){}
};
namespace rtl{
  // ::rtl::OUString
  class OUString{
  public:
    OUString(){}
    OUString(int){}
    OUString(const char *){}
    OUString & replaceFirst(OUString, const OUString &) {}
    int lastIndexOf(OUString & s, char replacedChar){}
    int lastIndexOf(char replacedChar){}
    int lastIndexOf(OUString & s){}
    OUString & replaceAt(char iReplace, int pos, OUString replaceStr){}
    OUString & operator += (OUString &){};
    OUString & operator += (char){};
    OUString & operator += (const char * ){};
  };
  OString OUStringToOString(OUString , int ){}
  template <class T, class U> class StaticWithInit{};
}
namespace com{ namespace sun{ namespace star{ namespace uno{
        enum extra{ UNO_QUERY }; 
        template <class T> class Reference{
        public:
          Reference(){}
          Reference(T&){}
          Reference(T*){}
          Reference(Reference<T>, extra){}
          template <class U> Reference(Reference<U>, extra){}
          template <class U> Reference(Reference<U>){}
          template <class U> Reference(U&){}
          template <class U> Reference(U*){}
          T * operator ->  () const {}
          T * operator =  (T *) {}
          template <class U>   Reference<T> & operator =  (U *) {}
          Reference<T> operator =  (Reference<T>) {}
          bool operator ==  (Reference<T> const) const{
            return false;
          }
          bool is() const{};
          T * get() const{}
        };       }}}}
namespace com{ namespace sun{ namespace star{ namespace uno{
class Exception{
        public:
          Exception(
                    const ::rtl::OUString& Message_,
                    const ::com::sun::star::uno::Reference< ::
                    com::sun::star::uno::XInterface >& Context_
                    ){}
          Exception(){}
        };}}}}
namespace com{ namespace sun{ namespace star{ namespace uno{enum types{
          TypeClass_EXCEPTION,
          TypeClass_STRUCT,
          TypeClass_INTERFACE,
};}}}}
namespace com{ namespace sun{ namespace star{ namespace uno{enum some_types{
          typelib_TypeClass_INTERFACE,
};}}}}
namespace com{ namespace sun{ namespace star{ namespace uno{ class Type{
        public :
          Type(com::sun::star::uno::types, rtl::OUString&){}
          template <class T> Type (T){}
          some_types eTypeClass;
          bool operator == (const Type &) const{};
        };       }}}}

namespace com { namespace sun { namespace star { namespace accessibility {
class IllegalAccessibleComponentStateException : public ::com::sun::star::uno::Exception
{
public:
  CPPU_GCC_DLLPRIVATE IllegalAccessibleComponentStateException() {}
  CPPU_GCC_DLLPRIVATE IllegalAccessibleComponentStateException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) {}
  CPPU_GCC_DLLPRIVATE IllegalAccessibleComponentStateException(IllegalAccessibleComponentStateException const &) {}
  CPPU_GCC_DLLPRIVATE ~IllegalAccessibleComponentStateException() {}
  CPPU_GCC_DLLPRIVATE IllegalAccessibleComponentStateException & operator =(IllegalAccessibleComponentStateException const &) {}
};

} } } }

namespace accessibility {struct MutexOwner {mutable ::osl::Mutex maMutex;};}
enum tAccessibleStates{};
class SwClient{};

class SwTOXSortTabBase{};

class SolarMutexGuard{};
const int RTL_TEXTENCODING_UTF8=1;


namespace rtl{template <class T> class Reference{
public:
  Reference(){}
  Reference(T&){}
  Reference(T*){}
  template <class U> Reference(Reference<U>){}
  template <class U> Reference(U&){}
  template <class U> Reference(U*){}
  //aEvent.NewValue <<= xThis;
  T * operator ->  () const {}
  T * get() const{}
  bool is(){}
};
}
namespace rtl{
  class OUStringHash{};
}

namespace com{ namespace sun{namespace star{ namespace lang{
        class XServiceInfo{
        }; }}}}
//namespace com{ namespace sun{namespace star{ namespace lang{class DisposedException{        }; }}}}
namespace com{namespace sun{namespace star{namespace lang{class DisposedException{      public:   template <class T>          DisposedException(                            rtl::OUString,                             T &){}};}}}}


namespace com{ namespace sun{namespace star{ namespace lang{class IndexOutOfBoundsException{ public: template <class T> IndexOutOfBoundsException( rtl::OUString,  T &  ){}};
        class IllegalArgumentException {};
        
}}}}


namespace com{ namespace sun{ namespace star{ namespace uno{ class Any{ public:
          Type * pType;
          Type * pReserved;
          template<class T >Any operator>>=(T) const{}
          operator bool(){return false;}
        };}}}}

namespace com{ namespace sun{ namespace star{ namespace uno{template<class T> class Sequence{public:
          Sequence(int){}
          Sequence(){}
          int getLength(){}
          T operator [] (int x){}
          T * getArray(){}
          void realloc(int){};
};}}}}




using namespace rtl;
class SdrObject{};
class SwCntntFrm;
class SwTxtNode{
public:
  void GetOfst(){}
};

class SwShellTableCrsr;
class SwCrsrShell{
public:
  void ClearMark(){};
  template <class T> bool DOISA(T) const {};
  void KillPams(){};
  template <class T> void SetSelection(T){};
  void ShowCrsr(){};
  bool IsTableMode() const{};
  const SwShellTableCrsr *      GetTableCrsr () const {}
};
class FnForEach_SwNodes{};
class Graphic{};
class GraphicObject{};

class SfxBroadcaster{};
class SwGrfFmtColl{};
class SwHistory{};
class SwPaM;
class SwNode;
class SwCntntNode;
class SwNodeIndex;
class SwDoc;
class SwGrfNode;
class SwNodePtr{};
class SwNodeRange{};
class SwOLENode;
class SwSectionNode;
class SwTableNode;
class SwTxtNode;
namespace svt{
  class EmbeddedObjectRef{};
};
class SwSectionFmt{};
class SwSectionData{};
class SwTOXBase;
class SwStartNode;
class SwTxtFmtColl;
/*fwd*/class FnForEach_SwNodes;
/*fwd*/class Graphic;
/*fwd*/class GraphicObject;
/*fwd*/class SdrLayerID;
/*fwd*/class SfxBroadcaster;
/*fwd*/class SwAttrSet;
/*fwd*/class SwGrfFmtColl;
/*fwd*/class SwHistory;
/*fwd*/class SwPaM;
/*fwd*/class SwPosition;
/*fwd*/class SwSectionData;
/*fwd*/class SwSectionFmt;
/*fwd*/class SwTOXBase;
/*fwd*/class SwTableBoxFmt;
/*fwd*/class SwTableFmt;
/*fwd*/class SwTableLine;
/*fwd*/class SwTableLineFmt;
/*fwd*/class SwTblToTxtSaves;
/*fwd*/class SwTxtFmtColl;
/*fwd*/class SwUndoTblToTxt;
/*fwd*/class SwUndoTxtToTbl;
/*fwd*/class TableRanges_t;
/*fwd*/class SfxItemSet;
/*fwd*/class SwIndex;

class SwOutlineNodes{};
class Foo{
public:
  bool operator == ( Foo &){}
};
class SwPaM{
public:
  SwPaM(SwPosition&){};
  Foo * GetMark(){};
  Foo * GetPoint(){}
  bool HasMark(){}
};
class SwPosition{
public:
  template <class T> SwPosition(const T&, SwIndex&){}
  //  SwPosition (const SwNodeIndex &rNode, const SwIndex &rCntnt){}
  SwPosition (const SwNodeIndex &rNode){}
  SwPosition (const SwNode &rNode){}
  SwPosition (SwCntntNode &rNode, const xub_StrLen nOffset){}
  SwPosition (const SwPosition &){}
  SwPosition &  operator= (const SwPosition &){}
  SwDoc *       GetDoc () const{}
  bool  operator< (const SwPosition &) const{}
  bool  operator> (const SwPosition &) const{}
  bool  operator<= (const SwPosition &) const{}
  bool  operator>= (const SwPosition &) const{}
  bool  operator== (const SwPosition &) const{}
  bool  operator!= (const SwPosition &) const{}
};
class SwNodes{
public:
  ~SwNodes(){}
  SwNode *      DocumentSectionEndNode(SwNode *pNode) const{};
  void  dumpAsXml (xmlTextWriterPtr writer){};
  SwNode *      DocumentSectionStartNode(SwNode *pNode) const {};
  SwCntntNode *  GoNext(SwNodeIndex *) const {};
  SwCntntNode *         GoNextSection(SwNodeIndex *, int bSkipHidden, int bSkipProtect) const{}
  SwCntntNode *         GoPrevSection(SwNodeIndex *, int bSkipHidden, int bSkipProtect) const{}
  SwCntntNode *         GoPrevious(SwNodeIndex *) const{}
  SwDoc *       GetDoc(){}
  SwGrfNode *   MakeGrfNode (const SwNodeIndex &rWhere, const GraphicObject &rGrfObj, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwGrfNode *   MakeGrfNode (const SwNodeIndex &rWhere,
                             const ::rtl::OUString &rGrfName,
                             const ::rtl::OUString &rFltName, const Graphic *pGraphic, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr, sal_Bool bDelayed=sal_False){}
  SwNode &      GetEndOfAutotext () const{}
  SwNode &      GetEndOfContent () const{}
  SwNode &      GetEndOfExtras () const{}
  SwNode &      GetEndOfInserts () const{}
  SwNode &      GetEndOfPostIts () const{}
  SwNode &      GetEndOfRedlines () const{}
  SwNode *      FindPrvNxtFrmNode (SwNodeIndex &rFrmIdx, const SwNode *pEnd) const{}
  SwNode *      GoNextWithFrm (SwNodeIndex *) const{}
  SwNode *      GoPreviousWithFrm (SwNodeIndex *) const{}
  SwNodePtr     operator[] (sal_uLong n) const{}
  SwNodeRange *         ExpandRangeForTableBox (const SwNodeRange &rRange){}
  SwOLENode *   MakeOLENode (const SwNodeIndex &rWhere, const OUString &rName, sal_Int64 nAspect, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwOLENode *   MakeOLENode (const SwNodeIndex &rWhere, const svt::EmbeddedObjectRef &, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwSectionNode *       InsertTextSection (SwNodeIndex const &rNdIdx, SwSectionFmt &rSectionFmt, SwSectionData const &, SwTOXBase const *const pTOXBase, SwNodeIndex const *const pEnde, bool const bInsAtStart=true, bool const bCreateFrms=true){}
  SwStartNode *         MakeEmptySection (const SwNodeIndex &rIdx, SwStartNodeType){}
  SwStartNode *         MakeTextSection (const SwNodeIndex &rWhere, SwStartNodeType eSttNdTyp, SwTxtFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwTableNode *         InsertTable (const SwNodeIndex &rNdIdx, sal_uInt16 nBoxes, SwTxtFmtColl *pCntntTxtColl, sal_uInt16 nLines, sal_uInt16 nRepeat, SwTxtFmtColl *pHeadlineTxtColl, const SwAttrSet *pAttrSet){}
  SwTableNode *         SplitTable (const SwNodeIndex &rPos, sal_Bool bAfter, sal_Bool bCalcNewSize=sal_False){}
  SwTableNode *         TextToTable (const SwNodeRange &rRange, sal_Unicode cCh, SwTableFmt *pTblFmt, SwTableLineFmt *pLineFmt, SwTableBoxFmt *pBoxFmt, SwTxtFmtColl *pTxtColl, SwUndoTxtToTbl *pUndo){}
  SwTableNode *         TextToTable (const TableRanges_t &rTableNodes, SwTableFmt *pTblFmt, SwTableLineFmt *pLineFmt, SwTableBoxFmt *pBoxFmt, SwTxtFmtColl *pTxtColl){}
  SwTableNode *         UndoTableToText (sal_uLong nStt, sal_uLong nEnd, const SwTblToTxtSaves &rSavedData){}
  SwTxtNode *   MakeTxtNode (const SwNodeIndex &rWhere, SwTxtFmtColl *pColl, SwAttrSet *pAutoAttr){}
  const SwDoc *         GetDoc () const{}
  const SwOutlineNodes &        GetOutLineNds () const{}
  sal_Bool      CheckNodesRange (const SwNodeIndex &rStt, const SwNodeIndex &rEnd) const{}
  sal_Bool      InsBoxen (SwTableNode *, SwTableLine *, SwTableBoxFmt *, SwTxtFmtColl *, const SfxItemSet *pAutoAttr, sal_uInt16 nInsPos, sal_uInt16 nCnt=1){}
  sal_Bool      IsDocNodes () const{}
  sal_Bool      MergeTable (const SwNodeIndex &rPos, sal_Bool bWithPrev, sal_uInt16 nMode, SwHistory *pHistory){}
  sal_Bool      TableToText (const SwNodeRange &rRange, sal_Unicode cCh, SwUndoTblToTxt *){}
  sal_Bool      _MoveNodes (const SwNodeRange &, SwNodes &rNodes, const SwNodeIndex &, sal_Bool bNewFrms){}
  sal_uInt16    GetSectionLevel (const SwNodeIndex &rIndex) const{}
  sal_uLong     Count () const{}
  void  Delete (const SwNodeIndex &rPos, sal_uLong nNodes){}
  void  ForEach (FnForEach_SwNodes fnForEach, void *pArgs){}
  void  ForEach (const SwNodeIndex &rStart, const SwNodeIndex &rEnd, FnForEach_SwNodes fnForEach, void *pArgs){}
  void  ForEach (sal_uLong nStt, sal_uLong nEnd, FnForEach_SwNodes fnForEach, void *pArgs){}
  void  GoEndOfSection (SwNodeIndex *) const{}
  void  GoStartOfSection (SwNodeIndex *) const{}
  void  MoveRange (SwPaM &, SwPosition &, SwNodes &rNodes){}
  void  SectionDown (SwNodeRange *pRange, SwStartNodeType){}
  void  SectionUp (SwNodeRange *){}
  void  UpdateOutlineNode (SwNode &rNd){}
  void  _Copy (const SwNodeRange &rRg, const SwNodeIndex &rInsPos, sal_Bool bNewFrms) const{}
};
class SwNodeIndex{
  SwNodeIndex (SwNodes &rNds, sal_uLong nIdx){}
  SwNodeIndex (const SwNode &, long nDiff){}
  SwNodeIndex (const SwNodeIndex &, long nDiff){}
  ~SwNodeIndex (){}
  SwNode &      GetNode () const{}
  SwNodeIndex &         Assign (SwNodes &rNds, sal_uLong){}
  SwNodeIndex &         Assign (const SwNode &rNd, long nOffset){}
  SwNodeIndex &         operator= (const SwNode &){}
  SwNodeIndex &         operator= (const SwNodeIndex &){}
  SwNodeIndex &         operator= (sal_uLong){}
  SwNodes &     GetNodes (){}
  const SwNodes &       GetNodes () const{}
  sal_Bool      operator!= (const SwNodeIndex &) const{}
  sal_Bool      operator!= (sal_uLong nWert) const{}
  sal_Bool      operator< (const SwNodeIndex &) const{}
  sal_Bool      operator< (sal_uLong nWert) const{}
  sal_Bool      operator<= (const SwNodeIndex &) const{}
  sal_Bool      operator<= (sal_uLong nWert) const{}
  sal_Bool      operator== (const SwNodeIndex &) const{}
  sal_Bool      operator== (sal_uLong nWert) const{}
  sal_Bool      operator> (const SwNodeIndex &) const{}
  sal_Bool      operator> (sal_uLong nWert) const{}
  sal_Bool      operator>= (const SwNodeIndex &) const{}
  sal_Bool      operator>= (sal_uLong nWert) const{}
  sal_uLong     GetIndex () const{}
  sal_uLong     operator++ (){}
  sal_uLong     operator++ (int){}
  sal_uLong     operator+= (const SwNodeIndex &){}
  sal_uLong     operator+= (sal_uLong){}
  sal_uLong     operator-- (){}
  sal_uLong     operator-- (int){}
  sal_uLong     operator-= (const SwNodeIndex &){}
  sal_uLong     operator-= (sal_uLong){}
};


class SwTOXBase{};
class SwTableBoxFmt{};
class SwTableFmt{};
class SwTableLine{};
class SwTableLineFmt{};
class SwTblToTxtSaves{};
class SwTxtFmtColl{};
class SwUndoTblToTxt{};
class SwUndoTxtToTbl{};
class TableRanges_t{};

class IDocumentContentOperations{};
class IDocumentDeviceAccess{};
class IDocumentDrawModelAccess{};
class IDocumentFieldsAccess{};
class IDocumentLayoutAccess{};
class IDocumentLineNumberAccess{};
class IDocumentLinksAdministration{};
class IDocumentListItems{};
class IDocumentMarkAccess{};
class IDocumentRedlineAccess{};
class IDocumentSettingAccess{};
class IDocumentStylePoolAccess{};
class IStyleAccess{};

class SW_DLLPRIVATE{};
class SdrMarkList{};
class SdrModel{};
class SfxHint{};
class SfxItemSet{};
class FakeColor{
public:
  sal_uInt32 GetColor() const{}
};
class SvxBrushItem{
public:
  const FakeColor & GetColor() const{}
};
class SwCntntNode{};
class SwCursor{};
class SwDepend{};
class SwDoc{};
class SwEndNode{};
class SwFmtAnchor{};
class SwFmtCntnt{};
class SwFmtCol{};
class SwFmtINetFmt{};
class SwTblBoxValue{
public:
  SwTblBoxValue (double){}
  double GetValue(){}
};
class SwTblBoxFormula{
public:
  OUString & GetFormula() const{}
};
class SwAttrSet{
public:
  SwDoc *       GetDoc (){}
  SwHeaderAndFooterEatSpacingItem &     GetHeaderAndFooterEatSpacing (sal_Bool=sal_True) const{}
  const SfxBoolItem &   GetWritingDirection (sal_Bool=sal_True) const{}
  const SvxAdjustItem &         GetAdjust (sal_Bool=sal_True) const{}
  const SvxAutoKernItem &       GetAutoKern (sal_Bool=sal_True) const{}
  const SvxBlinkItem &  GetBlink (sal_Bool=sal_True) const{}
  const SvxBoxItem &    GetBox (sal_Bool=sal_True) const{}
  const SvxBoxItem &    GetCharBorder (sal_Bool=sal_True) const{}
  const SvxBrushItem &  GetBackground (sal_Bool=sal_True) const{}
  const SvxBrushItem &  GetChrBackground (sal_Bool=sal_True) const{}
  const SvxBrushItem &  GetChrHighlight (sal_Bool=sal_True) const{}
  const SvxCaseMapItem &        GetCaseMap (sal_Bool=sal_True) const{}
  const SvxCharHiddenItem &     GetCharHidden (sal_Bool=sal_True) const{}
  const SvxCharReliefItem &     GetCharRelief (sal_Bool=sal_True) const{}
  const SvxCharRotateItem &     GetCharRotate (sal_Bool=sal_True) const{}
  const SvxCharScaleWidthItem &         GetCharScaleW (sal_Bool=sal_True) const{}
  const SvxCharSetColorItem &   GetCharSetColor (sal_Bool=sal_True) const{}
  const SvxColorItem &  GetColor (sal_Bool=sal_True) const{}
  const SvxContourItem &        GetContour (sal_Bool=sal_True) const{}
  const SvxCrossedOutItem &     GetCrossedOut (sal_Bool=sal_True) const{}
  const SvxEmphasisMarkItem &   GetEmphasisMark (sal_Bool=sal_True) const{}
  const SvxEscapementItem &     GetEscapement (sal_Bool=sal_True) const{}
  const SvxFmtBreakItem &       GetBreak (sal_Bool=sal_True) const{}
  const SvxFmtKeepItem &        GetKeep (sal_Bool=sal_True) const{}
  const SvxFmtSplitItem &       GetSplit (sal_Bool=sal_True) const{}
  const SvxFontHeightItem &     GetCJKSize (sal_Bool=sal_True) const{}
  const SvxFontHeightItem &     GetCTLSize (sal_Bool=sal_True) const{}
  const SvxFontHeightItem &     GetSize (sal_Bool=sal_True) const{}
  const SvxFontItem &   GetCJKFont (sal_Bool=sal_True) const{}
  const SvxFontItem &   GetCTLFont (sal_Bool=sal_True) const{}
  const SvxFontItem &   GetFont (sal_Bool=sal_True) const{}
  const SvxForbiddenRuleItem &  GetForbiddenRule (sal_Bool=sal_True) const{}
  const SvxFrameDirectionItem &         GetFrmDir (sal_Bool=sal_True) const{}
  const SvxHangingPunctuationItem &     GetHangingPunctuation (sal_Bool=sal_True) const{}
  const SvxHyphenZoneItem &     GetHyphenZone (sal_Bool=sal_True) const{}
  const SvxKerningItem &        GetKerning (sal_Bool=sal_True) const{}
  const SvxLRSpaceItem &        GetLRSpace (sal_Bool=sal_True) const{}
  const SvxLanguageItem &       GetCJKLanguage (sal_Bool=sal_True) const{}
  const SvxLanguageItem &       GetCTLLanguage (sal_Bool=sal_True) const{}
  const SvxLanguageItem &       GetLanguage (sal_Bool=sal_True) const{}
  const SvxLineSpacingItem &    GetLineSpacing (sal_Bool=sal_True) const{}
  const SvxMacroItem &  GetMacro (sal_Bool=sal_True) const{}
  const SvxNoHyphenItem &       GetNoHyphenHere (sal_Bool=sal_True) const{}
  const SvxOpaqueItem &         GetOpaque (sal_Bool=sal_True) const{}
  const SvxOrphansItem &        GetOrphans (sal_Bool=sal_True) const{}
  const SvxOverlineItem &       GetOverline (sal_Bool=sal_True) const{}
  const SvxPaperBinItem &       GetPaperBin (sal_Bool=sal_True) const{}
  const SvxParaGridItem &       GetParaGrid (sal_Bool=sal_True) const{}
  const SvxParaVertAlignItem &  GetParaVertAlign (sal_Bool=sal_True) const{}
  const SvxPostureItem &        GetCJKPosture (sal_Bool=sal_True) const{}
  const SvxPostureItem &        GetCTLPosture (sal_Bool=sal_True) const{}
  const SvxPostureItem &        GetPosture (sal_Bool=sal_True) const{}
  const SvxPrintItem &  GetPrint (sal_Bool=sal_True) const{}
  const SvxPropSizeItem &       GetPropSize (sal_Bool=sal_True) const{}
  const SvxProtectItem &        GetProtect (sal_Bool=sal_True) const{}
  const SvxScriptSpaceItem &    GetScriptSpace (sal_Bool=sal_True) const{}
  const SvxShadowItem &         GetCharShadow (sal_Bool=sal_True) const{}
  const SvxShadowItem &         GetShadow (sal_Bool=sal_True) const{}
  const SvxShadowedItem &       GetShadowed (sal_Bool=sal_True) const{}
  const SvxTabStopItem &        GetTabStops (sal_Bool=sal_True) const{}
  const SvxTwoLinesItem &       Get2Lines (sal_Bool=sal_True) const{}
  const SvxULSpaceItem &        GetULSpace (sal_Bool=sal_True) const{}
  const SvxUnderlineItem &      GetUnderline (sal_Bool=sal_True) const{}
  const SvxWeightItem &         GetCJKWeight (sal_Bool=sal_True) const{}
  const SvxWeightItem &         GetCTLWeight (sal_Bool=sal_True) const{}
  const SvxWeightItem &         GetWeight (sal_Bool=sal_True) const{}
  const SvxWidowsItem &         GetWidows (sal_Bool=sal_True) const{}
  const SvxWordLineModeItem &   GetWordLineMode (sal_Bool=sal_True) const{}
  const SwChannelBGrf &         GetChannelBGrf (sal_Bool=sal_True) const{}
  const SwChannelGGrf &         GetChannelGGrf (sal_Bool=sal_True) const{}
  const SwChannelRGrf &         GetChannelRGrf (sal_Bool=sal_True) const{}
  const SwContrastGrf &         GetContrastGrf (sal_Bool=sal_True) const{}
  const SwCropGrf &     GetCropGrf (sal_Bool=sal_True) const{}
  const SwDoc *         GetDoc () const{}
  const SwDrawModeGrf &         GetDrawModeGrf (sal_Bool=sal_True) const{}
  const SwFmtAnchor &   GetAnchor (sal_Bool=sal_True) const{}
  const SwFmtChain &    GetChain (sal_Bool=sal_True) const{}
  const SwFmtCntnt &    GetCntnt (sal_Bool=sal_True) const{}
  const SwFmtCol &      GetCol (sal_Bool=sal_True) const{}
  const SwFmtDrop &     GetDrop (sal_Bool=sal_True) const{}
  const SwFmtEditInReadonly &   GetEditInReadonly (sal_Bool=sal_True) const{}
  const SwFmtEndAtTxtEnd &      GetEndAtTxtEnd (sal_Bool=sal_True) const{}
  const SwFmtFillOrder &        GetFillOrder (sal_Bool=sal_True) const{}
  const SwFmtFollowTextFlow &   GetFollowTextFlow (sal_Bool=sal_True) const{}
  const SwFmtFooter &   GetFooter (sal_Bool=sal_True) const{}
  const SwFmtFrmSize &  GetFrmSize (sal_Bool=sal_True) const{}
  const SwFmtFtnAtTxtEnd &      GetFtnAtTxtEnd (sal_Bool=sal_True) const{}
  const SwFmtHeader &   GetHeader (sal_Bool=sal_True) const{}
  const SwFmtHoriOrient &       GetHoriOrient (sal_Bool=sal_True) const{}
  const SwFmtLayoutSplit &      GetLayoutSplit (sal_Bool=sal_True) const{}
  const SwFmtLineNumber &       GetLineNumber (sal_Bool=sal_True) const{}
  const SwFmtNoBalancedColumns &        GetBalancedColumns (sal_Bool=sal_True) const{}
  const SwFmtPageDesc &         GetPageDesc (sal_Bool=sal_True) const{}
  const SwFmtRowSplit &         GetRowSplit (sal_Bool=sal_True) const{}
  const SwFmtSurround &         GetSurround (sal_Bool=sal_True) const{}
  const SwFmtURL &      GetURL (sal_Bool=sal_True) const{}
  const SwFmtVertOrient &       GetVertOrient (sal_Bool=sal_True) const{}
  const SwFmtWrapInfluenceOnObjPos &    GetWrapInfluenceOnObjPos (sal_Bool=sal_True) const{}
  const SwGammaGrf &    GetGammaGrf (sal_Bool=sal_True) const{}
  const SwInvertGrf &   GetInvertGrf (sal_Bool=sal_True) const{}
  const SwLuminanceGrf &        GetLuminanceGrf (sal_Bool=sal_True) const{}
  const SwMirrorGrf &   GetMirrorGrf (sal_Bool=sal_True) const{}
  const SwNumRuleItem &         GetNumRule (sal_Bool=sal_True) const{}
  const SwParaConnectBorderItem &       GetParaConnectBorder (sal_Bool=sal_True) const{}
  const SwRegisterItem &        GetRegister (sal_Bool=sal_True) const{}
  const SwRotationGrf &         GetRotationGrf (sal_Bool=sal_True) const{}
  const SwTblBoxFormula &       GetTblBoxFormula (sal_Bool=sal_True) const{}
  const SwTblBoxNumFormat &     GetTblBoxNumFmt (sal_Bool=sal_True) const{}
  const SwTblBoxValue &         GetTblBoxValue (sal_Bool=sal_True) const{}
  const SwTextGridItem &        GetTextGrid (sal_Bool=sal_True) const{}
  const SwTransparencyGrf &     GetTransparencyGrf (sal_Bool=sal_True) const{}
  const XFillGradientItem &     GetFillGradient (sal_Bool=sal_True) const{}
  const XFillStyleItem &        GetFillStyle (sal_Bool=sal_True) const{}
};
class SwFrmFmt{
public:
  void SetFmtAttr( SwTblBoxValue & aValue ){}
  SwTblBoxValue & GetTblBoxValue(){};
  const SwTblBoxFormula& GetTblBoxFormula(){}
  SwAttrSet * GetAttrSet() const{};
};
class SwGrfNode{};
class SwIndex{
public:
  template<class T> SwIndex(T*, SwIndex&){}
};
class SwNoTxtNode{};
class SwNodes;
class SwOLENode{};
class SwPageDesc{};
class SwSection{};
class SwSectionNode{};
class SwSortedObjs{};
class SwStartNode{};
class SwTableBox{
public:
  const OUString& GetName() const{ }
  SwFrmFmt*  GetFrmFmt(){};
  SwTblBoxValue * GetTblBoxValue(){}
};
class SwTableNode{};
class SwTxtFtn{};
class SwViewOption{};
class SwpHints{};

//::accessibility::IAccessibleViewForwarderListener::VISIBLE_AREA,


class SwNode{
public:
  IDocumentContentOperations *  getIDocumentContentOperations (){}
  IDocumentFieldsAccess *       getIDocumentFieldsAccess (){}
  IDocumentLayoutAccess *       getIDocumentLayoutAccess (){}
  IDocumentLinksAdministration *        getIDocumentLinksAdministration (){}
  IDocumentLinksAdministration *        getIDocumentLinksAdministration () const{}
  IDocumentListItems &  getIDocumentListItems (){}
  IStyleAccess &        getIDocumentStyleAccess (){}
  SwCntntNode *         GetCntntNode (){}
  SwDoc *       GetDoc (){}
  SwEndNode *   EndOfSectionNode (){}
  SwEndNode *   GetEndNode (){}
  SwFrmFmt *    GetFlyFmt () const{}
  SwGrfNode *   GetGrfNode (){}
  SwNoTxtNode *         GetNoTxtNode (){};
  SwNodes &     GetNodes (){};
  SwOLENode *   GetOLENode (){};
  SwSectionNode *       FindSectionNode (){};
  SwSectionNode *       GetSectionNode (){};
  SwStartNode *         FindSttNodeByType (SwStartNodeType eTyp){};
  SwStartNode *         GetStartNode (){};
  SwStartNode *         StartOfSectionNode (){};
  SwTableBox *  GetTblBox () const{};
  SwTableNode *         FindTableNode (){};
  SwTableNode *         GetTableNode (){}
  SwTxtNode *   GetTxtNode (){}
  bool  IsIgnoreDontExpand () const{}
  bool  IsInProtectSect () const{}
  bool  IsSetNumLSpace () const{}
  const IDocumentDeviceAccess *         getIDocumentDeviceAccess () const{}
  const IDocumentDrawModelAccess *      getIDocumentDrawModelAccess () const{}
  const IDocumentFieldsAccess *         getIDocumentFieldsAccess () const{}
  const IDocumentLayoutAccess *         getIDocumentLayoutAccess () const{}
  const IDocumentLineNumberAccess *     getIDocumentLineNumberAccess () const{}
  const IDocumentMarkAccess *   getIDocumentMarkAccess () const{}
  const IDocumentRedlineAccess *        getIDocumentRedlineAccess () const{}
  const IDocumentSettingAccess *        getIDocumentSettingAccess () const{}
  const IDocumentStylePoolAccess *      getIDocumentStylePoolAccess () const{}
  const SwCntntNode *   GetCntntNode () const{}
  const SwDoc *         GetDoc () const{}
  const SwEndNode *     EndOfSectionNode () const{}
  const SwEndNode *     GetEndNode () const{}
  const SwGrfNode *     GetGrfNode () const{}
  const SwNoTxtNode *   GetNoTxtNode () const{}
  const SwNodes &       GetNodes () const{}
  const SwOLENode *     GetOLENode () const{}
  const SwPageDesc *    FindPageDesc (sal_Bool bCalcLay, sal_uInt32 *pPgDescNdIdx) const{}
  const SwSectionNode *         FindSectionNode () const{}
  const SwSectionNode *         GetSectionNode () const{}
  const SwStartNode *   FindFlyStartNode () const{}
  const SwStartNode *   FindFooterStartNode () const{}
  const SwStartNode *   FindFootnoteStartNode () const{}
  const SwStartNode *   FindHeaderStartNode () const{}
  const SwStartNode *   FindSttNodeByType (SwStartNodeType eTyp) const{}
  const SwStartNode *   FindTableBoxStartNode () const{}
  const SwStartNode *   GetStartNode () const{}
  const SwStartNode *   StartOfSectionNode () const{}
  const SwTableNode *   FindTableNode () const{}
  const SwTableNode *   GetTableNode () const{}
  const SwTxtNode *     FindOutlineNodeOfLevel (sal_uInt8 nLvl) const{}
  const SwTxtNode *     GetTxtNode () const{}
  long  GetSerial () const{}
  sal_Bool      IsCntntNode () const{}
  sal_Bool      IsEndNode () const{}
  sal_Bool      IsGrfNode () const{}
  sal_Bool      IsInRedlines () const{}
  sal_Bool      IsInVisibleArea (ViewShell *pSh) const{}
  sal_Bool      IsNoTxtNode () const{}
  sal_Bool      IsOLENode () const{}
  sal_Bool      IsProtect () const{}
  sal_Bool      IsSectionNode () const{}
  sal_Bool      IsStartNode () const{}
  sal_Bool      IsTableNode () const{}
  sal_Bool      IsTxtNode () const{}
  sal_uInt16    GetSectionLevel () const{}
  sal_uInt8     GetAutoFmtLvl () const{}
  sal_uInt8     GetNodeType () const{}
  sal_uInt8     HasPrevNextLayNode () const{}
  sal_uLong     EndOfSectionIndex () const{}
  sal_uLong     GetIndex () const{}
  sal_uLong     StartOfSectionIndex () const{}
  ~SwNode () {}
  virtual void  dumpAsXml (xmlTextWriterPtr writer){}
  void  SetAutoFmtLvl (sal_uInt8 nVal){}
  void  SetIgnoreDontExpand (bool bNew){}
  void  SetNumLSpace (bool bFlag){}
};
class SwCntntNode;
class SwNodeIndex;

class SwFEShell : public SwCrsrShell{
public:
  void FinishOLEObj(){}
  bool IsFrmSelected() const{}
  bool IsObjSelected()const{}
  template <class T> void SelectObj(T&, int){}
  template <class T> void SelectObj(T&, int, SdrObject *&){}
};
class AFrm{
public:
  bool IsEmpty() const{}
};
class SwTabFrm;
class SwFrm{
public :
  SwAttrSet * GetAttrSet() const{};
  bool IsRootFrm() const{};
  bool IsLayoutFrm() const{};
  bool IsTxtFrm() const{};
  bool IsPageFrm() const{};
  bool IsEmptyPage() const{};
  bool IsFlyFrm() const{};
  bool IsCntntFrm() const{};
  const SwCntntFrm * ContainsCntnt() const{};
  int GetPhyPageNum() const{};
  const SdrObject * GetVirtDrawObj() const{};
  const AFrm & Frm() const{};
  bool IsCellFrm() const{};
  bool IsTabFrm() const{};
  bool IsFollow() const{};
  const SwTabFrm * GetFollow() const{};
  const SwTabFrm * FindMaster() const{};
};
class SwTabFrm : public SwFrm{};
class SwCellFrm : public SwFrm{
public:
  SwTableBox * GetTabBox() const{};
};
class SwPageFrm  : public SwFrm{};
class SwFlyFrm   : public SwFrm{};
class SwCntntFrm : public SwFrm{};
class SwLayoutFrm : public SwFrm{};
class SwTxtFrm : public SwCntntFrm{
public:
  SwIndex & GetOfst() const {}
  const SwTxtNode * GetTxtNode() const {}
};

namespace com{namespace sun{namespace star{ namespace lang{class EventObject{
public:
  com::sun::star::uno::Reference<
  com::sun::star::uno::XInterface> Source;
  //     Reference< XInterface > Source;
  template <class T> EventObject(T){}
  EventObject( ){}
};     }}}}
namespace com{ namespace sun{ namespace star{ namespace document{
class EventObject{};
      }}}}
namespace com{ namespace sun{ namespace star{ namespace document{class XEventListener{};   }}}}
namespace com{ namespace sun{ namespace star{ namespace lang{class XEventListener{};   }}}}
namespace com{ namespace sun{ namespace star{ namespace awt{
class KeyStroke{};
      }}}}
namespace com{ namespace sun{ namespace star{ namespace awt{
class XFocusListener{};
        // ::com::sun::star::awt::Point
      }}}}

namespace com{ namespace sun{ namespace star{ namespace awt{
class Size{
        public:
          Size(){}
          Size(int x, int y){}
        };
      }; }}}
namespace com{ namespace sun{ namespace star{ namespace uno{class XAggregation{};}}}}

namespace com{ namespace sun{ namespace star{ namespace uno{
        template <class T> class WeakReference  : public Reference<T>{
        public:
          WeakReference<T> operator = (Reference<T>){}
        };       }}}}

namespace com{namespace sun{   namespace star{      namespace lang{class Locale{};      }}}}
namespace com{ namespace sun{ namespace star{ namespace awt{
class Point{
        public:
          Point(){}
          Point(const int&, const int&){}
          int X;
          int Y;
          void setX(int X){}
          void setY(int X){}
          int getX(){}
          int getY(){}
        };  }}}}
namespace com{ namespace sun{ namespace star{ namespace awt{
        // com::sun::star::awt::Rectangle
class Rectangle : public Point{
        public:
          Rectangle(int, int, int, int){}
          Rectangle(){}
          int Width;
          int Height;
          int Left() const {}
          int Top() const {}
          Point TopLeft() const{}
          void Move(int x, int y) {}
          int GetWidth() const {}
          int GetHeight() const {}
        };  }}}}
class SwRect : public com::sun::star::awt::Rectangle
{
public:
  bool operator ==  (SwRect const) const{}
  bool operator !=  (SwRect const) const{}
  void SSize(com::sun::star::awt::Size x) {}
  template <class T> bool IsOver(T) const ;
  SwRect SVRect() const {}
  int GetPreviewPageSize( int nPageNum ) {}
  bool IsEmpty() const {}
};
namespace cppu{template <class T> class UnoType{
  public :
    static const com::sun::star::uno::Type& get(){}
    //    static const com::sun::star::uno::Type& (*get)(){
    //      return doget;
    //}
  };
}
using namespace ::com::sun::star::awt;
namespace cppu{  template <class T,class T2,class T3,class T4> class PartialWeakComponentImplHelper4: public T2,public T3, public T4 {
  public:
    void dispose() {}
  };}
namespace rtl{
  class ID{
  public:
    ::com::sun::star::uno::Sequence< sal_Int8 > getSeq(){}
  };}
namespace rtl{template <class T,class U> class Static{
public:
  static ID get (){}
};
};
class SwSelBoxes{
public:
  bool find(SwTableBox *) const {}
  bool end() const {}
};
class SwShellTableCrsr{
public:
  SwShellTableCrsr (const SwCrsrShell &rCrsrSh, const SwPosition &rPos){}
  SwShellTableCrsr (const SwCrsrShell &rCrsrSh, const SwPosition &rMkPos,
                    const ::com::sun::star::awt::Point   &rMkPt, const SwPosition &rPtPos, const ::com::sun::star::awt::Point  &rPtPt){}
  virtual       ~SwShellTableCrsr (){}
  virtual void  FillRects (){}
  sal_Bool      IsInside (const ::com::sun::star::awt::Point  &rPt) const{}
  virtual void  SetMark (){} ;
  virtual SwCursor *    Create (SwPaM *pRing) const{};
  virtual short         MaxReplaceArived (){};
  virtual void  SaveTblBoxCntnt (const SwPosition *pPos){}
  virtual sal_Bool      IsAtValidPos (sal_Bool, ::com::sun::star::awt::Point ) const{};
  SwSelBoxes const& GetSelectedBoxes() const {}
  //  bool find(SwTableBox *) const {}
  //  bool end() const {}
};
namespace cppu{
  template <class T, class U> bool supportsService(T,U){};
}
namespace cppu{
  template <
    class T,
    class T2,
    class T3,
    class T4
    >
  class ImplHelper4
    : public T, public T2, public T3, public T4
 {};
} 
namespace cppu{ 
 template <class T> class WeakImplHelper1 : public T{};
}
namespace cppu{
  template <class T,
    class T2,
    class T3,
    class T4,
    class T5
            >
  class WeakImplHelper5 :
    public T,
    public T2,
    public T3,
    public T4,
    public T5
 {};
}
template <class T,class U> int rtl_str_compare(T, U){}
namespace com{namespace sun{namespace star{ namespace lang{class XComponent{};      }}}}
namespace com{namespace sun{namespace star{ namespace lang{class XTypeProvider{};      }}}}
namespace com{namespace sun{namespace star{ namespace lang{class XUnoTunnel{};      }}}}

namespace com{namespace sun{namespace star{class XEventListener{};}}}
namespace com{namespace sun{namespace star{class IllegalArgumentException{};}}}
class ChildrenManager{};
using namespace com::sun::star::uno;
namespace com{namespace sun{namespace star{namespace accessibility{class AccessibleTableModelChangeType{
        public:
          enum X{
            DELETE = (sal_Int16)2,
            INSERT = (sal_Int16)1,
            UPDATE = (sal_Int16)3,
          };
        };
      }}}}


namespace com{ namespace sun{ namespace star{ namespace uno{
class XInterface{
public :
  template <class T> Any queryInterface(T){}
  virtual void release(){}
  virtual void acquire(){}
  uno::Sequence< uno::Type > getTypes(){}
};}}}}

namespace com{ namespace sun{ namespace star{ namespace accessibility{ 
struct AccessibleEventObject: public ::com::sun::star::lang::EventObject{
  AccessibleEventObject()  {}
  AccessibleEventObject(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& EventId_, const ::com::sun::star::uno::Any& NewValue_, const ::com::sun::star::uno::Any& OldValue_)  {}
  ::sal_Int16 EventId;
  ::com::sun::star::uno::Any NewValue;
  ::com::sun::star::uno::Any OldValue;
};      }}}}

namespace com{ namespace sun{ namespace star{ namespace accessibility{ class XAccessibleEventListener : public ::com::sun::star::lang::XEventListener{
public:
  virtual void notifyEvent( const ::com::sun::star::accessibility::AccessibleEventObject& aEvent ) = 0;

protected:
  ~XAccessibleEventListener() throw (){}
};}}}}
namespace com{ namespace sun{ namespace star{ namespace accessibility{
class XAccessibleStateSet : public ::com::sun::star::uno::XInterface
       {
        public:
         virtual ::sal_Bool isEmpty() {};
         virtual ::sal_Bool contains( ::sal_Int16 aState ) {};
         virtual ::sal_Bool containsAll( const ::com::sun::star::uno::Sequence< ::sal_Int16 >& aStateSet ) {};
         virtual ::com::sun::star::uno::Sequence< ::sal_Int16 > getStates() {};
         static  ::com::sun::star::uno::Type const & static_type(void * = 0) {};
        protected:
          ~XAccessibleStateSet() throw (){}
        };      }}}}
namespace com{ namespace sun{ namespace star{ namespace accessibility{
        struct AccessibleRelation{
          AccessibleRelation() {};
          AccessibleRelation(const sal_Int16& RelationType_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >& TargetSet_) {}
          sal_Int16 RelationType;
          ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > > TargetSet;
        };      }}}}
namespace com{ namespace sun{ namespace star{ namespace accessibility{
class XAccessibleRelationSet : public ::com::sun::star::uno::XInterface
       {
        public:
          virtual ::sal_Int32 getRelationCount() = 0;
          virtual ::com::sun::star::accessibility::AccessibleRelation getRelation( ::sal_Int32 nIndex ) = 0;
          virtual ::sal_Bool containsRelation( ::sal_Int16 aRelationType ) = 0;
          virtual ::com::sun::star::accessibility::AccessibleRelation getRelationByType( ::sal_Int16 aRelationType ) = 0;
         static  ::com::sun::star::uno::Type const & static_type(void * = 0) {}
        protected:
          ~XAccessibleRelationSet() throw (){}
        }; }}}}

namespace com { namespace sun { namespace star { namespace accessibility {
        class XAccessibleContext;
class  XAccessible : public ::com::sun::star::uno::XInterface
{
public:
  uno::Sequence< uno::Type > getTypes(){} 
  // Methods
  virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleContext > SAL_CALL getAccessibleContext() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
  static  ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0) {}
protected:
  ~XAccessible() throw () {} // avoid warnings about virtual members and non-virtual dtor
};}}}}


namespace com{ namespace sun{ namespace star{ namespace accessibility{
class XAccessibleContext : public ::com::sun::star::uno::XInterface
       {
        public:
          virtual ::sal_Int32 getAccessibleChildCount() = 0;
          virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > getAccessibleChild( ::sal_Int32 i ) = 0;
          virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > getAccessibleParent() = 0;
          virtual ::sal_Int32 getAccessibleIndexInParent() = 0;
          virtual ::sal_Int16 getAccessibleRole() = 0;
          virtual ::rtl::OUString getAccessibleDescription() = 0;
          virtual ::rtl::OUString getAccessibleName() = 0;
          virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleRelationSet > getAccessibleRelationSet() = 0;
          virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleStateSet > getAccessibleStateSet() = 0;
          virtual ::com::sun::star::lang::Locale getLocale() = 0;
         static ::com::sun::star::uno::Type const & static_type(void * = 0) {}
        protected:
          ~XAccessibleContext() throw (){}
        };}}}}
        //class XAccessibleContext;
namespace com{ namespace sun{ namespace star{ namespace accessibility{
class AccessibleEventId{
        public :
          enum type_enum{
            ACTION_CHANGED = (sal_Int16)3,
            ACTIVE_DESCENDANT_CHANGED = (sal_Int16)5,
            ACTIVE_DESCENDANT_CHANGED_NOFOCUS = (sal_Int16)34,
            BOUNDRECT_CHANGED = (sal_Int16)6,
            CARET_CHANGED = (sal_Int16)20,
            CHILD = (sal_Int16)7,
            COLUMN_CHANGED = (sal_Int16)40,
            CONTENT_FLOWS_FROM_RELATION_CHANGED = (sal_Int16)12,
            CONTENT_FLOWS_TO_RELATION_CHANGED = (sal_Int16)13,
            CONTROLLED_BY_RELATION_CHANGED = (sal_Int16)14,
            CONTROLLER_FOR_RELATION_CHANGED = (sal_Int16)15,
            DESCRIPTION_CHANGED = (sal_Int16)2,
            HYPERTEXT_CHANGED = (sal_Int16)24,
            INVALIDATE_ALL_CHILDREN = (sal_Int16)8,
            LABELED_BY_RELATION_CHANGED = (sal_Int16)17,
            LABEL_FOR_RELATION_CHANGED = (sal_Int16)16,
            LISTBOX_ENTRY_COLLAPSED = (sal_Int16)33,
            LISTBOX_ENTRY_EXPANDED = (sal_Int16)32,
            MEMBER_OF_RELATION_CHANGED = (sal_Int16)18,
            NAME_CHANGED = (sal_Int16)1,
            PAGE_CHANGED = (sal_Int16)38,
            SECTION_CHANGED = (sal_Int16)39,
            SELECTION_CHANGED = (sal_Int16)9,
            SELECTION_CHANGED_ADD = (sal_Int16)35,
            SELECTION_CHANGED_REMOVE = (sal_Int16)36,
            SELECTION_CHANGED_WITHIN = (sal_Int16)37,
            STATE_CHANGED = (sal_Int16)4,
            SUB_WINDOW_OF_RELATION_CHANGED = (sal_Int16)19,
            TABLE_CAPTION_CHANGED = (sal_Int16)25,
            TABLE_COLUMN_DESCRIPTION_CHANGED = (sal_Int16)26,
            TABLE_COLUMN_HEADER_CHANGED = (sal_Int16)27,
            TABLE_MODEL_CHANGED = (sal_Int16)28,
            TABLE_ROW_DESCRIPTION_CHANGED = (sal_Int16)29,
            TABLE_ROW_HEADER_CHANGED = (sal_Int16)30,
            TABLE_SUMMARY_CHANGED = (sal_Int16)31,
            TEXT_ATTRIBUTE_CHANGED = (sal_Int16)23,
            TEXT_CHANGED = (sal_Int16)22,
            TEXT_SELECTION_CHANGED = (sal_Int16)21,
            VALUE_CHANGED = (sal_Int16)11,
            VISIBLE_DATA_CHANGED = (sal_Int16)10,
          };
        };
      }}}}

namespace com{ namespace sun{ namespace star{ namespace accessibility{
class AccessibleRelationType{
        public :
          enum relation_type{
            CONTENT_FLOWS_FROM = (sal_Int16)1,
            CONTENT_FLOWS_TO = (sal_Int16)2,
            CONTROLLED_BY = (sal_Int16)3,
            CONTROLLER_FOR = (sal_Int16)4,
            DESCRIBED_BY = (sal_Int16)10,
            INVALID = (sal_Int16)0,
            LABELED_BY = (sal_Int16)6,
            LABEL_FOR = (sal_Int16)5,
            MEMBER_OF = (sal_Int16)7,
            NODE_CHILD_OF = (sal_Int16)9,
            SUB_WINDOW_OF = (sal_Int16)8,
          };
        };
      }}}}
namespace com{ namespace sun{ namespace star{ namespace accessibility{
        //  com.sun.star.accessibility
class AccessibleStateType{
        public :
          enum state_type{
            ACTIVE = (sal_Int16)1,
            ARMED = (sal_Int16)2,
            BUSY = (sal_Int16)3,
            CHECKED = (sal_Int16)4,
            COLLAPSE = (sal_Int16)34,
            DEFAULT = (sal_Int16)32,
            DEFUNC = (sal_Int16)5,
            EDITABLE = (sal_Int16)6,
            ENABLED = (sal_Int16)7,
            EXPANDABLE = (sal_Int16)8,
            EXPANDED = (sal_Int16)9,
            FOCUSABLE = (sal_Int16)10,
            FOCUSED = (sal_Int16)11,
            HORIZONTAL = (sal_Int16)12,
            ICONIFIED = (sal_Int16)13,
            INDETERMINATE = (sal_Int16)14,
            INVALID = (sal_Int16)0,
            MANAGES_DESCENDANTS = (sal_Int16)15,
            MODAL = (sal_Int16)16,
            MOVEABLE = (sal_Int16)31,
            MULTI_LINE = (sal_Int16)17,
            MULTI_SELECTABLE = (sal_Int16)18,
            OFFSCREEN = (sal_Int16)33,
            OPAQUE = (sal_Int16)19,
            PRESSED = (sal_Int16)20,
            RESIZABLE = (sal_Int16)21,
            SELECTABLE = (sal_Int16)22,
            SELECTED = (sal_Int16)23,
            SENSITIVE = (sal_Int16)24,
            SHOWING = (sal_Int16)25,
            SINGLE_LINE = (sal_Int16)26,
            STALE = (sal_Int16)27,
            TRANSIENT = (sal_Int16)28,
            VERTICAL = (sal_Int16)29,
            VISIBLE = (sal_Int16)30,
          };
        };
      }}}}
namespace com{ namespace sun{ namespace star{ namespace accessibility{
        //  com.sun.star.accessibility
class AccessibleRole{
        public:
          enum role{
            ALERT = (sal_Int16)1,
            BUTTON_DROPDOWN = (sal_Int16)68,
            BUTTON_MENU = (sal_Int16)69,
            CANVAS = (sal_Int16)3,
            CAPTION = (sal_Int16)70,
            CHART = (sal_Int16)71,
            CHECK_BOX = (sal_Int16)4,
            CHECK_MENU_ITEM = (sal_Int16)5,
            COLOR_CHOOSER = (sal_Int16)6,
            COLUMN_HEADER = (sal_Int16)2,
            COMBO_BOX = (sal_Int16)7,
            COMMENT = (sal_Int16)81,
            COMMENT_END = (sal_Int16)82,
            DATE_EDITOR = (sal_Int16)8,
            DESKTOP_ICON = (sal_Int16)9,
            DESKTOP_PANE = (sal_Int16)10,
            DIALOG = (sal_Int16)12,
            DIRECTORY_PANE = (sal_Int16)11,
            DOCUMENT = (sal_Int16)13,
            EDIT_BAR = (sal_Int16)72,
            EMBEDDED_OBJECT = (sal_Int16)14,
            END_NOTE = (sal_Int16)15,
            FILE_CHOOSER = (sal_Int16)16,
            FILLER = (sal_Int16)17,
            FONT_CHOOSER = (sal_Int16)18,
            FOOTER = (sal_Int16)19,
            FOOTNOTE = (sal_Int16)20,
            FORM = (sal_Int16)73,
            FRAME = (sal_Int16)21,
            GLASS_PANE = (sal_Int16)22,
            GRAPHIC = (sal_Int16)23,
            GROUP_BOX = (sal_Int16)24,
            HEADER = (sal_Int16)25,
            HEADING = (sal_Int16)26,
            HYPER_LINK = (sal_Int16)27,
            ICON = (sal_Int16)28,
            IMAGE_MAP = (sal_Int16)74,
            INTERNAL_FRAME = (sal_Int16)29,
            LABEL = (sal_Int16)30,
            LAYERED_PANE = (sal_Int16)31,
            LIST = (sal_Int16)32,
            LIST_ITEM = (sal_Int16)33,
            MENU = (sal_Int16)34,
            MENU_BAR = (sal_Int16)35,
            MENU_ITEM = (sal_Int16)36,
            NOTE = (sal_Int16)75,
            OPTION_PANE = (sal_Int16)37,
            PAGE = (sal_Int16)76,
            PAGE_TAB = (sal_Int16)38,
            PAGE_TAB_LIST = (sal_Int16)39,
            PANEL = (sal_Int16)40,
            PARAGRAPH = (sal_Int16)41,
            PASSWORD_TEXT = (sal_Int16)42,
            POPUP_MENU = (sal_Int16)43,
            PROGRESS_BAR = (sal_Int16)45,
            PUSH_BUTTON = (sal_Int16)44,
            RADIO_BUTTON = (sal_Int16)46,
            RADIO_MENU_ITEM = (sal_Int16)47,
            ROOT_PANE = (sal_Int16)49,
            ROW_HEADER = (sal_Int16)48,
            RULER = (sal_Int16)77,
            SCROLL_BAR = (sal_Int16)50,
            SCROLL_PANE = (sal_Int16)51,
            SECTION = (sal_Int16)78,
            SEPARATOR = (sal_Int16)53,
            SHAPE = (sal_Int16)52,
            SLIDER = (sal_Int16)54,
            SPIN_BOX = (sal_Int16)55,
            SPLIT_PANE = (sal_Int16)56,
            STATUS_BAR = (sal_Int16)57,
            TABLE = (sal_Int16)58,
            TABLE_CELL = (sal_Int16)59,
            TEXT = (sal_Int16)60,
            TEXT_FRAME = (sal_Int16)61,
            TOGGLE_BUTTON = (sal_Int16)62,
            TOOL_BAR = (sal_Int16)63,
            TOOL_TIP = (sal_Int16)64,
            TREE = (sal_Int16)65,
            TREE_ITEM = (sal_Int16)79,
            TREE_TABLE = (sal_Int16)80,
            UNKNOWN = (sal_Int16)0,
            VIEW_PORT = (sal_Int16)66,
            WINDOW = (sal_Int16)67,
          };
        };
      }
    }
  }
}
namespace utl{
  class AccessibleRelationSetHelper{
  };
  class AccessibleStateSetHelper{
  public:
    AccessibleStateSetHelper(){}
    void AddState(
                  ::com::sun::star::accessibility::AccessibleStateType::state_type
                  ) {}
  };
};
namespace com{
  namespace sun{
    namespace star{
 namespace container{
class XContainerListener{};
class ContainerEvent{};
      }
 namespace util{
class XModeChangeListener{};
class ModeChangeEvent{};
      }
 namespace beans{
class XPropertySetInfo{};
class PropertyChangeEvent{};
class XPropertySet{};
class XPropertyChangeListener{};
class PropertyValue{};
      };
    };
  };
};

//enum AtkRole;
template<typename T, std::size_t Size>
std::size_t SAL_N_ELEMENTS(T(&)[Size]){
  //from http://stackoverflow.com/questions/3368883/how-does-this-size-of-array-template-function-work
  //std::cout << "Count" << Size << std::endl;
  return Size;
}

template <class T> void OSL_FAIL(T){}
template <class T> void OSL_ASSERT(T){}
class Window;



class SwPostItMgr{
public:
  bool HasNotes() {}
  bool ShowNotes() {}
  template <class T> bool HasFrmConnectedSidebarWins(T) {}
  template <class T, class U> Window* GetSidebarWinForFrmByIndex(T,U) {}
  template <class T, class U> Window* GetAllSidebarWinForFrm(T,U) {}
};
class SwViewShell : public SwCrsrShell{
public :
  Window * GetWin() const{}
  bool IsPreview(){}
  SwPostItMgr * GetPostItMgr(){}
  const SwFrm* GetLayout(){}
  template <class T> bool DOISA(T) const{}
};

/*class SwAccessibleMap{
  public:
  SwViewShell * GetShell() const {}
  };*/
class Fraction{};


using namespace com::sun::star::awt;
template <class T> void OSL_ENSURE(T, const char * message){}
class typelib_TypeDescription{};
class typelib_TypeClass{};

com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleContext>){
}
com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, sal_Int16){
}

class FunkyXAccessible{};

class LanguageTag
{
public:
  ::com::sun::star::lang::Locale getLocale() {}
};
class Settings{
public:
  LanguageTag GetLanguageTag() {}
};
class Application{
public:
  static Settings GetSettings() {}
};
class SwWrtShell
  : public SwCrsrShell
{
public:
  template<class T>  void SetSelection(T&) {}
  void SttSelect() {}
};
template <class T, class U> void DBG_ASSERT(T,U){}
enum stuff{
  GPOS_NONE,
  KEY_RETURN,
  LINK,
  ND_TEXTNODE,
  CHECK_FOR_DEFUNC,
  CHECK_FOR_WINDOW,
  ClearFrm,
  CNT_GRF,
  CNT_OLE,
  CNT_TXT,
  COL_AUTO,
  COL_TRANSPARENT,
  SFX_TITLE_APINAME,
  STR_ACCESS_DOC_DESC,
  STR_ACCESS_DOC_NAME,
  STR_ACCESS_DOC_WORDPROCESSING_READONLY,
  STR_ACCESS_DOC_WORDPROCESSING,
  STR_ACCESS_ENDNOTE_NAME,
  STR_ACCESS_FOOTER_DESC,
  STR_ACCESS_FOOTER_NAME,
  STR_ACCESS_FOOTNOTE_NAME,
  STR_ACCESS_HEADER_DESC,
  STR_ACCESS_HEADER_NAME,
  STR_ACCESS_PAGE_DESC,
  STR_ACCESS_PAGE_NAME,
  STR_ACCESS_PREVIEW_DOC_NAME,
  STR_ACCESS_PREVIEW_DOC_SUFFIX,
  SVX_NUM_ARABIC,
  SVX_NUM_NUMBER_NONE,
  RES_DESCRIPTION_CHANGED,
  RES_FMT_CHG,
  RES_NAME_CHANGED,
  RES_OBJECTDYING,
  RES_TITLE_CHANGED,
  RES_TXTATR_INETFMT,
  TOX_CONTENT_SECTION,
  TOX_HEADER_SECTION,
  URLLOAD_NOFILTER,
  VCLEVENT_OBJECT_DYING,
  VCLEVENT_WINDOW_HIDE,
  VCLEVENT_WINDOW_SHOW,
};
class  VclWindowEvent{};
class  WindowChildEventListener{};
//class SwCntntNode{};
class SwDocShell{};
//class SwDoc{};
class SwDrawContact{};
class SwFmtChg{};
//class SwFrmFmt{};
class SwModify{};
class SW_MOD{};
class SwPtrMsgPoolItem{};
class SwSectionFrm{};
class SwStringMsgPoolItem{};
class SwTxtINetFmt{};
class SwVirtFlyDrawObj{};

template<class T, class U, class V>
void SAL_WARN_IF(T cond,U a,V b){}


namespace com{ namespace sun{ namespace star{ namespace uno{
class RuntimeException : Exception{
        public:
          template<class T> RuntimeException(
                                             rtl::OUString,
                                             com::sun::star::uno::Reference<
                                             T>&){}
        };
      }}}}
namespace comphelper{
  class AccessibleEventNotifier{
  public:
    static int registerClient() {}
    static void revokeClient( int nClientId ) {}
    static int removeEventListener(sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>&) {}
    static void addEventListener( sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>& ) {}
    template <class T> static void revokeClientNotifyDisposing(sal_uInt32&,T&){}
    static void addEvent(int nClientId,::com::sun::star::accessibility::AccessibleEventObject& rEvent){}
  };
};

class Window{
public:
  bool HasFocus(){}
  FunkyXAccessible funky;
  ::com::sun::star::uno::Reference<
    ::com::sun::star::accessibility::XAccessible > r;
  ::com::sun::star::uno::Reference<
    ::com::sun::star::accessibility::XAccessible
    > GetAccessible(){}
  FunkyXAccessible   GetAccessible2(){}
  ::com::sun::star::uno::Reference<
    ::com::sun::star::accessibility::XAccessible
    >  GetAccessibleParentWindow(){}
  Point OutputToAbsoluteScreenPixel(::com::sun::star::awt::Point ) {}
};
//com/sun/star/accessibility/XAccessibleEventBroadcaster.hdl
namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleEventBroadcaster : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual void SAL_CALL addAccessibleEventListener( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleEventListener >& xListener ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual void SAL_CALL removeAccessibleEventListener( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleEventListener >& xListener ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    static ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0) {}
protected:
    ~XAccessibleEventBroadcaster() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }


namespace accessibility {
/** @descr
        This base class provides an implementation of the
        AccessibleContext service.  Appart from the
        <type>XXAccessible<type> and XAccessibleContextContext
        interfaces it supports the XServiceInfo interface.
*/
class AccessibleContextBase
    :   public MutexOwner,
        public cppu::PartialWeakComponentImplHelper4<
        ::com::sun::star::accessibility::XAccessible,
        ::com::sun::star::accessibility::XAccessibleContext,
        ::com::sun::star::accessibility::XAccessibleEventBroadcaster,
        ::com::sun::star::lang::XServiceInfo
        >
{
public:
    //=====  internal  ========================================================
    /** The origin of the accessible name or description.
    */
    enum StringOrigin {
        ManuallySet,
        FromShape,
        AutomaticallyCreated,
        NotSet
    };
  AccessibleContextBase () {};
    AccessibleContextBase (
        const ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessible>& rxParent,
        const sal_Int16 aRole) {}
    virtual ~AccessibleContextBase (void) {}
    /** Call all accessiblity event listeners to inform them about the
        specified event.
        @param aEventId
            Id of the event type.
        @param rNewValue
            New value of the modified attribute.  Pass empty structure if
            not applicable.
        @param rOldValue
            Old value of the modified attribute.  Pass empty structure if
            not applicable.
    */
    void CommitChange (sal_Int16 aEventId,
        const ::com::sun::star::uno::Any& rNewValue,
        const ::com::sun::star::uno::Any& rOldValue) {}
    /** Set a new description and, provided that the new name differs from
        the old one, broadcast an accessibility event.
        @param rsDescription
            The new description.
        @param eDescriptionOrigin
            The origin of the description.  This is used to determine
            whether the given description overrules the existing one.  An
            origin with a lower numerical value overrides one with a higher
            value.
    */
    void SetAccessibleDescription (
        const OUString& rsDescription,
        StringOrigin eDescriptionOrigin)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Set a new description and, provided that the new name differs from
        the old one, broadcast an accessibility event.
        @param rsName
            The new name.
        @param eNameOrigin
            The origin of the name.  This is used to determine whether the
            given name overrules the existing one.  An origin with a lower
            numerical value overrides one with a higher value.
    */
    void SetAccessibleName (
        const OUString& rsName,
        StringOrigin eNameOrigin)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Set the specified state (turn it on) and send events to all
        listeners to inform them of the change.
        @param aState
            The state to turn on.
        @return
            If the specified state changed its value due to this call
            <TRUE/> is returned, otherwise <FALSE/>.
    */
    virtual sal_Bool SetState (sal_Int16 aState) {}
    /** Reset the specified state (turn it off) and send events to all
        listeners to inform them of the change.
        @param aState
            The state to turn off.
        @return
            If the specified state changed its value due to this call
            <TRUE/> is returned, otherwise <FALSE/>.
    */
    virtual sal_Bool ResetState (sal_Int16 aState) {}
    /** Return the state of the specified state.
        @param aState
            The state for which to return its value.
        @return
            A value of <TRUE/> indicates that the state is set.  A <FALSE/>
            value indicates an unset state.
    */
    sal_Bool GetState (sal_Int16 aState) {}
    /** Replace the current relation set with the specified one.  Send
        events for relations that are not in both sets.
        @param rRelationSet
            The new relation set that replaces the old one.
    */
    virtual void SetRelationSet (
        const ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleRelationSet>& rxRelationSet)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessible  =====================================================
    /// Return the XAccessibleContext.
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleContext> SAL_CALL
        getAccessibleContext (void) throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleContext  ==============================================
    /// Return the number of currently visible children.
    virtual sal_Int32 SAL_CALL
        getAccessibleChildCount (void) throw (::com::sun::star::uno::RuntimeException) {}
    /// Return the specified child or throw exception.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleChild (sal_Int32 nIndex)
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    /// Return a reference to the parent.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleParent (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return this objects index among the parents children.
    virtual sal_Int32 SAL_CALL
        getAccessibleIndexInParent (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return this object's role.
    virtual sal_Int16 SAL_CALL
        getAccessibleRole (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return the object's current name.
    virtual OUString SAL_CALL
        getAccessibleName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return NULL to indicate that an empty relation set.
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleRelationSet> SAL_CALL
        getAccessibleRelationSet (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return the set of current states.
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleStateSet> SAL_CALL
        getAccessibleStateSet (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Return the parents locale or throw exception if this object has no
        parent yet/anymore.
    */
    virtual ::com::sun::star::lang::Locale SAL_CALL
        getLocale (void)
        throw (::com::sun::star::uno::RuntimeException,
            ::com::sun::star::accessibility::IllegalAccessibleComponentStateException) {}
    //=====  XAccessibleEventBroadcaster  ========================================
    virtual void SAL_CALL
        addAccessibleEventListener (
            const ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleEventListener >& xListener)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL
        removeAccessibleEventListener (
            const ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleEventListener >& xListener)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XServiceInfo  ====================================================
    /** Returns an identifier for the implementation of this object.
    */
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Return whether the specified service is supported by this class.
    */
    virtual sal_Bool SAL_CALL
        supportsService (const OUString& sServiceName)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Returns a list of all supported services.  In this case that is just
        the AccessibleContext service.
    */
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XTypeProvider  ===================================================
    /** Returns a sequence of all supported interfaces.
    */
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type> SAL_CALL
        getTypes (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Returns a implementation id.
    */
    virtual ::com::sun::star::uno::Sequence<sal_Int8> SAL_CALL
        getImplementationId (void)
        throw (::com::sun::star::uno::RuntimeException) {}
protected:
    /** The state set.
    */
    ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleStateSet> mxStateSet;
    /** The relation set.  Relations can be set or removed by calling the
        <member>AddRelation</member> and <member>RemoveRelation</member> methods.
    */
    ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleRelationSet> mxRelationSet;
    // This method is called from the component helper base class while disposing.
    virtual void SAL_CALL disposing (void) {}
    /** Create the accessible object's name.  This method may be called more
        than once for a single object.
        @return
            The returned string is a unique (among the accessible object's
            siblings) name.
    */
    virtual OUString CreateAccessibleName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Create the accessible object's descriptive string.  May be called
        more than once.
        @return
            Descriptive string.  Not necessarily unique.
    */
    virtual OUString
        CreateAccessibleDescription (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    void FireEvent (const ::com::sun::star::accessibility::AccessibleEventObject& aEvent) {}
    /** Check whether or not the object has been disposed (or is in the
        state of beeing disposed).  If that is the case then
        DisposedException is thrown to inform the (indirect) caller of the
        foul deed.
    */
    void ThrowIfDisposed (void)
        throw (::com::sun::star::lang::DisposedException) {}
    /** Check whether or not the object has been disposed (or is in the
        state of beeing disposed).
        @return TRUE, if the object is disposed or in the course
        of being disposed. Otherwise, FALSE is returned.
    */
    sal_Bool IsDisposed (void) {}
    /** sets the role as returned by XaccessibleContext::getAccessibleRole
        <p>Caution: This is only to be used in the construction phase (means within
        the ctor or late ctor), <em>never</em> when the object is still alive and part
        of an Accessibility hierarchy.</p>
    */
    void SetAccessibleRole( sal_Int16 _nRole ) {}
private:
    /// Reference to the parent object.
    ::com::sun::star::uno::Reference<
         ::com::sun::star::accessibility::XAccessible> mxParent;
    /** Description of this object.  This is not a constant because it can
        be set from the outside.  Furthermore, it changes according the the
        draw page's display mode.
    */
    OUString msDescription;
    /** The origin of the description is used to determine whether new
        descriptions given to the SetAccessibleDescription is ignored or
        whether that replaces the old value in msDescription.
    */
    StringOrigin meDescriptionOrigin;
    /** Name of this object.  It changes according the draw page's
        display mode.
    */
    OUString msName;
    /** The origin of the name is used to determine whether new
        name given to the SetAccessibleName is ignored or
        whether that replaces the old value in msName.
    */
    StringOrigin meNameOrigin;
    /** client id in the AccessibleEventNotifier queue
    */
    sal_uInt32 mnClientId;
    /** This is the role of this object.
    */
    sal_Int16 maRole;
};
}
// namespace sw {
//   namespace access {
//     class SwAccessibleChild{
//     public:
//       template<class T>SwAccessibleChild(T){}
//       bool IsVisibleChildrenOnly(){};      
//     };
//   }
// }

//namespace sw { namespace access { /*dcl*/class SwAccessibleChild; }}
namespace sw { namespace access {
class SwAccessibleChild
{
    public:
        SwAccessibleChild() {}
        explicit SwAccessibleChild( const SdrObject* pDrawObj ) {}
        explicit SwAccessibleChild( const SwFrm* pFrm ) {}
        explicit SwAccessibleChild( Window* pWindow ) {}
        SwAccessibleChild( const SwFrm* pFrm,
                           const SdrObject* pDrawObj,
                           Window* pWindow ) {}
        SwAccessibleChild( const SwAccessibleChild& r ) {}
        SwAccessibleChild& operator=( const SwAccessibleChild& r ) {}
        SwAccessibleChild& operator=( const SdrObject* pDrawObj ) {}
        SwAccessibleChild& operator=( const SwFrm* pFrm ) {}
        SwAccessibleChild& operator=( Window* pWindow ) {}
        bool operator==( const SwAccessibleChild& r ) const {}
        bool IsValid() const {}
        const SwFrm* GetSwFrm() const {}
        const SdrObject* GetDrawObject() const {}
        Window* GetWindow() const {}
        const SwFrm* GetParent( const sal_Bool bInPagePreview ) const {}
        bool IsAccessible( sal_Bool bPagePreview ) const {}
        bool IsBoundAsChar() const {}
        sal_uInt32 GetAnchorPosition() const {}
        bool IsVisibleChildrenOnly() const {}
        SwRect GetBox( const SwAccessibleMap& rAccMap ) const {}
        SwRect GetBounds( const SwAccessibleMap& rAccMap ) const {}
        /** indicating, if accessible child is included even, if the corresponding
            object is not visible. */
        bool AlwaysIncludeAsChild() const {}
    private:
        const SwFrm* mpFrm;
        const SdrObject* mpDrawObj;
        Window* mpWindow;
        void Init( const SdrObject* pDrawObj ) {}
        void Init( const SwFrm* pFrm ) {}
        void Init( Window* pWindow ) {}
};
} } // eof of namespace sw::access

class SwAccessibleChildSList_const_iterator
{
private:
  //   friend class SwAccessibleChildSList;
  // //    const SwAccessibleChildSList& rList;    // The frame we are iterating over
  //   sw::access::SwAccessibleChild aCurr;    // The current object
  //   sal_uInt16 nNextObj;                    // The index of the current sdr object
  //   SwAccessibleChildSList_const_iterator( const SwAccessibleChildSList& rLst )
  //       : rList( rLst )
  //       , nNextObj( 0 )
  //   {}
  //   SwAccessibleChildSList_const_iterator( const SwAccessibleChildSList& rLst,
  //                                          SwAccessibleMap& rAccMap ) {}
  //   SwAccessibleChildSList_const_iterator& next() {}
  //   SwAccessibleChildSList_const_iterator& next_visible() {}
public:
    SwAccessibleChildSList_const_iterator( const SwAccessibleChildSList_const_iterator& rIter )
    //        : rList( rIter.rList )
    //    , aCurr( rIter.aCurr )
    //    , nNextObj( rIter.nNextObj )
    {}
    bool operator==( const SwAccessibleChildSList_const_iterator& r ) const
    {
      //        return aCurr == r.aCurr;
    }
    bool operator!=(
            const SwAccessibleChildSList_const_iterator& r ) const    {    }
    SwAccessibleChildSList_const_iterator& operator++() {}
    const sw::access::SwAccessibleChild& operator*() const    {    }
};
class SwAccessibleChildSList_const_iterator;
// An iterator to iterate over a frame's child in any order
class SwAccessibleChildSList
{
    const SwRect maVisArea;
    const SwFrm& mrFrm;
    const bool mbVisibleChildrenOnly;
    SwAccessibleMap& mrAccMap;
public:
    typedef SwAccessibleChildSList_const_iterator const_iterator;
    SwAccessibleChildSList( const SwFrm& rFrm,
                                   SwAccessibleMap& rAccMap )
        : maVisArea()
        , mrFrm( rFrm )
        , mbVisibleChildrenOnly( false )
        , mrAccMap( rAccMap )
    {}
    SwAccessibleChildSList( const SwRect& rVisArea,
                                   const SwFrm& rFrm,
                                   SwAccessibleMap& rAccMap )
        : maVisArea( rVisArea )
        , mrFrm( rFrm )
        , mbVisibleChildrenOnly( sw::access::SwAccessibleChild( &rFrm ).IsVisibleChildrenOnly() )
        , mrAccMap( rAccMap )
    {
    }
    const_iterator begin() const
    {
      //    return SwAccessibleChildSList_const_iterator( *this, mrAccMap ) {}
    }
    const_iterator end() const
    {
      //        return SwAccessibleChildSList_const_iterator( *this ) {}
    }
    const SwFrm& GetFrm() const
    {
        return mrFrm;
    }
    bool IsVisibleChildrenOnly() const
    {
        return mbVisibleChildrenOnly;
    }
    const SwRect& GetVisArea() const
    {
        return maVisArea;
    }
    SwAccessibleMap& GetAccMap() const
    {
        return mrAccMap;
    }
};


namespace com { namespace sun { namespace star { namespace accessibility {
class SAL_NO_VTABLE XAccessibleExtendedAttributes : 
      public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::com::sun::star::uno::Any SAL_CALL getExtendedAttributes() /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleExtendedAttributes() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }




namespace com { namespace sun { namespace star { namespace accessibility {
        class XAccessibleGroupPosition{};
      }}}}


namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleKeyBinding : public ::com::sun::star::uno::XInterface
{
public:
    virtual ::sal_Int32 getAccessibleKeyBindingCount() = 0;
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::awt::KeyStroke > getAccessibleKeyBinding( ::sal_Int32 nIndex ) = 0;
  static ::com::sun::star::uno::Type const & static_type(void * = 0){}
protected:
    ~XAccessibleKeyBinding() throw () {}
};
        ::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::XAccessibleKeyBinding const *){}
} } } }

namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleAction : public ::com::sun::star::uno::XInterface
{
public:
    virtual ::sal_Int32 getAccessibleActionCount() = 0;
    virtual ::sal_Bool doAccessibleAction( ::sal_Int32 nIndex ) = 0;
    virtual ::rtl::OUString getAccessibleActionDescription( ::sal_Int32 nIndex ) = 0;
    virtual ::com::sun::star::uno::Reference< 
      ::com::sun::star::accessibility::XAccessibleKeyBinding 
      > getAccessibleActionKeyBinding( ::sal_Int32 nIndex ) = 0;
    static ::com::sun::star::uno::Type const & static_type(void * = 0) {}
protected:
    ~XAccessibleAction() throw () {}
};
::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::XAccessibleAction const *) {}
} } } }
//NEED :com::sun::star::accessibility::XAccessibleHyperlink
namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleHyperlink : public ::com::sun::star::accessibility::XAccessibleAction
{
public:
    virtual ::com::sun::star::uno::Any getAccessibleActionAnchor( ::sal_Int32 nIndex ) = 0;
    virtual ::com::sun::star::uno::Any getAccessibleActionObject( ::sal_Int32 nIndex ) = 0;
    virtual ::sal_Int32 getStartIndex() = 0;
    virtual ::sal_Int32 getEndIndex() = 0;
    virtual ::sal_Bool isValid() = 0;
    static ::com::sun::star::uno::Type const & static_type(void * = 0) {}
protected:
    ~XAccessibleHyperlink() throw () {}
};
::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::XAccessibleHyperlink const *) {}
} } } }
namespace com { namespace sun { namespace star { namespace accessibility {
struct TextSegment {
  TextSegment() {}
  TextSegment(const ::rtl::OUString& SegmentText_, const ::sal_Int32& SegmentStart_, const ::sal_Int32& SegmentEnd_) {}
    ::rtl::OUString SegmentText;
    ::sal_Int32 SegmentStart;
    ::sal_Int32 SegmentEnd;
};
::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::TextSegment const *) {}
} } } }


//class IAccessibleViewForwarderListener{};
namespace accessibility {
class IAccessibleViewForwarder;
class IAccessibleViewForwarderListener
{
public:
    /** Enumeration of the different change types.
    */
    enum ChangeType {TRANSFORMATION, VISIBLE_AREA, STATE};
    /** This method is called to indicate a change of the specified view
        forwarder.
        @param aChangeType
            The type of the change.  TRANSFORMATION indicates a change of
            the coordinate transformation with a constant visible area.  If
            the visible area changes, just use VISIBLE_AREA.  This changes
            the transformation implicitly.  The value STATE indicates a
            change of the validity state.  Check the IsValid method of the
            view forwarder before doing further calls.
        @param pViewForwarder
            The modified view forwarder.  It is specified just in case that
            there is more than one view forwarder in use at the same time.
    */
    virtual void ViewForwarderChanged (ChangeType aChangeType,
        const IAccessibleViewForwarder* pViewForwarder) = 0;
protected:
    ~IAccessibleViewForwarderListener() {}
};
}

class AccessibleComponentBase{};
class SdrObject;
namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleText : public ::com::sun::star::uno::XInterface
{
public:
    virtual ::sal_Int32 getCaretPosition() = 0;
    virtual ::sal_Bool setCaretPosition( ::sal_Int32 nIndex ) = 0;
    virtual ::sal_Unicode getCharacter( ::sal_Int32 nIndex ) = 0;
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > getCharacterAttributes( ::sal_Int32 nIndex, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& aRequestedAttributes ) = 0;
    virtual ::com::sun::star::awt::Rectangle getCharacterBounds( ::sal_Int32 nIndex ) = 0;
    virtual ::sal_Int32 getCharacterCount() = 0;
    virtual ::sal_Int32 getIndexAtPoint( const ::com::sun::star::awt::Point& aPoint ) = 0;
    virtual ::rtl::OUString getSelectedText() = 0;
    virtual ::sal_Int32 getSelectionStart() = 0;
    virtual ::sal_Int32 getSelectionEnd() = 0;
    virtual ::sal_Bool setSelection( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex ) = 0;
    virtual ::rtl::OUString getText() = 0;
    virtual ::rtl::OUString getTextRange( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex ) = 0;
    virtual ::com::sun::star::accessibility::TextSegment getTextAtIndex( ::sal_Int32 nIndex, ::sal_Int16 nTextType ) = 0;
    virtual ::com::sun::star::accessibility::TextSegment getTextBeforeIndex( ::sal_Int32 nIndex, ::sal_Int16 nTextType ) = 0;
    virtual ::com::sun::star::accessibility::TextSegment getTextBehindIndex( ::sal_Int32 nIndex, ::sal_Int16 nTextType ) = 0;
    virtual ::sal_Bool copyText( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex ) = 0;
    static ::com::sun::star::uno::Type const & static_type(void * = 0) {}
protected:
    ~XAccessibleText() throw () {}
};
::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::XAccessibleText const *) {}
} } } }

namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleHypertext : public ::com::sun::star::accessibility::XAccessibleText
{
public:
    virtual ::sal_Int32 getHyperLinkCount() = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink > getHyperLink( ::sal_Int32 nLinkIndex ) = 0;
    virtual ::sal_Int32 getHyperLinkIndex( ::sal_Int32 nCharIndex ) = 0;
    static ::com::sun::star::uno::Type const & static_type(void * = 0) {}
protected:
    ~XAccessibleHypertext() throw () {}
};
::com::sun::star::uno::Type const & cppu_detail_getUnoType( ::com::sun::star::accessibility::XAccessibleHypertext const *) {}
} } } }

namespace accessibility {
/** <p>This interface provides the means to transform between internal
    coordinates in 100th of mm and screen coordinates without giving direct
    access to the underlying view.  Each view forwarder represents a
    specific real or virtual window.  A call to
    <method>GetVisibleArea</method> returns the visible rectangle that
    corresponds to this window.</p>
    <p>This interface is similar to the SvxViewForwarder but
    differs in two important points: Firstly the <member>GetVisArea</member>
    method returns a rectangle in internal coordinates and secondly the
    transformation methods do not require explicit mapmodes.  These have to
    be provided implicitely by the classes that implement this
    interface.  A third, less important, difference are the additional
    transfomation methods for sizes.  The reasons for their existince are
    convenience and improved performance.</p>
    @attention
        Note, that modifications of the underlying view that lead to
        different transformations between internal and screen coordinates or
        change the validity of the forwarder have to be signaled separately.
*/
class IAccessibleViewForwarder
{
public:
    virtual ~IAccessibleViewForwarder (void){};
    /** This method informs you about the state of the forwarder.  Do not
        use it when the returned value is <false/>.
        @return
            Return <true/> if the view forwarder is valid and <false/> else.
     */
    virtual sal_Bool IsValid (void) const = 0;
    /** Returns the area of the underlying document that is visible in the
    * corresponding window.
        @return
            The rectangle of the visible part of the document. The values
            are, contrary to the base class, in internal coordinates of
            100th of mm.
     */
    virtual com::sun::star::awt::Rectangle GetVisibleArea() const = 0;
    /** Transform the specified point from internal coordinates in 100th of
        mm to an absolute screen position.
        @param rPoint
            Point in internal coordinates (100th of mm).
        @return
            The same point but in screen coordinates relative to the upper
            left corner of the (current) screen.
     */
    virtual Point LogicToPixel (const Point& rPoint) const = 0;
    /** Transform the specified size from internal coordinates in 100th of
        mm to a screen oriented pixel size.
        @param rSize
            Size in internal coordinates (100th of mm).
        @return
            The same size but in screen coordinates.
     */
    virtual Size LogicToPixel (const Size& rSize) const = 0;
    /** Transform the specified point from absolute screen coordinates to
        internal coordinates (100th of mm).
        @param rPoint
            Point in screen coordinates relative to the upper left corner of
            the (current) screen.
        @return
            The same point but in internal coordinates (100th of mm).
     */
    virtual Point PixelToLogic (const Point& rPoint) const = 0;
    /** Transform the specified size from screen coordinates to internal
        coordinates (100th of mm).
        @param rSize
            Size in screen coordinates.
        @return
            The same size but in internal coordinates (100th of mm).
     */
    virtual Size PixelToLogic (const Size& rSize) const = 0;
};
} // end of namespace accessibility


class SvxEditSource {
public:
  virtual 	~SvxEditSource (){}
  virtual SvxEditSource * 	Clone () const{}
  virtual SvxTextForwarder * 	GetTextForwarder (){}
  virtual SvxViewForwarder * 	GetViewForwarder (){}
  virtual SvxEditViewForwarder * 	GetEditViewForwarder (sal_Bool bCreate=sal_False){}
  virtual void 	UpdateData (){}
  virtual SfxBroadcaster & 	GetBroadcaster () const{}
  virtual void 	addRange (SvxUnoTextRangeBase *pNewRange){}
  virtual void 	removeRange (SvxUnoTextRangeBase *pOldRange) {} 
  virtual const SvxUnoTextRangeBaseList & 	getRanges () const {}
};

namespace accessibility
{
    class AccessibleTextHelper_Impl;
    class AccessibleTextHelper
    {
    public:
        typedef ::std::vector< sal_Int16 > VectorOfStates;
        explicit AccessibleTextHelper( ::std::auto_ptr< SvxEditSource > pEditSource ) {}
        virtual ~AccessibleTextHelper() {}
    protected:
        AccessibleTextHelper( const AccessibleTextHelper& ) {}
        AccessibleTextHelper& operator= ( const AccessibleTextHelper& ) {}
    public:
        virtual const SvxEditSource& GetEditSource() const {}
        virtual void SetEditSource( ::std::auto_ptr< SvxEditSource > pEditSource ) {}
        virtual void SetEventSource( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible >& rInterface ) {}
        virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > GetEventSource() const {}
        virtual void SetOffset( const Point& rPoint ) {}
        virtual Point GetOffset() const {}
        virtual void SetStartIndex( sal_Int32 nOffset ) {}
        virtual sal_Int32 GetStartIndex() const {}
        void SetAdditionalChildStates( const VectorOfStates& rChildStates ) {}
        virtual void UpdateChildren() {}
        virtual void Dispose() {}
        virtual void SetFocus( sal_Bool bHaveFocus = sal_True ) {}
        virtual sal_Bool HaveFocus() {}
        virtual void FireEvent( const sal_Int16 nEventId,
                                const ::com::sun::star::uno::Any& rNewValue = ::com::sun::star::uno::Any(),
                                const ::com::sun::star::uno::Any& rOldValue = ::com::sun::star::uno::Any() ) const {}
        void FireEvent( const ::com::sun::star::accessibility::AccessibleEventObject& rEvent ) const {}
        virtual sal_Bool IsSelected() const {}
        virtual sal_Int32 GetChildCount() {}
        virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > GetChild( sal_Int32 i ) {}
        virtual void AddEventListener( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleEventListener >& xListener ) {}
        virtual void RemoveEventListener( const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleEventListener >& xListener ) {}
        virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > GetAt( const ::com::sun::star::awt::Point& aPoint ) {}
    private:
        const std::auto_ptr< AccessibleTextHelper_Impl > mpImpl;
    };
}


namespace accessibility {
class AccessibleShape;
}


namespace accessibility {
class AccessibleShape;
class AccessibleShapeTreeInfo;
}

namespace accessibility {
class IAccessibleParent
{
public:
    virtual ~IAccessibleParent (void){};
    virtual sal_Bool ReplaceChild (
        AccessibleShape* pCurrentChild,
        const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape >& _rxShape,
        const long _nIndex,
        const AccessibleShapeTreeInfo& _rShapeTreeInfo
    ) throw (::com::sun::star::uno::RuntimeException) = 0;
    virtual AccessibleControlShape* GetAccControlShapeFromModel
        (::com::sun::star::beans::XPropertySet*)
        throw (::com::sun::star::uno::RuntimeException){return __null;};
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessible>
        GetAccessibleCaption (const ::com::sun::star::uno::Reference<
            ::com::sun::star::drawing::XShape>&)
            throw (::com::sun::star::uno::RuntimeException){return __null;};
    virtual sal_Bool IsDocumentSelAll(){ return sal_False; }
};
}

namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleSelection : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual void SAL_CALL selectAccessibleChild( ::sal_Int32 nChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL isAccessibleChildSelected( ::sal_Int32 nChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual void SAL_CALL clearAccessibleSelection() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual void SAL_CALL selectAllAccessibleChildren() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getSelectedAccessibleChildCount() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild( ::sal_Int32 nSelectedChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual void SAL_CALL deselectAccessibleChild( ::sal_Int32 nChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    static ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0) {}
protected:
    ~XAccessibleSelection() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }

namespace accessibility {
class AccessibleShapeInfo;
    //class AccessibleShapeTreeInfo;
class IAccessibleParent;
/** This base class provides a base implementation for all shapes.  For more
    detailed documentation about the methods refer to the descriptions of
    the implemented interfaces.  These are, among others,
    XAccessible, <type>XAccessibleContext</type>,
    XAccessibleComponent and
    XAccessibleExtendedComponent.
    <p>The children of a shape can stem from two sources which, in case of
    SVX and SD shapes, are mutually exclusive.  This implementation,
    however, handles both simultaniously to cope with future extensions or
    shapes from other projects.
    <ul>
        <li>If this shape is a group shape, i.e. a
        SvxShapeGroup or a <type>Svx3DSceneObject</type>, it
        can have nested shapes.</li>
        <li>If this shape is a descendant from SvxShapeText
        then the text paragraphs are its children.</li>
    </ul>
    </p>
    <p>Accessible shapes do not listen for disposing() calls of the UNO
    shapes they make accessible.  This is the task of their owner, usually a
    container, who can then call dispose() at the accessible object.</p>
*/
class SVX_DLLPUBLIC AccessibleShape
    :   public AccessibleContextBase,
        public AccessibleComponentBase,
        public ::com::sun::star::accessibility::XAccessibleSelection,
        public ::com::sun::star::accessibility::XAccessibleExtendedAttributes,
        public ::com::sun::star::accessibility::XAccessibleGroupPosition,
        public com::sun::star::accessibility::XAccessibleHypertext,
        public IAccessibleViewForwarderListener,
        public ::com::sun::star::document::XEventListener,
        public ::com::sun::star::lang::XUnoTunnel
{
public:
    //=====  internal  ========================================================
    /** Create a new accessible object that makes the given shape accessible.
        @param rShapeInfo
            This object contains all information specific to the new
            accessible shape.  That are e.g. the shape to be made accessible
            and the accessible object that will become the parent of the new
            object.
        @param rShapeTreeInfo
            Bundel of information passed to this shape and all of its desendants.
        @attention
            Always call the <member>init</member> method after creating a
            new accessible shape.  This is one way to overcome the potential
            problem of registering the new object with e.g. event
            broadcasters.  That would delete the new object if a broadcaster
            would not keep a strong reference to the new object.
    */
  AccessibleShape() {}
  AccessibleShape (
                   const AccessibleShapeInfo& rShapeInfo,
                   const AccessibleShapeTreeInfo& rShapeTreeInfo) 
    : AccessibleContextBase()
    {}
  AccessibleShape (
                   const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape>& rxShape, const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible>& rxParent, const AccessibleShapeTreeInfo& rShapeTreeInfo, sal_Int32 nIndex = -1) {}
     //Solution: Overwrite the object's current name.
    virtual OUString SAL_CALL    getAccessibleName (void) throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL    getAccessibleDescription() throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleRelationSet> SAL_CALL getAccessibleRelationSet (void) throw (::com::sun::star::uno::RuntimeException) {}
//=====  XAccessibleSelection  ============================================
    virtual void SAL_CALL selectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
        ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Bool SAL_CALL isAccessibleChildSelected(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
        ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL clearAccessibleSelection(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL selectAllAccessibleChildren(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Int32 SAL_CALL getSelectedAccessibleChildCount(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
        ::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL deselectAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
        ::com::sun::star::uno::RuntimeException ) {}
    // ====== XAccessibleExtendedAttributes =====================================
    virtual ::com::sun::star::uno::Any SAL_CALL getExtendedAttributes()
    throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    /// Return this object's role.
    virtual sal_Int16 SAL_CALL getAccessibleRole (void) throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleGroupPosition  =========================================
    virtual ::com::sun::star::uno::Sequence< sal_Int32 > SAL_CALL
        getGroupPosition( const ::com::sun::star::uno::Any& rAny )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getObjectLink( const ::com::sun::star::uno::Any& accoject )
        throw (::com::sun::star::uno::RuntimeException) {}
    /** The destructor releases its children manager and text engine if
        still existent.  These are responsible to send appropriate events.
    */
    virtual ~AccessibleShape (void) {}
    /** Initialize a new shape.  See the documentation of the constructor
        for the reason of this method's existence.
    */
    virtual void Init (void) {}
    /** Compare two accessible shapes using object identity
        @param rShape
            This is the second operand.
        @return
            Returns true if both shapes are the same object.
    */
    virtual bool operator== (const AccessibleShape& rShape) {}
    /** Set the specified state.  If the state is <const>FOCUSED</const>
        then, additionally to the inherited functionality, the focus
        listeners registered with the XAccessibleComponent
        interface are called (if that state really changes).
        @param aState
            The state to turn on.
        @return
            The returned flag indicates whether the specified state has been
            changed (<TRUE/>), i.e. it has formerly not been set.
    */
    virtual sal_Bool SetState (sal_Int16 aState) {}
    /** Reset the specified state.  If the state is <const>FOCUSED</const>
        then, additionally to the inherited functionality, the focus
        listeners registered with the XAccessibleComponent
        interface are called (if that state really changes).
        @param aState
            The state to turn off.
        @return
            The returned flag indicates whether the specified state has been
            changed (<TRUE/>), i.e. it has formerly been set.
    */
    virtual sal_Bool ResetState (sal_Int16 aState) {}
    /** Return the state of the specified state.  Take the
        <const>FOCUSED</const> state from the accessible edit engine.
        @param aState
            The state for which to return its value.
        @return
            A value of <TRUE/> indicates that the state is set.  A <FALSE/>
            value indicates an unset state or the inability to access the
            entity that manages the state set.
    */
    sal_Bool GetState (sal_Int16 aState) {}
    //=====  XAccessibleContext  ==============================================
    /// Return the number of currently visible children.
    virtual sal_Int32 SAL_CALL
        getAccessibleChildCount (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Return the specified child.
        @param nIndex
            Index of the requested child.
        @return
            Reference of the requested child which is the accessible object
            of a visible shape.
        @raises IndexOutOfBoundsException
            Throws an exception if the index is not valid.
    */
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleChild (sal_Int32 nIndex)
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    /// Return the set of current states.
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleStateSet> SAL_CALL
        getAccessibleStateSet (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return this objects index among the parents children.
    virtual sal_Int32 SAL_CALL
        getAccessibleIndexInParent (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleComponent  ============================================
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible > SAL_CALL
        getAccessibleAtPoint (const ::com::sun::star::awt::Point& aPoint)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::awt::Rectangle SAL_CALL getBounds (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::awt::Point SAL_CALL getLocation (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::awt::Point SAL_CALL getLocationOnScreen (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::awt::Size SAL_CALL getSize (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getForeground (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getBackground (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleEventBroadcaster  =====================================
    /** This call is forwarded to a) the base class and b) to the
        accessible edit engine if it is present.
        @param rxListener
            This listener is informed about accessibility events.
    */
    virtual void SAL_CALL
        addAccessibleEventListener (
            const ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleEventListener >& rxListener)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** This call is forwarded to a) the base class and b) to the
        accessible edit engine if it is present.
        @param rxListener
            This listener will not be informed about accessibility events
            anymore.
    */
    virtual void SAL_CALL
        removeAccessibleEventListener (
            const ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleEventListener >& rxListener)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XInterface  ======================================================
    virtual com::sun::star::uno::Any SAL_CALL
        queryInterface (const com::sun::star::uno::Type & rType)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL
        acquire (void)
        throw () {}
    virtual void SAL_CALL
        release (void)
        throw () {}
    //=====  XServiceInfo  ====================================================
    /** Returns an identifier for the implementation of this object.
    */
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XTypeProvider  ===================================================
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type> SAL_CALL
        getTypes (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  IAccessibleViewForwarderListener  ================================
    virtual void ViewForwarderChanged (ChangeType aChangeType,
        const IAccessibleViewForwarder* pViewForwarder) {}
    //=====  lang::XEventListener  ============================================
    /** Listen for disposing events of the model.  The accessible shape
        remains functional when this happens.
    */
    virtual void SAL_CALL
        disposing (const ::com::sun::star::lang::EventObject& Source)
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  document::XEventListener  ========================================
    virtual void SAL_CALL
        notifyEvent (const ::com::sun::star::document::EventObject& rEventObject)
        throw (::com::sun::star::uno::RuntimeException) {}
    //===== XUnoTunnel ========================================================
    static const ::com::sun::star::uno::Sequence< sal_Int8 >&   getUnoTunnelImplementationId() throw() {}
    static AccessibleShape*                                     getImplementation( const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& _rxIFace ) throw() {}
    sal_Int64                                                   SAL_CALL getSomething( const ::com::sun::star::uno::Sequence< sal_Int8 >& _rIdentifier ) throw(::com::sun::star::uno::RuntimeException) {}
    //===== XAccessibleHypertext ========================================================
    virtual sal_Int32 SAL_CALL getHyperLinkCount()  throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink >
        SAL_CALL getHyperLink( sal_Int32 nLinkIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getHyperLinkIndex( sal_Int32 nCharIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    //=====  XAccesibleText  ==================================================
        virtual sal_Int32 SAL_CALL getCaretPosition(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual sal_Bool SAL_CALL setCaretPosition( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
        virtual sal_Unicode SAL_CALL getCharacter( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}//Shen Zhen Jie changed sal_Unicode to sal_uInt32; change back to sal_Unicode
        virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getCharacterAttributes( sal_Int32 nIndex, const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
        virtual ::com::sun::star::awt::Rectangle SAL_CALL getCharacterBounds( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
        virtual sal_Int32 SAL_CALL getCharacterCount(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual sal_Int32 SAL_CALL getIndexAtPoint( const ::com::sun::star::awt::Point& aPoint ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual OUString SAL_CALL getSelectedText(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual sal_Int32 SAL_CALL getSelectionStart(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual sal_Int32 SAL_CALL getSelectionEnd(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual sal_Bool SAL_CALL setSelection( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
        virtual OUString SAL_CALL getText(  ) throw (::com::sun::star::uno::RuntimeException) {}
        virtual OUString SAL_CALL getTextRange( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
        virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextAtIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
        virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBeforeIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
        virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBehindIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
        virtual sal_Bool SAL_CALL copyText( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    //===== Misc ========================================================
    ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape >
        GetXShape() {}
    /** set the index _nIndex at the accessible shape
        @param  _nIndex
            The new index in parent.
    */
    void setIndexInParent(sal_Int32 _nIndex) { m_nIndexInParent = _nIndex; }
protected:
    /// Children manager. May be empty if there are no children.
    ChildrenManager* mpChildrenManager;
    /// Reference to the actual shape.
    ::com::sun::star::uno::Reference<
        ::com::sun::star::drawing::XShape> mxShape;
    /** Bundle of information passed to all shapes in a document tree.
    */
    AccessibleShapeTreeInfo maShapeTreeInfo;
    /** Index that is appended to the object's name to disambiguate between
        different names with the otherwise same name.
    */
    long mnIndex;
    /** the index in parent.
    */
    sal_Int32 m_nIndexInParent;
    /** The accessible text engine.  May be NULL if it can not be created.
    */
    AccessibleTextHelper* mpText;
    /** This object can be used to modify the child list of our parent.
    */
    IAccessibleParent* mpParent;
    /** This object can be removed when we have an extra interface to ask if the shape is selected
    */
    SdrObject* m_pShape;
    /** This method is called from the component helper base class while
        disposing.
    */
    virtual void SAL_CALL disposing (void) {}
    /** Create a base name string that contains the accessible name.
    */
    virtual OUString
        CreateAccessibleBaseName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Create a unique name string that contains the accessible name.  The
        name consists of the base name and the index.
    */
    virtual OUString
        CreateAccessibleName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Create a description string that contains the accessible description.
    virtual OUString
        CreateAccessibleDescription (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString
       GetFullAccessibleName(AccessibleShape *shape)
       throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString GetStyle() {}
    void UpdateDocumentAllSelState(::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleStateSet > &xStateSet) {}
    /** Update the <const>OPAQUE</const> and <const>SELECTED</const> state.
    */
    virtual void UpdateStates (void) {}
private:
    /** Don't use the default constructor.  Use the public constructor that
        takes the original shape and the parent as arguments instead.
    */
    //explicit AccessibleShape (void) {}
    /// Don't use the copy constructor.  Is there any use for it?
    //explicit AccessibleShape (const AccessibleShape&) {}
    /// Don't use the assignment operator.  Do we need this?
    //AccessibleShape& operator= (const AccessibleShape&) {}
    //Old accessible name
    OUString aAccName;
    /** Call this method when the title, name, or description of the mxShape
        member (may) have been changed.
        This method adapts the name and description members of the
        AccessibleContextBase base class.
    */
    void UpdateNameAndDescription (void) {}
};
} // end of namespace accessibility

class SwAccessibleMap : 
    public ::accessibility::IAccessibleViewForwarder,
    public ::accessibility::IAccessibleParent
{
    mutable ::osl::Mutex maMutex;
    ::osl::Mutex maEventMutex;
    SwAccessibleContextMap_Impl *mpFrmMap;
    SwAccessibleShapeMap_Impl *mpShapeMap;
    SwShapeList_Impl *mpShapes;
    SwAccessibleEventList_Impl *mpEvents;
    SwAccessibleEventMap_Impl *mpEventMap;
    // #i27301 data structure to keep information about
    // accessible paragraph, which have a selection.
    SwAccessibleSelectedParas_Impl* mpSelectedParas;
    SwViewShell *mpVSh;
    /// for page preview: store preview data, VisArea, and mapping of
    /// preview-to-display coordinates
    SwAccPreviewData* mpPreview;
    ::com::sun::star::uno::WeakReference < ::com::sun::star::accessibility::XAccessible > mxCursorContext;
    sal_Int32 mnPara;
    bool mbShapeSelected;
  void FireEvent( const SwAccessibleEvent_Impl& rEvent );
  void AppendEvent( const SwAccessibleEvent_Impl& rEvent ) ;
  void InvalidateCursorPosition(const ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible>& rAcc );
  void DoInvalidateShapeSelection(sal_Bool bInvalidateFocusMode = sal_False);
  void InvalidateShapeSelection();
    //mpSelectedFrmMap contains the old selected objects.
    SwAccessibleContextMap_Impl *mpSeletedFrmMap;
    //IvalidateShapeInParaSelection() method is reponsible for the updating the selected states of the objects.
  void InvalidateShapeInParaSelection();
  void _InvalidateRelationSet( const SwFrm* pFrm, bool bFrom );
    ::com::sun::star::uno::Reference<  ::com::sun::star::accessibility::XAccessible>  _GetDocumentView( bool bPagePreview );
    /** method to build up a new data structure of the accessible pararaphs,
        which have a selection
        Important note: method has to used inside a mutual exclusive section
        @author OD
    */
    SwAccessibleSelectedParas_Impl* _BuildSelectedParas() ;
public:
  SwAccessibleMap( SwViewShell *pSh );
  ~SwAccessibleMap();
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> GetDocumentView();
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> GetDocumentPreview(const std::vector<PreviewPage*>& _rPreviewPages,const Fraction&  _rScale,const SwPageFrm* _pSelectedPageFrm,const Size&      _rPreviewWinSize );
    ::rtl::Reference < SwAccessibleContext > GetContextImpl(const SwFrm *pFrm,sal_Bool bCreate = sal_True );
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> GetContext(const SwFrm *pFrm,sal_Bool bCreate = sal_True );
    ::rtl::Reference < ::accessibility::AccessibleShape > GetContextImpl(
                                        const SdrObject *pObj,
                                        SwAccessibleContext *pParentImpl,
                                        sal_Bool bCreate = sal_True );
    ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible> GetContext(
                                        const SdrObject *pObj,
                                        SwAccessibleContext *pParentImpl,
                                        sal_Bool bCreate = sal_True );
    SwViewShell* GetShell() const
    {
        return mpVSh;
    }
  sal_Bool IsInSameLevel(const SdrObject* pObj, const SwFEShell* pFESh);
    void AddShapeContext(const SdrObject *pObj,
                         ::com::sun::star::uno::Reference < ::com::sun::star::accessibility::XAccessible > xAccShape);
    void AddGroupContext(const SdrObject *pParentObj,
                    ::com::sun::star::uno::Reference < ::com::sun::star::accessibility::XAccessible > xAccParent) ;
    void RemoveGroupContext(const SdrObject *pParentObj, ::com::sun::star::uno::Reference < ::com::sun::star::accessibility::XAccessible > xAccParent) ;
    const SwRect& GetVisArea() const ;
    /** get size of a dedicated preview page
        @author OD
        @param _nPreviewPageNum
        input parameter - physical page number of page visible in the page preview
        @return an object of class <Size>
    */
    Size GetPreviewPageSize( sal_uInt16 _nPreviewPageNum ) const ;
    void RemoveContext( const SwFrm *pFrm ) ;
    void RemoveContext( const SdrObject *pObj ) ;
    // Dispose frame and its children if bRecursive is set
    void Dispose( const SwFrm* pFrm,
                  const SdrObject* pObj,
                  Window* pWindow,
                  sal_Bool bRecursive = sal_False ) ;
    void InvalidatePosOrSize( const SwFrm* pFrm,
                              const SdrObject* pObj,
                              Window* pWindow,
                              const SwRect& rOldFrm ) ;
    void InvalidateContent( const SwFrm *pFrm ) ;
    void InvalidateAttr( const SwTxtFrm& rTxtFrm ) ;
    void InvalidateCursorPosition( const SwFrm *pFrm ) ;
    void InvalidateFocus() ;
    void FirePageChangeEvent(sal_uInt16 nOldPage, sal_uInt16 nNewPage) ;
    void FireSectionChangeEvent(sal_uInt16 nOldSection, sal_uInt16 nNewSection) ;
    void FireColumnChangeEvent(sal_uInt16 nOldColumn, sal_uInt16 nNewColumn) ;
    void SetCursorContext(
        const ::rtl::Reference < SwAccessibleContext >& rCursorContext ) ;
    // Invalidate state of whole tree. If an action is open, this call
    // is processed when the last action ends.
    void InvalidateStates( tAccessibleStates _nStates,
                           const SwFrm* _pFrm = 0 ) ;
    void InvalidateRelationSet( const SwFrm* pMaster, const SwFrm* pFollow ) ;
    /** invalidation CONTENT_FLOWS_FROM/_TO relation of a paragraph
        @author OD
        @param _rTxtFrm
        input parameter - reference to paragraph, whose CONTENT_FLOWS_FROM/_TO
        has to be invalidated.
        @param _bFrom
        input parameter - boolean indicating, if relation CONTENT_FLOWS_FROM
        (value <true>) or CONTENT_FLOWS_TO (value <false>) has to be invalidated.
    */
    void InvalidateParaFlowRelation( const SwTxtFrm& _rTxtFrm,
                                     const bool _bFrom ) ;
    /** invalidation of text selection of a paragraph
        @author OD
    */
    void InvalidateParaTextSelection( const SwTxtFrm& _rTxtFrm ) ;
    /** invalidation of text selection of all paragraphs
        @author OD
    */
    void InvalidateTextSelectionOfAllParas() ;
    sal_Int32 GetChildIndex( const SwFrm& rParentFrm,
                             Window& rChild ) const ;
    // update preview data (and fire events if necessary)
    void UpdatePreview( const std::vector<PreviewPage*>& _rPreviewPages,
                        const Fraction&  _rScale,
                        const SwPageFrm* _pSelectedPageFrm,
                        const Size&      _rPreviewWinSize ) ;
    void InvalidatePreviewSelection( sal_uInt16 nSelPage ) ;
    bool IsPageSelected( const SwPageFrm *pPageFrm ) const ;
    void FireEvents() ;
    // IAccessibleViewForwarder
    virtual sal_Bool IsValid() const ;
    virtual Rectangle GetVisibleArea() const ;
    virtual Point LogicToPixel (const Point& rPoint) const ;
    virtual Size LogicToPixel (const Size& rSize) const ;
    virtual Point PixelToLogic (const Point& rPoint) const ;
    virtual Size PixelToLogic (const Size& rSize) const ;
    virtual sal_Bool ReplaceChild (
        ::accessibility::AccessibleShape* pCurrentChild,
        const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape >& _rxShape,
        const long _nIndex,
        const ::accessibility::AccessibleShapeTreeInfo& _rShapeTreeInfo
    )   throw (::com::sun::star::uno::RuntimeException) ;
    virtual ::accessibility::AccessibleControlShape* GetAccControlShapeFromModel
        (::com::sun::star::beans::XPropertySet* pSet)
        throw (::com::sun::star::uno::RuntimeException) ;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible >   GetAccessibleCaption (
        const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape > & xShape)
    throw (::com::sun::star::uno::RuntimeException) ;
    // additional Core/Pixel conversions for internal use; also works
    // for preview
    Point PixelToCore (const Point& rPoint) const ;
    Rectangle CoreToPixel (const Rectangle& rRect) const ;
private:
    /** get mapping mode for LogicToPixel and PixelToLogic conversions
        Replacement method <PreviewAdjust(..)> by new method <GetMapMode>.
        Method returns mapping mode of current output device and adjusts it,
        if the shell is in page/print preview.
        Necessary, because <PreviewAdjust(..)> changes mapping mode at current
        output device for mapping logic document positions to page preview window
        positions and vice versa and doesn't take care to recover its changes.
        @author OD
        @param _rPoint
        input parameter - constant reference to point to determine the mapping
        mode adjustments for page/print preview.
        @param _orMapMode
        output parameter - reference to the mapping mode, which is determined
        by the method
    */
    void GetMapMode( const Point& _rPoint,
                     MapMode&     _orMapMode ) const ;
public:
    virtual sal_Bool IsDocumentSelAll() ;
    ::com::sun::star::uno::WeakReference < ::com::sun::star::accessibility::XAccessible >
        GetCursorContext() const { return mxCursorContext; }
    //Para Container for InvalidateCursorPosition
    typedef std::set< SwAccessibleParagraph* >  SET_PARA;
    SET_PARA m_setParaAdd;
    SET_PARA m_setParaRemove;
};

namespace com { namespace sun { namespace star { namespace awt {
    class XControl;
} } } }

namespace comphelper
{
    class OWrappedAccessibleChildrenManager;
}

class SdrObject;

namespace accessibility {
  typedef ::cppu::ImplHelper4 < ::com::sun::star::beans::XPropertyChangeListener
                                , ::com::sun::star::util::XModeChangeListener
                                , ::com::sun::star::container::XContainerListener
                                , ::com::sun::star::accessibility::XAccessibleEventListener
                                > AccessibleControlShape_Base;
}

class SdrObject;
namespace accessibility {
    typedef ::cppu::ImplHelper4 <   ::com::sun::star::beans::XPropertyChangeListener
                                ,   ::com::sun::star::util::XModeChangeListener
                                                ,   ::com::sun::star::container::XContainerListener
                                ,   ::com::sun::star::accessibility::XAccessibleEventListener
                                >   AccessibleControlShape_Base;
/** @descr
*/
class AccessibleControlShape:
        public AccessibleShape,
        public AccessibleControlShape_Base
{
public:
    //=====  internal  ========================================================
    AccessibleControlShape(
        const AccessibleShapeInfo& rShapeInfo,
        const AccessibleShapeTreeInfo& rShapeTreeInfo) {}
    virtual ~AccessibleControlShape( ) {}
    ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > SAL_CALL  GetControlModel( ) { return m_xControlModel;} ;
    AccessibleControlShape* SAL_CALL GetLabeledByControlShape() {}
protected:
    //---  XAccessible  ----------------------------------------
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleContext> SAL_CALL getAccessibleContext( ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XAccessibleComponent  -------------------------------
    /// forward the focus to the contained control(in alive mode)
    virtual void SAL_CALL grabFocus( ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XAccessibleContext  ---------------------------------
    virtual sal_Int32 SAL_CALL getAccessibleChildCount( ) throw(::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleChild( sal_Int32 i ) throw(::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleRelationSet > SAL_CALL getAccessibleRelationSet(  ) throw (::com::sun::star::uno::RuntimeException) {}
    //---  XServiceInfo  ---------------------------------------
    virtual OUString SAL_CALL getImplementationName( ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XInterface  -----------------------------------------
    DECLARE_XINTERFACE( )
    //---  XTypeProvider  --------------------------------------
    DECLARE_XTYPEPROVIDER( )
    //---  XPropertyChangeListener  ----------------------------
    virtual void SAL_CALL propertyChange( const ::com::sun::star::beans::PropertyChangeEvent& _rEvent ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XComponent  -----------------------------------------
    virtual void SAL_CALL disposing( ) {}
    //---  XEventListener  -------------------------------------
    virtual void SAL_CALL disposing(const ::com::sun::star::lang::EventObject& Source) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XModeChangeListener  --------------------------------
    virtual void SAL_CALL modeChanged( const ::com::sun::star::util::ModeChangeEvent& _rSource ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  XAccessibleEventListener ----------------------------
    virtual void SAL_CALL notifyEvent( const ::com::sun::star::accessibility::AccessibleEventObject& aEvent ) throw(::com::sun::star::uno::RuntimeException) {}
    //---  document::XEventListener ----------------------------
    using AccessibleShape::notifyEvent;
    // XVclContainerListener
    virtual void SAL_CALL elementInserted( const ::com::sun::star::container::ContainerEvent& Event ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL elementRemoved( const ::com::sun::star::container::ContainerEvent& Event ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL elementReplaced( const ::com::sun::star::container::ContainerEvent& Event ) throw (::com::sun::star::uno::RuntimeException) {}
protected:
    /** Initialize a new shape.  See the documentation of the base' constructor
        for the reason of this method's existence.
    */
    virtual void Init( ) {}
    /// Create a name string that contains the accessible name.
    virtual OUString
        CreateAccessibleBaseName( )
        throw(::com::sun::star::uno::RuntimeException) {}
    /** Create a unique name string that contains the accessible name.  The
        name consists of the base name and the index.
    */
    virtual OUString
        CreateAccessibleName( )
        throw(::com::sun::star::uno::RuntimeException) {}
    /// Create a description string that contains the accessible description.
    virtual OUString
        CreateAccessibleDescription( )
        throw(::com::sun::star::uno::RuntimeException) {}
#ifdef DBG_UTIL
    /// Set the specified state
    virtual sal_Bool SetState( sal_Int16 _nState ) {}
#endif // DBG_UTIL
    /// (safely) reads the given property from the model of the UNO control
    OUString getControlModelStringProperty( const OUString& _rPropertyName ) const SAL_THROW(( )) {}
    /// ensure that our control model exists(will be retrieved upon need only)
    sal_Bool ensureControlModelAccess( ) SAL_THROW(( )) {}
    /// ensures that we're listening for the given property if(and only if!) necessary
    bool ensureListeningState( const bool _bCurrentlyListening, const bool _bNeedNewListening,
                const OUString& _rPropertyName ) {}
    /// starts multiplexing the state changes of our aggregate context
    void    startStateMultiplexing( ) {}
    /// stops multiplexing the state changes of our aggregate context
    void    stopStateMultiplexing( ) {}
    /// retrieves the SdrObject of the shape we represent
    SdrObject*  getSdrObject( ) const {}
    /** adjusts our AccessibleRole, depending on the control type we're working for
        <p>Only to be called during inituialization</p>
    */
    void        adjustAccessibleRole( ) {}
    /** initializes composed states of the context
        <p>Some of the states of our inner context need to be propagated to the "composed context", too
        (such as "checked" for check boxes). At lifetime, this is done by multiplexing state changes,
        at initialization time, this method is used.</p>
    */
    void        initializeComposedState( ) {}
private:
    ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet >
                    m_xControlModel;
    ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySetInfo >
                    m_xModelPropsMeta;          // cache this for performance reasons
    ::com::sun::star::uno::Reference< ::com::sun::star::awt::XControl >
                    m_xUnoControl;              // our UNO control
    ::com::sun::star::uno::WeakReference< ::com::sun::star::accessibility::XAccessibleContext >
                    m_aControlContext;      // the AccessibleContext of the control
    ::com::sun::star::uno::Reference< ::com::sun::star::uno::XAggregation >
                    m_xControlContextProxy; // the proxy for "aggregating" the AccessibleContext of the control
    ::com::sun::star::uno::Reference< ::com::sun::star::lang::XTypeProvider >
                    m_xControlContextTypeAccess;    // cached interface of our aggregate
    ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent >
                    m_xControlContextComponent;     // cached interface of our aggregate
    ::comphelper::OWrappedAccessibleChildrenManager*
                    m_pChildManager;
    bool        m_bListeningForName     : 1;    // are we currently listening for changes of the "Name" property?
    bool        m_bListeningForDesc     : 1;    // are we currently listening for changes of the "HelpText" property?
    bool        m_bMultiplexingStates   : 1;    // are we currently multiplexing state changes of the native context?
    bool        m_bDisposeNativeContext : 1;    // do we need to dispose mxNativeContextComponent?
    bool        m_bWaitingForControl    : 1;    // if we are created before our control exists, we need to wait for it to appear ...
private:
    /** Don't use the default constructor.  Use the public constructor that
        takes the original shape and the parent as arguments instead.
    */
    AccessibleControlShape( ) {}
    /// Don't use the constructor. not implemented.
    AccessibleControlShape(const AccessibleControlShape&) {}
    /// Don't use the assignment operator. not implemented.
    AccessibleControlShape& operator= (const AccessibleControlShape&) {}
};
} // end of namespace accessibility



namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleTextMarkup : public ::com::sun::star::accessibility::XAccessibleText
{
public:
    // Methods
    virtual ::sal_Int32 SAL_CALL getTextMarkupCount( ::sal_Int32 TextMarkupType ) /* throw (::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextMarkup( ::sal_Int32 TextMarkupIndex, ::sal_Int32 TextMarkupType ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::accessibility::TextSegment > SAL_CALL getTextMarkupAtIndex( ::sal_Int32 CharIndex, ::sal_Int32 TextMarkupType ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    static ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0) {}
protected:
    ~XAccessibleTextMarkup() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }

namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleTextAttributes : public ::com::sun::star::uno::XInterface
{
public:
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getDefaultAttributes( const ::com::sun::star::uno::Sequence< ::rtl::OUString >& RequestedAttributes ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getRunAttributes( ::sal_Int32 Index, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& RequestedAttributes ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    static ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0){}
protected:
    ~XAccessibleTextAttributes() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }


namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleValue : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::com::sun::star::uno::Any SAL_CALL getCurrentValue() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL setCurrentValue( const ::com::sun::star::uno::Any& aNumber ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Any SAL_CALL getMaximumValue() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Any SAL_CALL getMinimumValue() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    static  ::com::sun::star::uno::Type const & SAL_CALL static_type(void * = 0) {}
protected:
    ~XAccessibleValue() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }


namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {
struct theIllegalAccessibleComponentStateExceptionType : public 
rtl::StaticWithInit< ::com::sun::star::uno::Type *, theIllegalAccessibleComponentStateExceptionType >
{
    ::com::sun::star::uno::Type * operator()() const    {}
};
} } } } }


namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleComponent : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::sal_Bool SAL_CALL containsPoint( const ::com::sun::star::awt::Point& Point ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleAtPoint( const ::com::sun::star::awt::Point& Point ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::awt::Rectangle SAL_CALL getBounds() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::awt::Point SAL_CALL getLocation() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::awt::Point SAL_CALL getLocationOnScreen() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::awt::Size SAL_CALL getSize() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual void SAL_CALL grabFocus() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getForeground() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getBackground() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleComponent() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }

namespace com { namespace sun { namespace star { namespace accessibility { namespace detail {
struct theAccessibleEventObjectType : public rtl::StaticWithInit< ::com::sun::star::uno::Type *, theAccessibleEventObjectType >
{
    ::com::sun::star::uno::Type * operator()() const    {    }
};
} } } } }

namespace com { namespace sun { namespace star { namespace accessibility {
class  XAccessibleMultiLineText : public ::com::sun::star::accessibility::XAccessibleText
{
public:
    // Methods
    virtual ::sal_Int32 SAL_CALL getLineNumberAtIndex( ::sal_Int32 nIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextAtLineNumber( ::sal_Int32 nLineNo ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextAtLineWithCaret() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getNumberOfLineWithCaret() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleMultiLineText() throw () {} // avoid warnings about virtual members and non-virtual dtor
};  }}}}      

namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleTable : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::sal_Int32 SAL_CALL getAccessibleRowCount() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleColumnCount() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::rtl::OUString SAL_CALL getAccessibleRowDescription( ::sal_Int32 nRow ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::rtl::OUString SAL_CALL getAccessibleColumnDescription( ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleRowExtentAt( ::sal_Int32 nRow, ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleColumnExtentAt( ::sal_Int32 nRow, ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< 
      ::com::sun::star::accessibility::XAccessibleTable > SAL_CALL getAccessibleRowHeaders() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleTable > SAL_CALL getAccessibleColumnHeaders() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Sequence< ::sal_Int32 > SAL_CALL getSelectedAccessibleRows() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Sequence< ::sal_Int32 > SAL_CALL getSelectedAccessibleColumns() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL isAccessibleRowSelected( ::sal_Int32 nRow ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL isAccessibleColumnSelected( ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleCellAt( ::sal_Int32 nRow, ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleCaption() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleSummary() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL isAccessibleSelected( ::sal_Int32 nRow, ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleIndex( ::sal_Int32 nRow, ::sal_Int32 nColumn ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleRow( ::sal_Int32 nChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getAccessibleColumn( ::sal_Int32 nChildIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleTable() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }


namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleEditableText : public ::com::sun::star::accessibility::XAccessibleText
{
public:
    // Methods
    virtual ::sal_Bool SAL_CALL cutText( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL pasteText( ::sal_Int32 nIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL deleteText( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL insertText( const ::rtl::OUString& sText, ::sal_Int32 nIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL replaceText( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex, const ::rtl::OUString& sReplacement ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL setAttributes( ::sal_Int32 nStartIndex, ::sal_Int32 nEndIndex, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aAttributeSet ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL setText( const ::rtl::OUString& sText ) /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleEditableText() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
      }}}}

namespace com { namespace sun { namespace star { namespace accessibility {
class XAccessibleTextSelection : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::sal_Bool SAL_CALL scrollToPosition( const ::com::sun::star::awt::Point& aPoint, ::sal_Bool isLeftTop ) /* throw (::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getSelectedPortionCount() /* throw (::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getSeletedPositionStart( ::sal_Int32 nSelectedPortionIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL getSeletedPositionEnd( ::sal_Int32 nSelectedPortionIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Int32 SAL_CALL addSelection( ::sal_Int32 selectionIndex, ::sal_Int32 startOffset, ::sal_Int32 endOffset ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL removeSelection( ::sal_Int32 selectionIndex ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleTextSelection() throw () {} // avoid warnings about virtual members and non-virtual dtor
};
} } } }

// Any method of this class must be called with an acquired solar mutex!
class SwAccessibleFrame
{
    SwRect maVisArea;
    const SwFrm* mpFrm;
    const sal_Bool mbIsInPagePreview;
protected:
    // #i77106# - method needs to be called by new class <SwAccessibleTableColHeaders>
    static sal_Int32 GetChildCount( SwAccessibleMap& rAccMap,
                                    const SwRect& rVisArea,
                                    const SwFrm *pFrm,
                                    sal_Bool bInPagePreviewr ) {}
// private:
    static sw::access::SwAccessibleChild GetChild( SwAccessibleMap& rAccMap,
                                                   const SwRect& rVisArea,
                                                   const SwFrm& rFrm,
                                                   sal_Int32& rPos,
                                                   sal_Bool bInPagePreview) {}
    static sal_Bool GetChildIndex( SwAccessibleMap& rAccMap,
                                   const SwRect& rVisArea,
                                   const SwFrm& rFrm,
                                   const sw::access::SwAccessibleChild& rChild,
                                   sal_Int32& rPos,
                                   sal_Bool bInPagePreview ) {}
    static sw::access::SwAccessibleChild GetChildAtPixel( const SwRect& rVisArea,
                                                          const SwFrm& rFrm,
                                                          const Point& rPos,
                                                          sal_Bool bInPagePreview,
                                                          SwAccessibleMap& rAccMap ) {}
    static void GetChildren( SwAccessibleMap& rAccMap,
                             const SwRect& rVisArea,
                             const SwFrm& rFrm,
                             ::std::list< sw::access::SwAccessibleChild >& rChildren,
                             sal_Bool bInPagePreview ) {}
protected:
  sal_Bool IsEditable( SwViewShell *pVSh ) const {}
  sal_Bool IsOpaque( SwViewShell *pVSh ) const {}
  sal_Bool IsShowing( const SwAccessibleMap& rAccMap,
                      const sw::access::SwAccessibleChild& rFrmOrObj ) const {}
  sal_Bool IsShowing( const SwRect& rFrm ) const{}
  sal_Bool IsShowing( const SwAccessibleMap& rAccMap ) const{}
  sal_Bool IsInPagePreview() const    {        return mbIsInPagePreview;    }
  void ClearFrm()    {        mpFrm = 0;    }
  SwAccessibleFrame( const SwRect& rVisArea,
                     const SwFrm *pFrm,
                     sal_Bool bIsPagePreview )
    :mbIsInPagePreview(bIsPagePreview)
  {}
  virtual ~SwAccessibleFrame() {}
  // MT: Move to private area?
  sal_Bool bIsAccDocUse;
public:

  SwAccessibleFrame():
    mbIsInPagePreview(0)
  {} // added an empty constructor

  // Return the SwFrm this context is attached to.
  const SwFrm* GetFrm() const { return mpFrm; };
  static const SwFrm* GetParent( const sw::access::SwAccessibleChild& rFrmOrObj,
                                   sal_Bool bInPagePreview ) {}
    sal_Int32 GetChildIndex( SwAccessibleMap& rAccMap,
                             const sw::access::SwAccessibleChild& rChild ) const {}
protected:
    // Return the bounding box of the frame clipped to the vis area. If
    // no frame is specified, use this' frame.
    SwRect GetBounds( const SwAccessibleMap& rAccMap,
                      const SwFrm *pFrm = 0 ) {}
    // Return the upper that has a context attached. This might be
    // another one than the immediate upper.
     const SwFrm *GetParent() const {}
    // Return the lower count or the nth lower, there the lowers have a
    // not be same one as the SwFrm's lowers
    sal_Int32 GetChildCount( SwAccessibleMap& rAccMap ) const {}
    sw::access::SwAccessibleChild GetChild( SwAccessibleMap& rAccMap,
                                            sal_Int32 nPos ) const {}
    sw::access::SwAccessibleChild GetChildAtPixel( const Point& rPos,
                                                   SwAccessibleMap& rAccMap ) const {}
    void GetChildren( SwAccessibleMap& rAccMap,
                      ::std::list< sw::access::SwAccessibleChild >& rChildren ) const {}
     void SetVisArea( const SwRect& rNewVisArea )
    {
        maVisArea = rNewVisArea;
    }
     const SwRect& GetVisArea() const
    {
        return maVisArea;
    }
    OUString GetFormattedPageNumber() const {}
};

class SwAccessibleContext :
    public ::cppu::WeakImplHelper5<
                ::com::sun::star::accessibility::XAccessible,
                ::com::sun::star::accessibility::XAccessibleContext,
                ::com::sun::star::accessibility::XAccessibleComponent,
                ::com::sun::star::accessibility::XAccessibleEventBroadcaster,
                ::com::sun::star::lang::XServiceInfo
                >,
    public SwAccessibleFrame
{
    // The implements for the XAccessibleSelection interface has been
    // 'externalized' and wants access to the protected members like
    // GetMap, GetChild, GetParent, and GetFrm.
    friend class SwAccessibleSelectionHelper;
protected:
    mutable ::osl::Mutex aListenerMutex;
    mutable ::osl::Mutex aMutex;
private:
    OUString sName;  // immutable outside constructor
    // The parent if it has been retrieved. This is always an
    // SwAccessibleContext. (protected by Mutex)
    ::com::sun::star::uno::WeakReference <
        ::com::sun::star::accessibility::XAccessible > xWeakParent;
    SwAccessibleMap *pMap;  // must be protected by solar mutex
    sal_uInt32 nClientId;   // client id in the AccessibleEventNotifier queue
    sal_Int16 nRole;        // immutable outside constructor
    // The current states (protected by mutex)
    sal_Bool bIsShowingState : 1;
    sal_Bool bIsEditableState : 1;
    sal_Bool bIsOpaqueState : 1;
    sal_Bool bIsDefuncState : 1;
    // Are we currently disposing that object (protected by solar mutex)?
    sal_Bool bDisposing : 1;
    // #i85634# - boolean, indicating if the accessible context is
    // in general registered at the accessible map.
    bool bRegisteredAtAccessibleMap;
  void InitStates();// 
    //Add a member to identify the firt time that document load
    sal_Bool bBeginDocumentLoad;
protected:
  template <class T> Any queryInterface(T){}
  void SetName( const OUString& rName ) { sName = rName; }
  sal_Int16 GetRole() const
  {
    return nRole;
  }  
  //Add a member to identify if the document is Asyn load.
  sal_Bool isIfAsynLoad;
    //This flag is used to mark the object's selected state.
    sal_Bool   bIsSeletedInDoc;
  void SetParent( SwAccessibleContext *pParent );
  ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> GetWeakParent() const;
    sal_Bool IsDisposing() const { return bDisposing; }
  Window *GetWindow() ;
    SwAccessibleMap *GetMap() { return pMap; }
    const SwAccessibleMap *GetMap() const { return pMap; }
    /** convenience method to get the SwViewShell through accessibility map */
     SwViewShell* GetShell()  { return GetMap()->GetShell();    }
  const SwViewShell* GetShell() const {  return GetMap()->GetShell();  }
    /** convenience method to get SwCrsrShell through accessibility map
     * @returns SwCrsrShell, or NULL if none is found */
  SwCrsrShell* GetCrsrShell();
  const SwCrsrShell* GetCrsrShell() const;
    // Notify all children that the vis araea has changed.
    // The SwFrm might belong to the current object or to any other child or
    // grandchild.
  void ChildrenScrolled( const SwFrm *pFrm, const SwRect& rOldVisArea );
    // The context's showing state changed. May only be called for context that
    // exist even if they aren't visible.
  void Scrolled( const SwRect& rOldVisArea ) ;
  // A child has been moved while setting the vis area
  void ScrolledWithin( const SwRect& rOldVisArea );
    // The has been added while setting the vis area
  void ScrolledIn();
    // The context has to be removed while setting the vis area
  void ScrolledOut( const SwRect& rOldVisArea );
    // Invalidate the states of all children of the specified SwFrm. The
    // SwFrm might belong the current object or to any child or grandchild!
    // #i27301# - use new type definition for <_nStates>
    void InvalidateChildrenStates( const SwFrm* _pFrm,
                                   tAccessibleStates _nStates );
    // Dispose children of the specified SwFrm. The SwFrm might belong to
    // the current object or to any other child or grandchild.
  void DisposeChildren( const SwFrm *pFrm,sal_Bool bRecursive );
  void DisposeShape( const SdrObject *pObj,::accessibility::AccessibleShape *pAccImpl ) ;
  void ScrolledInShape( const SdrObject *pObj,::accessibility::AccessibleShape *pAccImpl ) ;
  virtual void _InvalidateContent( sal_Bool bVisibleDataFired );
  virtual void _InvalidateCursorPos();
  virtual void _InvalidateFocus();
public:
    void SetMap(SwAccessibleMap *pM){pMap = pM;}
  void FireAccessibleEvent( ::com::sun::star::accessibility::AccessibleEventObject& rEvent );
protected:
    // broadcast visual data event
  void FireVisibleDataEvent();
    // broadcast state change event
  void FireStateChangedEvent( sal_Int16 nState, sal_Bool bNewState );
    // Set states for getAccessibleStateSet.
    // This base class sets DEFUNC(0/1), EDITABLE(0/1), ENABLED(1),
    // SHOWING(0/1), OPAQUE(0/1) and VISIBLE(1).
  virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet );
  sal_Bool IsEditableState();
    virtual ::com::sun::star::awt::Rectangle SAL_CALL    getBoundsImpl(sal_Bool bRelative)        throw (::com::sun::star::uno::RuntimeException);
    // #i85634#
     void NotRegisteredAtAccessibleMap()
    {
        bRegisteredAtAccessibleMap = false;
    }
  void RemoveFrmFromAccessibleMap() ;

public:
  ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > getTypes(){}
  SwAccessibleContext(){}
  virtual ~SwAccessibleContext();
  SwAccessibleContext( SwAccessibleMap *pMap, sal_Int16 nRole, const SwFrm *pFrm );
    // XAccessible
    // Return the XAccessibleContext.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleContext> SAL_CALL
    getAccessibleContext (void) throw (com::sun::star::uno::RuntimeException);
    // XAccessibleContext
    // Return the number of currently visible children.
  virtual sal_Int32 SAL_CALL getAccessibleChildCount (void) throw (::com::sun::star::uno::RuntimeException);
    // Return the specified child or NULL if index is invalid.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
    getAccessibleChild (sal_Int32 nIndex)      throw (::com::sun::star::uno::RuntimeException,              ::com::sun::star::lang::IndexOutOfBoundsException) ;
    // Return a reference to the parent.
  virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL getAccessibleParent (void)      throw (::com::sun::star::uno::RuntimeException);
    // Return this objects index among the parents children.
  virtual sal_Int32 SAL_CALL      getAccessibleIndexInParent (void)        throw (::com::sun::star::uno::RuntimeException);
    // Return this object's role.
  virtual sal_Int16 SAL_CALL     getAccessibleRole (void)      throw (::com::sun::star::uno::RuntimeException);
    // Return this object's description.
  virtual OUString SAL_CALL        getAccessibleDescription (void)     throw (::com::sun::star::uno::RuntimeException);
    // Return the object's current name.
  virtual OUString SAL_CALL        getAccessibleName (void)        throw (::com::sun::star::uno::RuntimeException);
    // Return NULL to indicate that an empty relation set.
    virtual ::com::sun::star::uno::Reference<
      ::com::sun::star::accessibility::XAccessibleRelationSet> SAL_CALL    getAccessibleRelationSet (void)       throw (::com::sun::star::uno::RuntimeException) ;
    // Return the set of current states.
    virtual ::com::sun::star::uno::Reference<  ::com::sun::star::accessibility::XAccessibleStateSet> SAL_CALL        getAccessibleStateSet (void)      throw (::com::sun::star::uno::RuntimeException);
    /** Return the parents locale or throw exception if this object has no
        parent yet/anymore. */
  virtual ::com::sun::star::lang::Locale SAL_CALL        getLocale (void)        throw (::com::sun::star::accessibility::IllegalAccessibleComponentStateException, ::com::sun::star::uno::RuntimeException) ;
    // XAccessibleEventBroadcaster
  virtual void SAL_CALL addAccessibleEventListener(            const ::com::sun::star::uno::Reference<                ::com::sun::star::accessibility::XAccessibleEventListener >& xListener )        throw (::com::sun::star::uno::RuntimeException) ;
  virtual void SAL_CALL removeAccessibleEventListener(            const ::com::sun::star::uno::Reference<                ::com::sun::star::accessibility::XAccessibleEventListener >& xListener )        throw (::com::sun::star::uno::RuntimeException) ;
    // XAccessibleComponent
  virtual sal_Bool SAL_CALL containsPoint(            const ::com::sun::star::awt::Point& aPoint )        throw (::com::sun::star::uno::RuntimeException);
  virtual ::com::sun::star::uno::Reference<        ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleAtPoint(                const ::com::sun::star::awt::Point& aPoint )        throw (::com::sun::star::uno::RuntimeException) ;
  virtual ::com::sun::star::awt::Rectangle SAL_CALL getBounds()        throw (::com::sun::star::uno::RuntimeException);
  virtual ::com::sun::star::awt::Point SAL_CALL getLocation()        throw (::com::sun::star::uno::RuntimeException);
  virtual ::com::sun::star::awt::Point SAL_CALL getLocationOnScreen()        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Size SAL_CALL getSize()      throw (::com::sun::star::uno::RuntimeException) ;
    virtual void SAL_CALL grabFocus()     throw (::com::sun::star::uno::RuntimeException) ;
    virtual ::com::sun::star::uno::Any SAL_CALL getAccessibleKeyBinding()      throw (::com::sun::star::uno::RuntimeException) ;
    virtual sal_Int32 SAL_CALL getForeground()      throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getBackground()      throw (::com::sun::star::uno::RuntimeException) ;
    // XServiceInfo
    /** Returns an identifier for the implementation of this object. */
    virtual OUString SAL_CALL        getImplementationName (void)      throw (::com::sun::star::uno::RuntimeException);
    /** Return whether the specified service is supported by this class. */
  virtual sal_Bool SAL_CALL        supportsService (const OUString& sServiceName)        throw (::com::sun::star::uno::RuntimeException);
    /** Returns a list of all supported services.  In this case that is just
        the AccessibleContext service. */
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL    getSupportedServiceNames (void)             throw (::com::sun::star::uno::RuntimeException);
    // thread safe C++ interface
    // The object is not visible an longer and should be destroyed
  virtual void Dispose( sal_Bool bRecursive = sal_False ) ;
    // The child object is not visible an longer and should be destroyed
  virtual void DisposeChild( const sw::access::SwAccessibleChild& rFrmOrObj, sal_Bool bRecursive ) ;
    // The object has been moved by the layout
  virtual void InvalidatePosOrSize( const SwRect& rFrm ) ;
    // The vhild object has been moved by the layout
  virtual void InvalidateChildPosOrSize( const sw::access::SwAccessibleChild& rFrmOrObj,                                           const SwRect& rFrm ) ;
    // The content may have changed (but it hasn't tohave changed)
  void InvalidateContent() ;
    // The caretPos has changed
  void InvalidateCursorPos() ;
    // The Focus state has changed
  void InvalidateFocus() ;
    // Check states
    // #i27301# - use new type definition for <_nStates>
  void InvalidateStates( tAccessibleStates _nStates ) ;
    // the XAccessibleRelationSet may have changed
  void InvalidateRelation( sal_uInt16 nType ) ;
  void InvalidateTextSelection() ; // #i27301# - text selection has changed
  void InvalidateAttr() ; // #i88069# - attributes has changed
  bool HasAdditionalAccessibleChildren() ;
    // #i88070# - get additional child by index
  Window* GetAdditionalAccessibleChild( const sal_Int32 nIndex ) ;
    // #i88070# - get all additional accessible children
  void GetAdditionalAccessibleChildren( std::vector< Window* >* pChildren ) ;
    const OUString& GetName() const { return sName; }
  virtual sal_Bool HasCursor() ;   // required by map to remember that object
  sal_Bool Select( SwPaM *pPaM, SdrObject *pObj, sal_Bool bAdd ) ;
     sal_Bool Select( SwPaM& rPaM )    {      return Select( &rPaM, 0, sal_False );    }
     sal_Bool Select( SdrObject *pObj, sal_Bool bAdd )    {        return Select( 0, pObj, bAdd );    }
  //This method is used to updated the selected state and fire the selected state changed event.
  virtual sal_Bool SetSelectedState(sal_Bool bSeleted);
  sal_Bool  IsSeletedInDoc(){  return bIsSeletedInDoc; }
  static OUString GetResource( sal_uInt16 nResId,                                        const OUString *pArg1 = 0,                                 const OUString *pArg2 = 0 );
};


static SwAccessibleContext UnusedSwAccessibleContext;

class SwAccessibleSelectionHelper
{
    /// the context on which this helper works
    SwAccessibleContext& rContext;
    /// get FE-Shell
    SwFEShell* GetFEShell() {}
    void throwIndexOutOfBoundsException()
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException ) {}
public:
  SwAccessibleSelectionHelper():
    rContext(UnusedSwAccessibleContext){}

  SwAccessibleSelectionHelper( SwAccessibleContext& rContext ): 
    rContext(rContext) {}

    ~SwAccessibleSelectionHelper() {}
    //=====  XAccessibleSelection  ============================================
    void selectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    sal_Bool isAccessibleChildSelected(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    void clearAccessibleSelection(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    void selectAllAccessibleChildren(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    sal_Int32 getSelectedAccessibleChildCount(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > getSelectedAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    // index has to be treated as global child index.
    void deselectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
};


class SwAccessibleTable;
class SwAccessibleCell : public SwAccessibleContext,
                  ::com::sun::star::accessibility::XAccessibleValue,
                  ::com::sun::star::accessibility::XAccessibleSelection,
                    public  ::com::sun::star::accessibility::XAccessibleExtendedAttributes
{
    // Implementation for XAccessibleSelection interface
    SwAccessibleSelectionHelper aSelectionHelper;
    sal_Bool    bIsSelected;    // protected by base class mutex
  sal_Bool    IsSelected();
  sal_Bool _InvalidateMyCursorPos() ;
  sal_Bool _InvalidateChildrenCursorPos( const SwFrm *pFrm );
    rtl::Reference<SwAccessibleTable> m_pAccTable;
protected:
    // Set states for getAccessibleStateSet.
    // This drived class additionaly sets SELECTABLE(1) and SELECTED(+)
  virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet ) ;
  virtual void _InvalidateCursorPos() ;
  virtual ~SwAccessibleCell() ;
public:
  SwAccessibleCell( SwAccessibleMap* pInitMap, const SwCellFrm *pCellFrm ) ;
  virtual sal_Bool HasCursor() ;  // required by map to remember that object
    // XAccessibleContext
    /// Return this object's description.
    virtual OUString SAL_CALL    getAccessibleDescription (void)        throw (com::sun::star::uno::RuntimeException) ;
    // XServiceInfo
    // Returns an identifier for the implementation of this object.
    virtual OUString SAL_CALL    getImplementationName (void)        throw (::com::sun::star::uno::RuntimeException) ;
    // Return whether the specified service is supported by this class.
    virtual sal_Bool SAL_CALL    supportsService (const OUString& sServiceName)        throw (::com::sun::star::uno::RuntimeException) ;
    // Returns a list of all supported services.  In this case that is just
    // the AccessibleContext service.
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL    getSupportedServiceNames (void)        throw (::com::sun::star::uno::RuntimeException) ;
  virtual void Dispose( sal_Bool bRecursive = sal_False ) ;
  virtual void InvalidatePosOrSize( const SwRect& rFrm ) ;
    // XInterface
    // (XInterface methods need to be implemented to disambiguate
    // between those inherited through SwAcessibleContext and
    // XAccessibleValue).
  virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(        const ::com::sun::star::uno::Type& aType )        throw (::com::sun::star::uno::RuntimeException);
    virtual void SAL_CALL acquire(  ) throw ()
  {// SwAccessibleContext::acquire() {} 
  };
    virtual void SAL_CALL release(  ) throw ()
  { //SwAccessibleContext::release() {} 
  };
    // XTypeProvider
  virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > SAL_CALL getTypes(  ) throw(::com::sun::star::uno::RuntimeException) ;
  virtual ::com::sun::star::uno::Sequence< sal_Int8 > SAL_CALL getImplementationId(  ) throw(::com::sun::star::uno::RuntimeException);
    // XAccessibleValue
    //=====  XAccessibleExtendedAttributes ================================================
    ::com::sun::star::uno::Any SAL_CALL getExtendedAttributes()
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
private:
  SwFrmFmt* GetTblBoxFormat() const ;
public:
  virtual ::com::sun::star::uno::Any SAL_CALL getCurrentValue( )        throw (::com::sun::star::uno::RuntimeException);
  virtual sal_Bool SAL_CALL setCurrentValue(        const ::com::sun::star::uno::Any& aNumber )        throw (::com::sun::star::uno::RuntimeException);
  virtual ::com::sun::star::uno::Any SAL_CALL getMaximumValue(  )        throw (::com::sun::star::uno::RuntimeException) ;
  virtual ::com::sun::star::uno::Any SAL_CALL getMinimumValue(  )        throw (::com::sun::star::uno::RuntimeException) ;
    //=====  XAccessibleComponent  ============================================
  sal_Int32 SAL_CALL getBackground()        throw (::com::sun::star::uno::RuntimeException) ;
    //=====  XAccessibleSelection  ============================================
  virtual void SAL_CALL selectAccessibleChild(        sal_Int32 nChildIndex )        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,                ::com::sun::star::uno::RuntimeException ) ;
  virtual sal_Bool SAL_CALL isAccessibleChildSelected(        sal_Int32 nChildIndex )        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,                ::com::sun::star::uno::RuntimeException ) ;
  virtual void SAL_CALL clearAccessibleSelection(  )        throw ( ::com::sun::star::uno::RuntimeException ) ;
  virtual void SAL_CALL selectAllAccessibleChildren(  )        throw ( ::com::sun::star::uno::RuntimeException ) ;
  virtual sal_Int32 SAL_CALL getSelectedAccessibleChildCount(  )        throw ( ::com::sun::star::uno::RuntimeException );
  virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild(       sal_Int32 nSelectedChildIndex )        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,                ::com::sun::star::uno::RuntimeException) ;
  virtual void SAL_CALL deselectAccessibleChild( sal_Int32 nSelectedChildIndex )       throw ( ::com::sun::star::lang::IndexOutOfBoundsException,                ::com::sun::star::uno::RuntimeException );
};

namespace com { namespace sun { namespace star { namespace accessibility {
class SAL_NO_VTABLE XAccessibleTableSelection : public ::com::sun::star::uno::XInterface
{
public:
    // Methods
    virtual ::sal_Bool SAL_CALL selectRow( ::sal_Int32 row ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL unselectRow( ::sal_Int32 row ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL selectColumn( ::sal_Int32 column ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
    virtual ::sal_Bool SAL_CALL unselectColumn( ::sal_Int32 column ) /* throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException, ::std::exception) */ = 0;
protected:
    ~XAccessibleTableSelection() throw () {} // avoid warnings about virtual members and non-virtual dtor
};} } } }


class SwAccessibleTableData_Impl {};

namespace sw { namespace access {
    class SwAccessibleChild;
} }

class SwAccessibleTable :
        public SwAccessibleContext,
        public ::com::sun::star::accessibility::XAccessibleTable,
        public ::com::sun::star::accessibility::XAccessibleSelection,
        public   ::com::sun::star::accessibility::XAccessibleTableSelection,
        public SwClient
{
    SwAccessibleTableData_Impl *mpTableData;    // the table's data, prot by Sol-Mutex
    OUString sDesc;
    const SwSelBoxes *GetSelBoxes() const {}
    void FireTableChangeEvent( const SwAccessibleTableData_Impl& rTableData ) {}
    /** get the SwTableBox* for the given child */
    const SwTableBox* GetTableBox( sal_Int32 ) const {}
    sal_Bool IsChildSelected( sal_Int32 nChildIndex ) const {}
    sal_Int32 GetIndexOfSelectedChild( sal_Int32 nSelectedChildIndex ) const {}
protected:
    // Set states for getAccessibleStateSet.
    // This drived class additinaly sets MULTISELECTABLE(+)
    virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet ) {}
    virtual ~SwAccessibleTable() {}
    // #i77106#
    void SetDesc( OUString sNewDesc )
    {
        sDesc = sNewDesc;
    }
    virtual SwAccessibleTableData_Impl* CreateNewTableData() {} // #i77106#
    // force update of table data
    void UpdateTableData() {}
    // remove the current table data
    void ClearTableData() {}
    // get table data, update if necessary
  SwAccessibleTableData_Impl& GetTableData();
    // Is table data evailable?
  sal_Bool HasTableData() const { return (mpTableData != 0); }
    void SetTableData(SwAccessibleTableData_Impl* mpNewTableData)  ;
    virtual void Modify( const SfxPoolItem* pOld, const SfxPoolItem *pNew) {}
public:
  SwAccessibleTable(){}
    SwAccessibleTable( SwAccessibleMap* pInitMap, const SwTabFrm* pTableFrm ) {}
    //=====  XInterface  ======================================================
    // (XInterface methods need to be implemented to disambigouate
    // between those inherited through SwAcessibleContext and
    // XAccessibleTable).
    virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(
        const ::com::sun::star::uno::Type& aType )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL acquire(  ) throw ()
  { //SwAccessibleContext::acquire() {} 
  };
    virtual void SAL_CALL release(  ) throw ()
  { //SwAccessibleContext::release() {} 
  };
    //====== XTypeProvider ====================================================
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > SAL_CALL getTypes(  ) throw(::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< sal_Int8 > SAL_CALL getImplementationId(  ) throw(::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleContext  ==============================================
    /// Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void)
        throw (com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleTable  ================================================
    virtual sal_Int32 SAL_CALL getAccessibleRowCount()
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleColumnCount(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getAccessibleRowDescription(
            sal_Int32 nRow )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getAccessibleColumnDescription(
            sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleRowExtentAt(
            sal_Int32 nRow, sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleColumnExtentAt(
               sal_Int32 nRow, sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleTable >
        SAL_CALL getAccessibleRowHeaders(  )
           throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleTable >
        SAL_CALL getAccessibleColumnHeaders(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< sal_Int32 > SAL_CALL
        getSelectedAccessibleRows(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< sal_Int32 > SAL_CALL
        getSelectedAccessibleColumns(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL isAccessibleRowSelected( sal_Int32 nRow )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL isAccessibleColumnSelected( sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible > SAL_CALL
        getAccessibleCellAt( sal_Int32 nRow, sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible > SAL_CALL
        getAccessibleCaption(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible > SAL_CALL
        getAccessibleSummary(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL isAccessibleSelected(
            sal_Int32 nRow, sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleIndex(
            sal_Int32 nRow, sal_Int32 nColumn )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleRow( sal_Int32 nChildIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getAccessibleColumn( sal_Int32 nChildIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    //=====  XAccessibleTableSelection  ============================================
    virtual sal_Bool SAL_CALL selectRow( sal_Int32 row )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    virtual sal_Bool SAL_CALL selectColumn( sal_Int32 column )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    virtual sal_Bool SAL_CALL unselectRow( sal_Int32 row )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    virtual sal_Bool SAL_CALL unselectColumn( sal_Int32 column )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    //=====  XServiceInfo  ====================================================
    /** Returns an identifier for the implementation of this object.
    */
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Return whether the specified service is supported by this class.
    */
    virtual sal_Bool SAL_CALL
        supportsService (const OUString& sServiceName)
        throw (::com::sun::star::uno::RuntimeException) {}
    /** Returns a list of all supported services.  In this case that is just
        the AccessibleContext service.
    */
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    //===== C++ interface ======================================================
    // The object has been moved by the layout
    virtual void InvalidatePosOrSize( const SwRect& rOldBox ) {}
    // The object is not visible an longer and should be destroyed
    virtual void Dispose( sal_Bool bRecursive = sal_False ) {}
    virtual void DisposeChild( const sw::access::SwAccessibleChild& rFrmOrObj,
                               sal_Bool bRecursive ) {}
    virtual void InvalidateChildPosOrSize( const sw::access::SwAccessibleChild& rFrmOrObj,
                                           const SwRect& rFrm ) {}
    //=====  XAccessibleSelection  ============================================
    virtual void SAL_CALL selectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Bool SAL_CALL isAccessibleChildSelected(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL clearAccessibleSelection(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL selectAllAccessibleChildren(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Int32 SAL_CALL getSelectedAccessibleChildCount(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    // index has to be treated as global child index.
    virtual void SAL_CALL deselectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    //=====  XAccessibleComponent  ============================================
    sal_Int32 SAL_CALL getBackground()
        throw (::com::sun::star::uno::RuntimeException) {}
    typedef std::vector<const SwAccessibleContext*> VEC_CELL;
    VEC_CELL m_vecCellAdd;
    VEC_CELL m_vecCellRemove;
    void FireSelectionEvent( ) {}
    void ClearSelectionCellCache() {}
    void AddSelectionCell(const SwAccessibleContext* ,sal_Bool bAddOrRemove) {}
};

// #i77106# - subclass to represent table column headers
class SwAccessibleTableColHeaders : public SwAccessibleTable
{
protected:
    virtual ~SwAccessibleTableColHeaders()
    {}
    virtual SwAccessibleTableData_Impl* CreateNewTableData() {}
    virtual void Modify( const SfxPoolItem* pOld, const SfxPoolItem *pNew) {}
public:
    SwAccessibleTableColHeaders( SwAccessibleMap *pMap, const SwTabFrm *pTabFrm ) {}
    //=====  XInterface  ======================================================
    virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(
        const ::com::sun::star::uno::Type& aType )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL acquire(  ) throw ()
  { //SwAccessibleContext::acquire() {} 
};
    virtual void SAL_CALL release(  ) throw ()
  { //SwAccessibleContext::release() {} 
};
    //=====  XAccessibleContext  ==============================================
    /// Return the number of currently visible children.
    virtual sal_Int32 SAL_CALL getAccessibleChildCount (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    /// Return the specified child or NULL if index is invalid.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleChild (sal_Int32 nIndex)
        throw (::com::sun::star::uno::RuntimeException,
                ::com::sun::star::lang::IndexOutOfBoundsException) {}
    //=====  XAccessibleTable  ================================================
    virtual ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleTable >
        SAL_CALL getAccessibleRowHeaders(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
                ::com::sun::star::accessibility::XAccessibleTable >
        SAL_CALL getAccessibleColumnHeaders(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    //=====  XServiceInfo  ====================================================
    /** Returns an identifier for the implementation of this object.
    */
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
};

const sal_Char 	sAccessibleServiceName [] = "com.sun.star.accessibility.Accessible";
const sal_Char 	sDefunc [] = "object is defunctional";
const sal_Char 	sMissingWindow [] = "window is missing";

template <class T>  const com::sun::star::uno::Type& getCppuType(T){}


class SwAccessibleDocumentBase : public SwAccessibleContext
{
    ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible> mxParent;
    Window* mpChildWin; // protected by solar mutext
    using SwAccessibleFrame::SetVisArea;
protected:
    virtual ~SwAccessibleDocumentBase();
public:
  //  SwAccessibleDocumentBase(){}
    SwAccessibleDocumentBase( SwAccessibleMap* pInitMap );
    void SetVisArea();
    virtual void AddChild( Window *pWin, sal_Bool bFireEvent = sal_True );
    virtual void RemoveChild( Window *pWin );
    // XAccessibleContext
    // Return the number of currently visible children.
    virtual sal_Int32 SAL_CALL getAccessibleChildCount (void)
        throw (::com::sun::star::uno::RuntimeException);
    // Return the specified child or NULL if index is invalid.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleChild (sal_Int32 nIndex)
        throw (::com::sun::star::uno::RuntimeException,
                ::com::sun::star::lang::IndexOutOfBoundsException);
    // Return a reference to the parent.
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> SAL_CALL
        getAccessibleParent (void)
        throw (::com::sun::star::uno::RuntimeException);
    // Return this objects index among the parents children.
    virtual sal_Int32 SAL_CALL
        getAccessibleIndexInParent (void)
        throw (::com::sun::star::uno::RuntimeException);
    // Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void) throw (com::sun::star::uno::RuntimeException);
    virtual OUString SAL_CALL getAccessibleName (void) throw (::com::sun::star::uno::RuntimeException);
    // XAccessibleComponent
    virtual sal_Bool SAL_CALL containsPoint(
            const ::com::sun::star::awt::Point& aPoint )
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible > SAL_CALL getAccessibleAtPoint(
                const ::com::sun::star::awt::Point& aPoint )
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Rectangle SAL_CALL getBounds()
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Point SAL_CALL getLocation()
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Point SAL_CALL getLocationOnScreen()
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Size SAL_CALL getSize()
        throw (::com::sun::star::uno::RuntimeException);
};
/**
 * access to an accessible Writer document
 */
 namespace com {
   namespace sun {
     namespace star {
       namespace accessibility {
         class XAccessibleGetAccFlowTo{};
       }}}}

 // SwAccessibleDocumentBase a;
 // com::sun::star::accessibility::XAccessibleSelection b;                              
 com::sun::star::document::XEventListener c;
 // com::sun::star::accessibility::XAccessibleExtendedAttributes d;
 com::sun::star::accessibility::XAccessibleGetAccFlowTo e;

class SwAccessibleDocument : 
public SwAccessibleDocumentBase,
public com::sun::star::accessibility::XAccessibleSelection,
  public com::sun::star::document::XEventListener,
  public com::sun::star::accessibility::XAccessibleExtendedAttributes,
          public com::sun::star::accessibility::XAccessibleGetAccFlowTo
{
    // Implementation for XAccessibleSelection interface
    SwAccessibleSelectionHelper maSelectionHelper;
protected:
    // Set states for getAccessibleStateSet.
    // This drived class additinaly sets MULTISELECTABLE(1)
    virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet );
    virtual ~SwAccessibleDocument();
public:
    SwAccessibleDocument( SwAccessibleMap* pInitMap );
    DECL_LINK( WindowChildEventListener, VclSimpleEvent* );
    //=====  XEventListener====================================================
    virtual void SAL_CALL notifyEvent( const ::com::sun::star::document::EventObject& Event )
            throw (::com::sun::star::uno::RuntimeException);
    virtual void SAL_CALL disposing( const ::com::sun::star::lang::EventObject& Event )
            throw (::com::sun::star::uno::RuntimeException);
    // XServiceInfo
    // Returns an identifier for the implementation of this object.
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException);
    // Return whether the specified service is supported by this class.
    virtual sal_Bool SAL_CALL
        supportsService (const OUString& sServiceName)
        throw (::com::sun::star::uno::RuntimeException);
    // Returns a list of all supported services.  In this case that is just
    // the AccessibleContext service.
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException);
    // XInterface
    // XInterface is inherited through SwAcessibleContext and
    // XAccessibleSelection. These methods are needed to avoid
    // ambigiouties.
    virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(
        const ::com::sun::star::uno::Type& aType )
        throw (::com::sun::star::uno::RuntimeException);
    virtual void SAL_CALL acquire(  ) throw ()
  { //SwAccessibleContext::acquire(); 
  };
    virtual void SAL_CALL release(  ) throw ()
        { 
          //SwAccessibleContext::release(); 
        };
    // XTypeProvider
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > SAL_CALL getTypes(  ) throw(::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::uno::Sequence< sal_Int8 > SAL_CALL getImplementationId(  ) throw(::com::sun::star::uno::RuntimeException);
    // XAccessibleSelection
    virtual void SAL_CALL selectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException );
    virtual sal_Bool SAL_CALL isAccessibleChildSelected(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException );
    virtual void SAL_CALL clearAccessibleSelection(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    virtual void SAL_CALL selectAllAccessibleChildren(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    virtual sal_Int32 SAL_CALL getSelectedAccessibleChildCount(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException);
    // index has to be treated as global child index.
    virtual void SAL_CALL deselectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException );
    virtual ::com::sun::star::uno::Any SAL_CALL getExtendedAttributes()
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    // thread safe C++ interface
    // The object is not visible an longer and should be destroyed
    virtual void Dispose( sal_Bool bRecursive = sal_False );
    // XAccessibleComponent
    sal_Int32 SAL_CALL getBackground()
        throw (::com::sun::star::uno::RuntimeException);
    // XAccessibleGetAccFlowTo
    ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >
        SAL_CALL get_AccFlowTo(const ::com::sun::star::uno::Any& rAny, sal_Int32 nType)
        throw ( ::com::sun::star::uno::RuntimeException );
};

class SwAccessibleFrameBase {
public:
  SwAccessibleMap* GetMap(){};
};
namespace com {  namespace sun {    namespace star {       namespace accessibility {        
class XAccessibleImage {
public:
  virtual void release(){}
  virtual void acquire(){}
};}}}}

class SwAccessibleNoTextFrame : public  SwAccessibleFrameBase,
                                public ::com::sun::star::accessibility::XAccessibleImage,
                                public ::com::sun::star::accessibility::XAccessibleHypertext//Added by yangzhh for HyperLink
{
    friend class SwAccessibleNoTextHyperlink;
    //HyperLinksMap alinksMap;
    com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleHyperlink > alink;
    SwDepend        aDepend;
    OUString msTitle; // #i73249#
    OUString msDesc;
protected:
    virtual ~SwAccessibleNoTextFrame();
    const SwNoTxtNode *GetNoTxtNode() const;
    virtual void Modify( const SfxPoolItem* pOld, const SfxPoolItem *pNew);
public:
    SwAccessibleNoTextFrame( SwAccessibleMap* pInitMap,
                             sal_Int16 nInitRole,
                             const SwFlyFrm *pFlyFrm );
    // XAccessibleContext
    // #i73249# - Return the object's current name.
    virtual OUString SAL_CALL
        getAccessibleName (void)
        throw (::com::sun::star::uno::RuntimeException);
    /// Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void)
        throw (com::sun::star::uno::RuntimeException);
    // XInterface methods need to be implemented to disambiguate
    // between those inherited through SwAcessibleContext and
    // XAccessibleImage.
    virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(
        const ::com::sun::star::uno::Type& aType )
        throw (::com::sun::star::uno::RuntimeException);
    virtual void SAL_CALL acquire(  ) throw ()
  { //SwAccessibleContext::acquire(); 
};
    virtual void SAL_CALL release(  ) throw ()
  { //SwAccessibleContext::release(); 
};
    // XTypeProvider
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > SAL_CALL getTypes(  ) throw(::com::sun::star::uno::RuntimeException);
    // XAccessibleImage
    virtual OUString SAL_CALL
        getAccessibleImageDescription(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    virtual sal_Int32 SAL_CALL
        getAccessibleImageHeight(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    virtual sal_Int32 SAL_CALL
        getAccessibleImageWidth(  )
        throw ( ::com::sun::star::uno::RuntimeException );
    // The object is not visible an longer and should be destroyed
    virtual void Dispose( sal_Bool bRecursive = sal_False );
    virtual sal_Int32 SAL_CALL getCaretPosition(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Bool SAL_CALL setCaretPosition( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    virtual sal_Unicode SAL_CALL getCharacter( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);//Shen Zhen Jie changed sal_Unicode to sal_uInt32
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getCharacterAttributes( sal_Int32 nIndex, const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::awt::Rectangle SAL_CALL getCharacterBounds( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getCharacterCount(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getIndexAtPoint( const ::com::sun::star::awt::Point& aPoint ) throw (::com::sun::star::uno::RuntimeException);
    virtual OUString SAL_CALL getSelectedText(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getSelectionStart(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getSelectionEnd(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual sal_Bool SAL_CALL setSelection( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    virtual OUString SAL_CALL getText(  ) throw (::com::sun::star::uno::RuntimeException);
    virtual OUString SAL_CALL getTextRange( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextAtIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBeforeIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBehindIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException);
    virtual sal_Bool SAL_CALL copyText( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException);
    //=====  XAccessibleHypertext  ============================================
    virtual sal_Int32 SAL_CALL getHyperLinkCount()
        throw (::com::sun::star::uno::RuntimeException);
    virtual ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessibleHyperlink >
    SAL_CALL getHyperLink( sal_Int32 nLinkIndex )
    throw (::com::sun::star::lang::IndexOutOfBoundsException,
            ::com::sun::star::uno::RuntimeException);
    virtual sal_Int32 SAL_CALL getHyperLinkIndex( sal_Int32 nCharIndex )
    throw (::com::sun::star::lang::IndexOutOfBoundsException,
            ::com::sun::star::uno::RuntimeException);
    SwAccessibleMap *GetAccessibleMap(){ return GetMap();}
private:
    com::sun::star::accessibility::AccessibleRelation makeRelation(
        sal_Int16 nType, const SwFlyFrm* pFrm );
public:
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleRelationSet> SAL_CALL
        getAccessibleRelationSet (void)
        throw (::com::sun::star::uno::RuntimeException);
};


class SwAccessibleHeaderFooter : public SwAccessibleContext
{
protected:
    virtual ~SwAccessibleHeaderFooter();
public:
    SwAccessibleHeaderFooter( SwAccessibleMap* pInitMap,
                              const SwHeaderFrm* pHdFrm );
    SwAccessibleHeaderFooter( SwAccessibleMap* pInitMap,
                              const SwFooterFrm* pFtFrm );
    // XAccessibleContext
    /// Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void)
        throw (com::sun::star::uno::RuntimeException);
    // XServiceInfo
    /** Returns an identifier for the implementation of this object. */
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException);
    /** Return whether the specified service is supported by this class. */
    virtual sal_Bool SAL_CALL
        supportsService (const OUString& sServiceName)
        throw (::com::sun::star::uno::RuntimeException);
    /** Returns a list of all supported services.  In this case that is just
        the AccessibleContext service. */
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException);
    // XTypeProvider
    virtual ::com::sun::star::uno::Sequence< sal_Int8 > SAL_CALL getImplementationId(  ) throw(::com::sun::star::uno::RuntimeException);
    //=====  XAccessibleComponent  ============================================
    sal_Int32 SAL_CALL getBackground()
        throw (::com::sun::star::uno::RuntimeException);
};

class SwPortionHandler
{
public:
    SwPortionHandler() {}           /// (emtpy) constructor
    virtual ~SwPortionHandler() {}  /// (empty) destructor
    /** text portion. A run of nLength characters from the model
     * string, that contains no special characters like embedded
     * fields, etc. Thus, the on-screen text of this portion
     * corresponds exactly to the corresponding characters in the
     * model string.
     */
    virtual void Text(
        sal_uInt16 nLength,      /// length of this portion in the model string
        sal_uInt16 nType,         /// type of this portion
        sal_Int32 nHeight = 0,   /// height of this portion
        sal_Int32 nWidth = 0     /// width of this portion
        ) = 0;
    /** special portion. This method is called for every non-text
     * portion. The parameters describe the length of the
     * corresponding characters in the model string (often 0 or 1),
     * the text which is displayed, and the type of the portion.
     */
    virtual void Special(
        sal_uInt16 nLength,      /// length of this portion in the model string
        const OUString& rText, /// text which is painted on-screen
        sal_uInt16 nType,         /// type of this portion
        sal_Int32 nHeight = 0,     /// font height of the painted text
        sal_Int32 nWidth = 0     /// width of this portion
        ) = 0;
    /** line break. This method is called whenever a line break in the
     * layout occurs.
     */
    virtual void LineBreak(KSHORT nWidth) = 0;
    /** skip characters. The SwTxtFrame may only display partially
     * display a certain paragraph (e.g. when the paragaph is split
     * across multiple pages). In this case, the Skip() method must be
     * called to inform the portion handler to ignore a certain run of
     * characters in the 'model string'. Skip(), if used at all, must
     * be called before any of the other methods is called. Calling
     * Skip() between portions is not allowed.
     */
    virtual void Skip(
        sal_uInt16 nLength   /// number of 'model string' characters to be skipped
        ) = 0;
    /** end of paragraph. This method is to be called when all the
     * paragraph's portions have been processed.
     */
    virtual void Finish() = 0;
    virtual void SetAttrFieldType( sal_uInt16 )
    { return; }
};

namespace com { namespace sun { namespace star {
    namespace i18n { struct Boundary; }
    namespace accessibility { class XAccessibleHyperlink; }
    namespace style { struct TabStop; }
    } } }

class SwSpecialPos{};

class SwAccessiblePortionData : public SwPortionHandler
{
    // the node this portion is referring to
    const SwTxtNode* pTxtNode;
    // variables used while collecting the data
    OUStringBuffer aBuffer;
    sal_Int32 nModelPosition;
    sal_Bool bFinished;
    const SwViewOption* pViewOptions;
    // the accessible string
    OUString sAccessibleString;
    // positions array
    // instances of Position_t must always include the minimum and
    // maximum positions as first/last elements (to simplify the
    // algorithms)
    typedef std::vector<sal_Int32> Positions_t;
    Positions_t aLineBreaks;        /// position of line breaks
    Positions_t aModelPositions;    /// position of portion breaks in the model
    Positions_t aAccessiblePositions;   /// portion breaks in sAccessibleString
    Positions_t aFieldPosition;
    Positions_t aAttrFieldType;
    typedef std::vector<sal_uInt8> PortionAttrs_t;
    PortionAttrs_t aPortionAttrs;   /// additional portion attributes
    Positions_t* pSentences;    /// positions of sentence breaks
    size_t nBeforePortions;     /// # of portions before first model character
    sal_Bool bLastIsSpecial;    /// set if last portion was 'Special()'
    /// returns the index of the first position whose value is smaller
    /// or equal, and whose following value is equal or larger
    size_t FindBreak( const Positions_t& rPositions, sal_Int32 nValue ) const;
    /// like FindBreak, but finds the last equal or larger position
    size_t FindLastBreak( const Positions_t& rPositions, sal_Int32 nValue ) const;
    /// fill the boundary with the values from rPositions[nPos]
    void FillBoundary(com::sun::star::i18n::Boundary& rBound,
                      const Positions_t& rPositions,
                      size_t nPos ) const;
    /// Access to portion attributes
    sal_Bool IsPortionAttrSet( size_t nPortionNo, sal_uInt8 nAttr ) const;
    sal_Bool IsSpecialPortion( size_t nPortionNo ) const;
    sal_Bool IsReadOnlyPortion( size_t nPortionNo ) const;
    sal_Bool IsGrayPortionType( sal_uInt16 nType ) const;
    // helper method for GetEditableRange(...):
    void AdjustAndCheck( sal_Int32 nPos, size_t& nPortionNo,
                         sal_Int32& nCorePos, sal_Bool& bEdit ) const;
public:
    SwAccessiblePortionData( const SwTxtNode* pTxtNd,
                             const SwViewOption* pViewOpt = NULL );
    virtual ~SwAccessiblePortionData();
    // SwPortionHandler methods
    virtual void Text(sal_uInt16 nLength, sal_uInt16 nType, sal_Int32 nHeight = 0, sal_Int32 nWidth = 0);
    virtual void Special(sal_uInt16 nLength, const OUString& rText, sal_uInt16 nType, sal_Int32 nHeight = 0, sal_Int32 nWidth = 0);
    virtual void LineBreak(KSHORT nWidth);
    virtual void Skip(sal_uInt16 nLength);
    virtual void Finish();
    virtual void SetAttrFieldType( sal_uInt16 nAttrFldType );
    sal_Bool FillBoundaryIFDateField( com::sun::star::i18n::Boundary& rBound, const sal_Int32 nPos );
    sal_Bool IsIndexInFootnode(sal_Int32 nIndex);
    sal_Bool IsInGrayPortion( sal_Int32 nPos );
    sal_Int32 GetFieldIndex(sal_Int32 nPos);
    sal_Bool IsZeroCorePositionData();
    // access to the portion data
    /// get the text string, as presented by the layout
    const OUString& GetAccessibleString() const;
    /// get the start & end positions of the sentence
    void GetLineBoundary( com::sun::star::i18n::Boundary& rBound,
                          sal_Int32 nPos ) const;
    // get start and end position of the last line
    void GetLastLineBoundary( com::sun::star::i18n::Boundary& rBound ) const;
    /// Determine whether this core position is valid for these portions.
    /// (A paragraph may be split into several frames, e.g. at page
    ///  boundaries. In this case, only part of a paragraph is represented
    ///  through this object. This method determines whether one particular
    ///  position is valid for this object or not.)
    sal_Bool IsValidCorePosition( sal_Int32 nPos ) const;
    sal_Int32 GetFirstValidCorePosition() const;
    sal_Int32 GetLastValidCorePosition() const;
    /// get the position in the accessibility string for a given model position
    sal_Int32 GetAccessiblePosition( sal_Int32 nPos ) const;
    // #i89175#
    sal_Int32 GetLineCount() const;
    sal_Int32 GetLineNo( const sal_Int32 nPos ) const;
    void GetBoundaryOfLine( const sal_Int32 nLineNo,
                            com::sun::star::i18n::Boundary& rLineBound );
    /// get the position in the model string for a given
    /// (accessibility) position
    sal_Int32 GetModelPosition( sal_Int32 nPos ) const;
    /// fill a SwSpecialPos structure, suitable for calling
    /// SwTxtFrm->GetCharRect
    /// Returns the core position, and fills thr rpPos either with NULL or
    /// with the &rPos, after putting the appropriate data into it.
    sal_uInt16 FillSpecialPos( sal_Int32 nPos,
                           SwSpecialPos& rPos,
                           SwSpecialPos*& rpPos ) const;
    // get boundaries of words/sentences. The data structures are
    // created on-demand.
    void GetSentenceBoundary( com::sun::star::i18n::Boundary& rBound,
                              sal_Int32 nPos );
    // get (a) boundary for attribut change
    void GetAttributeBoundary( com::sun::star::i18n::Boundary& rBound,
                               sal_Int32 nPos ) const;
    sal_uInt16 GetAttrFldType( sal_Int32 nPos );
    /// Convert start and end positions into core positions.
    /// @returns true if 'special' portions are included either completely
    ///          or not at all. This can be used to test whether editing
    ///          that range would be legal
    sal_Bool GetEditableRange( sal_Int32 nStart, sal_Int32 nEnd,
                               sal_Int32& nCoreStart, sal_Int32& nCoreEnd ) const;
private:
    typedef std::pair<sal_Int32,sal_Int32> PAIR_POS;
    typedef std::vector<PAIR_POS> VEC_PAIR_POS;
    VEC_PAIR_POS m_vecPairPos;
};



typedef ::boost::unordered_map< OUString,
                         ::com::sun::star::beans::PropertyValue,
                         OUStringHash,
                         ::std::equal_to< OUString > > tAccParaPropValMap;
class SwAccessibleParagraph :
        public SwClient, // #i108125#
        public SwAccessibleContext,
        public ::com::sun::star::accessibility::XAccessibleEditableText,
        public com::sun::star::accessibility::XAccessibleSelection,
        public com::sun::star::accessibility::XAccessibleHypertext,
        public com::sun::star::accessibility::XAccessibleTextMarkup,
        public com::sun::star::accessibility::XAccessibleMultiLineText,
        public ::com::sun::star::accessibility::XAccessibleTextAttributes,
        public com::sun::star::accessibility::XAccessibleTextSelection,
        public  com::sun::star::accessibility::XAccessibleExtendedAttributes
{
    friend class SwAccessibleHyperlink;
    OUString sDesc;  // protected by base classes mutex
    // data for this paragraph's text portions; this contains the
    // mapping from the core 'model string' to the accessible text
    // string.
    // pPortionData may be NULL; it should only be accessed through the
    // Get/Clear/Has/UpdatePortionData() methods
    SwAccessiblePortionData* pPortionData;
    SwAccessibleHyperTextData *pHyperTextData;
    sal_Int32 nOldCaretPos; // The 'old' caret pos. It's only valid as long
                            // as the cursor is inside this object (protected by
                            // mutex)
    sal_Bool bIsHeading;    // protected by base classes mutex
    sal_Int32 nHeadingLevel;
    // implementation for XAccessibleSelection
    SwAccessibleSelectionHelper aSelectionHelper;
    SwParaChangeTrackingInfo* mpParaChangeTrackInfo; // #i108125#
    /// get the SwTxtNode (requires frame; check before)
    const SwTxtNode* GetTxtNode() const {}
    /// get the (accessible) text string (requires frame; check before)
    OUString GetString() {}
    OUString GetDescription() {}
    // get the current care position
    sal_Int32 GetCaretPos() {}
    // determine the current selection. Fill the values with
    // -1 if there is no selection in the this paragraph
    sal_Bool GetSelection(sal_Int32& nStart, sal_Int32& nEnd) {}
    // helper for GetSelection and getCaretPosition
    // #i27301# - add parameter <_bForSelection>, which indicates,
    // if the cursor is retrieved for selection or for caret position.
    SwPaM* GetCursor( const bool _bForSelection ) {}
    // for cut/copy/paste: execute a particular slot at the view shell
    void ExecuteAtViewShell( sal_uInt16 nSlot ) {}
    // helper method for get/setAttributes
    // (for the special case of (nEndIndex==-1) a single character will
    //  be selected)
    SwXTextPortion* CreateUnoPortion( sal_Int32 nStart, sal_Int32 nEnd ) {}
    // methods for checking the parameter range:
    // does nPos point to a char?
    sal_Bool IsValidChar(sal_Int32 nPos, sal_Int32 nLength) {}
    // does nPos point to a position? (may be behind the last character)
    sal_Bool IsValidPosition(sal_Int32 nPos, sal_Int32 nLength) {}
    // is nBegin...nEnd a valid range? (nEnd points past the last character)
    sal_Bool IsValidRange(sal_Int32 nBegin, sal_Int32 nEnd, sal_Int32 nLength) {}
    // Ensure ordered range (i.e. nBegin is smaller then nEnd)
    void OrderRange(sal_Int32& nBegin, sal_Int32& nEnd)
    {
        if( nBegin > nEnd )
        {
            sal_Int32 nTmp = nBegin; nBegin = nEnd; nEnd = nTmp;
        }
    }
    const SwRedline* GetRedlineAtIndex( sal_Int32 nPos ) {}
    OUString GetFieldTypeNameAtIndex(sal_Int32 nIndex) {}
    // #i63870#
    void _getDefaultAttributesImpl(
            const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes,
            tAccParaPropValMap& rDefAttrSeq,
            const bool bOnlyCharAttrs = false ) {}
    void _getRunAttributesImpl(
            const sal_Int32 nIndex,
            const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes,
            tAccParaPropValMap& rRunAttrSeq ) {}
    void _getSupplementalAttributesImpl(
            const sal_Int32 nIndex,
            const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes,
            tAccParaPropValMap& rSupplementalAttrSeq ) {}
    void _correctValues(
            const sal_Int32 nIndex,
            ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& rValues ) {}
public:
    SwTOXSortTabBase* GetTOXSortTabBase() {}
    short GetTOCLevel() {}
    sal_Bool IsHeading() const {}
protected:
    // Set states for getAccessibleStateSet.
    // This drived class additinaly sets MULTILINE(1), MULTISELECTABLE(+),
    // FOCUSABLE(+) and FOCUSED(+)
    virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet ) {}
    virtual void _InvalidateContent( sal_Bool bVisibleDataFired ) {}
    virtual void _InvalidateCursorPos() {}
    virtual void _InvalidateFocus() {}
    virtual ~SwAccessibleParagraph() {}
    // handling of data for the text portions
    // force update of new portion data
    void UpdatePortionData()
        throw( com::sun::star::uno::RuntimeException ) {}
    // remove the current portion data
    void ClearPortionData() {}
    // get portion data; update if necessary
    SwAccessiblePortionData& GetPortionData()
        throw( com::sun::star::uno::RuntimeException )
    {
      if( pPortionData == NULL )
        UpdatePortionData();
      return *pPortionData;
    }
    // determine if portion data is currently available
  sal_Bool HasPortionData()   { return (pPortionData != NULL) ;}
    //helpers for word boundaries
    sal_Bool GetCharBoundary( com::sun::star::i18n::Boundary& rBound,
                              const OUString& rText,
                              sal_Int32 nPos ) {}
    sal_Bool GetWordBoundary( com::sun::star::i18n::Boundary& rBound,
                              const OUString& rText,
                              sal_Int32 nPos ) {}
    sal_Bool GetSentenceBoundary( com::sun::star::i18n::Boundary& rBound,
                                  const OUString& rText,
                                  sal_Int32 nPos ) {}
    sal_Bool GetLineBoundary( com::sun::star::i18n::Boundary& rBound,
                              const OUString& rText,
                              sal_Int32 nPos ) {}
    sal_Bool GetParagraphBoundary( com::sun::star::i18n::Boundary& rBound,
                                   const OUString& rText,
                                   sal_Int32 nPos ) {}
    sal_Bool GetAttributeBoundary( com::sun::star::i18n::Boundary& rBound,
                                   const OUString& rText,
                                   sal_Int32 nPos ) {}
    sal_Bool GetGlyphBoundary( com::sun::star::i18n::Boundary& rBound,
                               const OUString& rText,
                               sal_Int32 nPos ) {}
    // get boundaries of word/sentence/etc. for specified text type
    // Does all argument checking, and then delegates to helper methods above.
    sal_Bool GetTextBoundary( com::sun::star::i18n::Boundary& rBound,
                              const OUString& rText,
                              sal_Int32 nPos,
                              sal_Int16 aTextType )
        throw (
            ::com::sun::star::lang::IndexOutOfBoundsException,
            ::com::sun::star::lang::IllegalArgumentException,
            ::com::sun::star::uno::RuntimeException) {}
    virtual void Modify( const SfxPoolItem* pOld, const SfxPoolItem* pNew) {}
public:
    SwAccessibleParagraph( SwAccessibleMap& rInitMap,
                           const SwTxtFrm& rTxtFrm ) {}
  operator ::com::sun::star::accessibility::XAccessibleText *(){}
    virtual sal_Bool HasCursor() {}   // required by map to remember that object
    com::sun::star::uno::Sequence< ::com::sun::star::style::TabStop > GetCurrentTabStop( sal_Int32 nIndex  ) {}
    virtual sal_Int16 SAL_CALL getAccessibleRole (void)     throw (::com::sun::star::uno::RuntimeException) {}
    // XAccessibleContext
    // Return this object's description.
    virtual OUString SAL_CALL
        getAccessibleDescription (void)
        throw (com::sun::star::uno::RuntimeException) {}
    // Return the parents locale or throw exception if this object has no
    // parent yet/anymore.
    virtual ::com::sun::star::lang::Locale SAL_CALL
        getLocale (void)
        throw (::com::sun::star::accessibility::IllegalAccessibleComponentStateException, ::com::sun::star::uno::RuntimeException) {}
    // #i27138# - paragraphs are in relation CONTENT_FLOWS_FROM and/or CONTENT_FLOWS_TO
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleRelationSet> SAL_CALL
        getAccessibleRelationSet (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    // XAccessibleComponent
    virtual void SAL_CALL grabFocus()
        throw (::com::sun::star::uno::RuntimeException) {}
    // #i71385#
    virtual sal_Int32 SAL_CALL getForeground()
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getBackground()
        throw (::com::sun::star::uno::RuntimeException) {}
    // XServiceInfo
    // Returns an identifier for the implementation of this object.
    virtual OUString SAL_CALL
        getImplementationName (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    // Return whether the specified service is supported by this class.
    virtual sal_Bool SAL_CALL
        supportsService (const OUString& sServiceName)
        throw (::com::sun::star::uno::RuntimeException) {}
    // Returns a list of all supported services.  In this case that is just
    // the AccessibleContext service.
    virtual ::com::sun::star::uno::Sequence< OUString> SAL_CALL
        getSupportedServiceNames (void)
        throw (::com::sun::star::uno::RuntimeException) {}
    // XInterface
    // (XInterface methods need to be implemented to disambiguate
    // between those inherited through SwAcessibleContext and
    // XAccessibleEditableText).
    virtual ::com::sun::star::uno::Any SAL_CALL queryInterface(
        const ::com::sun::star::uno::Type& aType )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual void SAL_CALL acquire(  ) throw ()
  { 
    //SwAccessibleContext::acquire() {} 
  };
  virtual void SAL_CALL release(  ) throw ()
  { 
    //SwAccessibleContext::release() {} 
  };
    // XTypeProvider
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type > SAL_CALL getTypes(  ) throw(::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< sal_Int8 > SAL_CALL getImplementationId(  ) throw(::com::sun::star::uno::RuntimeException) {}
    // XAccessibleText
    virtual sal_Int32 SAL_CALL getCaretPosition(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL setCaretPosition( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Unicode SAL_CALL getCharacter( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getCharacterAttributes( sal_Int32 nIndex, const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::awt::Rectangle SAL_CALL getCharacterBounds( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getCharacterCount(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getIndexAtPoint( const ::com::sun::star::awt::Point& aPoint ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getSelectedText(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getSelectionStart(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getSelectionEnd(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL setSelection( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getText(  ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual OUString SAL_CALL getTextRange( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextAtIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBeforeIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL getTextBehindIndex( sal_Int32 nIndex, sal_Int16 aTextType ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL copyText( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    // XAccessibleEditableText
    virtual sal_Bool SAL_CALL cutText( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL pasteText( sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL deleteText( sal_Int32 nStartIndex, sal_Int32 nEndIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL insertText( const OUString& sText, sal_Int32 nIndex ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL replaceText( sal_Int32 nStartIndex, sal_Int32 nEndIndex, const OUString& sReplacement ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL setAttributes( sal_Int32 nStartIndex, sal_Int32 nEndIndex, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aAttributeSet ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL setText( const OUString& sText ) throw (::com::sun::star::uno::RuntimeException) {}
    // XAccessibleSelection
    virtual void SAL_CALL selectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Bool SAL_CALL isAccessibleChildSelected(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL clearAccessibleSelection(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual void SAL_CALL selectAllAccessibleChildren(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual sal_Int32 SAL_CALL getSelectedAccessibleChildCount(  )
        throw ( ::com::sun::star::uno::RuntimeException ) {}
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > SAL_CALL getSelectedAccessibleChild(
        sal_Int32 nSelectedChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    // index has to be treated as global child index.
    virtual void SAL_CALL deselectAccessibleChild(
        sal_Int32 nChildIndex )
        throw ( ::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException ) {}
    // XAccessibleHypertext
    virtual sal_Int32 SAL_CALL getHyperLinkCount()
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Reference<
            ::com::sun::star::accessibility::XAccessibleHyperlink >
        SAL_CALL getHyperLink( sal_Int32 nLinkIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getHyperLinkIndex( sal_Int32 nCharIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException,
                ::com::sun::star::uno::RuntimeException) {}
    // #i71360#
    // XAccesibleTextMarkup
    virtual sal_Int32 SAL_CALL getTextMarkupCount( sal_Int32 nTextMarkupType )
            throw (::com::sun::star::lang::IllegalArgumentException,
                   ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL
            getTextMarkup( sal_Int32 nTextMarkupIndex,
                           sal_Int32 nTextMarkupType )
            throw (::com::sun::star::lang::IndexOutOfBoundsException,
                   ::com::sun::star::lang::IllegalArgumentException,
                   ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::accessibility::TextSegment > SAL_CALL
            getTextMarkupAtIndex( sal_Int32 nCharIndex,
                                  sal_Int32 nTextMarkupType )
            throw (::com::sun::star::lang::IndexOutOfBoundsException,
                   ::com::sun::star::lang::IllegalArgumentException,
                   ::com::sun::star::uno::RuntimeException) {}
    // XAccessibleTextSelection
    virtual sal_Bool SAL_CALL scrollToPosition( const ::com::sun::star::awt::Point& aPoint, sal_Bool isLeftTop )
        throw (::com::sun::star::lang::IllegalArgumentException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getSelectedPortionCount(  )
        throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getSeletedPositionStart( sal_Int32 nSelectedPortionIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getSeletedPositionEnd( sal_Int32 nSelectedPortionIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Bool SAL_CALL removeSelection( sal_Int32 selectionIndex )
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL  addSelection( sal_Int32 selectionIndex, sal_Int32 startOffset, sal_Int32 endOffset)
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
    // XAccessibleExtendedAttributes
    virtual ::com::sun::star::uno::Any SAL_CALL getExtendedAttributes()
        throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) ;
    sal_Bool GetSelectionAtIndex(sal_Int32& nIndex, sal_Int32& nStart, sal_Int32& nEnd) {}
    sal_Int32 GetRealHeadingLevel() {}
    // XAccessibleComponent
    sal_Bool m_bLastHasSelection;
    sal_Bool tabCharInWord(sal_Int32 nIndex, com::sun::star::i18n::Boundary&  aBound) {}
    // #i89175#
    // XAccessibleMultiLineText
    virtual sal_Int32 SAL_CALL getLineNumberAtIndex( sal_Int32 nIndex )
            throw (::com::sun::star::lang::IndexOutOfBoundsException,
                   ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL
            getTextAtLineNumber( sal_Int32 nLineNo )
            throw (::com::sun::star::lang::IndexOutOfBoundsException,
                   ::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::accessibility::TextSegment SAL_CALL
            getTextAtLineWithCaret()
            throw (::com::sun::star::uno::RuntimeException) {}
    virtual sal_Int32 SAL_CALL getNumberOfLineWithCaret()
            throw (::com::sun::star::uno::RuntimeException) {}
    // #i63870#
    // XAccesibleTextAttributes
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getDefaultAttributes( const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes ) throw (::com::sun::star::uno::RuntimeException) {}
    virtual ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue > SAL_CALL getRunAttributes( sal_Int32 nIndex, const ::com::sun::star::uno::Sequence< OUString >& aRequestedAttributes ) throw (::com::sun::star::lang::IndexOutOfBoundsException, ::com::sun::star::uno::RuntimeException) {}
};



//class SwAccessibleMap;
//class SwAccessibleNoTextFrame : public  SwAccessibleFrameBase {};
///class SwAccessibleDocument : public SwAccessibleDocumentBase{};
//class SwAccessibleCell : public SwAccessibleContext {};
//class SwAccessibleChildSList {};
//class SwAccessibleChildSList_const_iterator {};
//class SwAccessibleContext {};
//class SwAccessibleDocumentBase : public SwAccessibleContext{};
//class SwAccessibleField {};
//class SwAccessibleFrame {};
//class SwAccessibleFrameBase : public SwAccessibleContext {};
//class SwAccessibleHeaderFooter : public SwAccessibleContext {};
//class SwAccessibleHyperTextData : public _SwAccessibleHyperlinkMap_Impl {};
//class SwAccessibleParagraph {};
//class SwAccessiblePortionData : public SwPortionHandler {};
//class SwAccessibleSelectionHelper{};
//class SwAccessibleTable {};
//class SwAccessibleTableColHeaders : public SwAccessibleTable {};
//class SwParaChangeTrackingInfo{};
//class SwRect;

class AccessibleShape;
class AccessibleStateSetHelper;
class SdrObject;


class SwCellFrm;
class SwCrsrShell;
class SwFEShell;
class SwField;
class SwField;
class SwFlyFrm;
class SwFooterFrm;
class SwFrm;
class SwFrmFmt;
class SwFtnFrm;
class SwHeaderFrm;
class SwNoTxtNode;
class SwPaM;
class SwRedline;
class SwSelBoxes;
class SwTabFrm;
class SwTableBox;
class SwTextMarkupHelper;
class SwTxtAttr;
class SwTxtFrm;
class SwTxtNode;
class SwViewOption;
class SwViewShell;
class SwWrongList;
class SwXTextPortion;
class VclSimpleEvent;
class Window;
class SwAccessibleTableData_Impl;
class SwAccessibleHyperTextData;

class SwAccessibleNoTextHyperlink;

class SwAccessibleHyperlink {};
class _SwAccessibleChildMap{};

class SwAccessibleChildMap : public _SwAccessibleChildMap {};
class SwAccessibleChildMapKey {};
class SwAccessibleEmbeddedObject : public   SwAccessibleNoTextFrame{};
class SwAccessibleFootnote : public SwAccessibleContext{};
class SwAccessibleGraphic : public  SwAccessibleNoTextFrame{};
class SwAccessiblePage : public SwAccessibleContext {};
class SwAccessiblePreview : public  SwAccessibleDocumentBase {};
class SwAccessibleTextFrame : public SwAccessibleFrameBase {};

namespace com { namespace sun { namespace star { namespace accessibility {
struct AccessibleTableModelChange {
  inline AccessibleTableModelChange() ;
    inline AccessibleTableModelChange(const ::sal_Int16& Type_, const ::sal_Int32& FirstRow_, const ::sal_Int32& LastRow_, const ::sal_Int32& FirstColumn_, const ::sal_Int32& LastColumn_) ;

    ::sal_Int16 Type;
    ::sal_Int32 FirstRow;
    ::sal_Int32 LastRow;
    ::sal_Int32 FirstColumn;
    ::sal_Int32 LastColumn;
};
        //inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::com::sun::star::accessibility::AccessibleTableModelChange const *);
} } } }

