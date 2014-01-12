#pragma once
#define ISA(X) DOISA(X())
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

/*dcl*/class Link {}; 
template <class A> const Link  & doLink(A) {}
#define LINK(OBJ,CLASS,CLASS2) doLink(OBJ) 
#define SAL_WNODEPRECATED_DECLARATIONS_PUSH
#define SAL_WNODEPRECATED_DECLARATIONS_POP
typedef bool sal_Bool;
typedef char sal_Char;
typedef char sal_Int8;
typedef unsigned char  sal_uInt8;
typedef int  sal_Int32;
typedef int  WinBits; 
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

#include <utility>

namespace cppu{
/*fwd*/class OInterfaceContainerHelper; 
/*dcl*/class OInterfaceContainerHelper {}; 
}

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
namespace com{ namespace sun{ namespace star{ namespace rendering{
        class XCanvas{};
      }}}}

namespace com{ namespace sun{ namespace star{ namespace uno{
        class XInterface;
      }}}}

namespace com{ namespace sun{ namespace star{ namespace awt{
        class XGraphics{};
      }}}}

typedef sal_uInt32 ColorData;

namespace com{namespace sun{namespace star{ namespace drawing{
enum LineCap
{
    LineCap_BUTT = 0,
    LineCap_ROUND = 1,
    LineCap_SQUARE = 2,
    LineCap_MAKE_FIXED_SIZE = 0x7fffffff
};
class XShape{};      
}}}}

class ChangeType{};
class PreviewPage {};
namespace accessibility {
  /*dcl*/class AccessibleControlShape; 
}

/*dcl*/class AccessibleControlShape {}; 
/*dcl*/class AccessibleTextHelper {}; 
/*dcl*/class AllSettings {}; 
/*dcl*/class AlphaMask {}; 
/*dcl*/class Bitmap {}; 
/*dcl*/class BitmapEx {}; 
/*dcl*/class Color {
public :
  Color(){};
  Color(sal_uInt32){};
  sal_uInt32 GetTransparency() const {}
  
}; 
/*dcl*/class CommandEvent {}; 
/*dcl*/class Cursor {}; 
/*dcl*/class DataChangedEvent {}; 
/*dcl*/class Dialog {}; 
/*dcl*/class DockingManager {}; 
class Impl_Font;

/*dcl*/class FontEmphasisMark {}; 
/*dcl*/class FontInfo {}; 
/*dcl*/class FontMetric {}; 
/*dcl*/class GDIMetaFile {}; 
/*dcl*/class GfxLink {}; 
/*dcl*/class Gradient {}; 
/*dcl*/class Hatch {}; 
/*dcl*/class HelpEvent {}; 
/*dcl*/class Image {}; 
/*dcl*/class ImplControlValue {}; 
/*dcl*/class ImplDevFontList {}; 
/*dcl*/class ImplFontCache {}; 
/*dcl*/class ImplFontEntry {}; 
/*dcl*/class ImplFrameData {}; 
/*dcl*/class ImplGetDevFontList {}; 
/*dcl*/class ImplGetDevSizeList {}; 
/*dcl*/class ImplLayoutArgs {}; 
/*dcl*/class ImplMapRes {}; 
/*dcl*/class ImplObjStack {}; 
/*dcl*/class ImplOutDevData {}; 
/*dcl*/class ImplThresholdRes {}; 
/*dcl*/class ImplWinData {}; 
/*dcl*/class InputContext {}; 
/*dcl*/class KeyEvent {}; 
/*dcl*/class LanguageType {}; 
/*dcl*/class Line {}; 
/*dcl*/class LineInfo {}; 

/*dcl*/class MapMode{};
/*dcl*/class MouseEvent {}; 
/*dcl*/class OUStringBuffer{};
/*dcl*/class OutDevType {}; 
/*dcl*/class OutDevViewType {}; 
/*dcl*/class Pointer {}; 
/*dcl*/class PointerStyle {}; 
/*dcl*/class PolyPolygon {}; 
/*dcl*/class Polygon {}; 
/*dcl*/class RasterOp {}; 
/*dcl*/class Reference {}; 
/*dcl*/class Region {}; 
/*dcl*/class ResId {}; 
/*dcl*/class ResMgr {}; 
/*dcl*/class SET_PARA {}; 
/*dcl*/class SalFrame {}; 
/*dcl*/class SalGraphics {}; 
/*dcl*/class SalLayout {}; 
/*dcl*/class SdrHint{};
/*dcl*/class Selection {}; 
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
/*dcl*/class SvxEditViewForwarder {}; 
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
/*dcl*/class SvxTextForwarder{};
/*dcl*/class SvxTwoLinesItem{};
/*dcl*/class SvxULSpaceItem{};
/*dcl*/class SvxUnderlineItem{};
/*dcl*/class SvxUnoTextRangeBaseList {}; 
/*dcl*/class SvxViewForwarder {}; 
/*dcl*/class SvxWeightItem{};
/*dcl*/class SvxWidowsItem{};
/*dcl*/class SvxWordLineModeItem{};
/*dcl*/class SwAccPreviewData; // IMPL
class _SwAccessibleChildMap{};
class SwAccessibleChildMap : public _SwAccessibleChildMap {};
/*dcl*/class SwAccessibleContext; 
/*dcl*/class SwAccessibleContextMap_Impl; 
/*dcl*/class SwAccessibleEventList_Impl; 
/*dcl*/class SwAccessibleEventMap_Impl; 
/*dcl*/class SwAccessibleEvent_Impl; 
/*dcl*/class SwAccessibleField{};
/*dcl*/class SwAccessibleHyperTextData {}; 
/*dcl*/class SwAccessibleNoTextHyperlink {}; 
/*dcl*/class SwAccessibleSelectedParas_Impl;
/*dcl*/class SwAccessibleShapeMap_Impl; 
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
/*dcl*/class SwFrm; 
/*dcl*/class SwFtnFrm{};
/*dcl*/class SwGammaGrf{};
/*dcl*/class SwHeaderAndFooterEatSpacingItem{};
/*dcl*/class SwHeaderFrm{};
/*dcl*/class SwInvertGrf{};
/*dcl*/class SwLuminanceGrf{};
/*dcl*/class SwMirrorGrf{};
/*dcl*/class SwNumRuleItem{};
/*dcl*/class SwParaChangeTrackingInfo {}; 
/*dcl*/class SwParaConnectBorderItem{};
/*dcl*/class SwRedline {}; 
/*dcl*/class SwRegisterItem{};
/*dcl*/class SwRootFrm{};
/*dcl*/class SwRotationGrf{};
/*dcl*/class SwShapeList_Impl; 
/*dcl*/class SwTblBoxNumFormat{};
/*dcl*/class SwTextGridItem{};
/*dcl*/class SwTransparencyGrf{};
/*dcl*/class SwTxtAttr{};
/*dcl*/class SwXTextPortion {}; 
/*dcl*/class SystemEnvData {}; 
/*dcl*/class SystemFontData {}; 
/*dcl*/class SystemGraphicsData {}; 
/*dcl*/class SystemTextLayoutData {}; 
/*dcl*/class SystemWindow {}; 
/*dcl*/class TextAlign {}; 
/*dcl*/class TrackingEvent {}; 
/*dcl*/class VCLXGraphicsList_impl {}; 
/*dcl*/class VCLXWindow {}; 
/*dcl*/class VEC_CELL {}; 
/*dcl*/class VclAlign {}; 
/*dcl*/class VclPackType {}; 
/*dcl*/class VirtualDevice {}; 
/*dcl*/class Wallpaper {}; 

/*dcl*/class WindowImpl {}; 
/*dcl*/class WindowResHeader {}; 
/*dcl*/class WindowType {}; 
/*dcl*/class XFillGradientItem{};
/*dcl*/class XFillStyleItem{};
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
/*dcl*/class nType {}; 
/*dcl*/class node_pointer {}; 

/*dcl*/class reference {}; 
/*dcl*/class reverse_iterator {}; 
/*dcl*/class sal_uIntPtr {}; 
/*fwd*/class AllSettings; 
/*fwd*/class AlphaMask; 
/*fwd*/class Bitmap; 
/*fwd*/class BitmapEx; 
/*fwd*/class Color; 
/*fwd*/class CommandEvent; 
/*fwd*/class Cursor; 
/*fwd*/class DataChangedEvent; 
/*fwd*/class Dialog; 
/*fwd*/class DockingManager; 
/*fwd*/class Font; 
/*fwd*/class FontEmphasisMark; 
/*fwd*/class FontInfo; 
/*fwd*/class FontMetric; 
/*fwd*/class GDIMetaFile; 
/*fwd*/class GfxLink; 
/*fwd*/class Gradient; 
/*fwd*/class Hatch; 
/*fwd*/class HelpEvent; 
/*fwd*/class Image; 
/*fwd*/class ImplControlValue; 
/*fwd*/class ImplDevFontList; 
/*fwd*/class ImplFontCache; 
/*fwd*/class ImplFontEntry; 
/*fwd*/class ImplFrameData; 
/*fwd*/class ImplGetDevFontList; 
/*fwd*/class ImplGetDevSizeList; 
/*fwd*/class ImplLayoutArgs; 
/*fwd*/class ImplMapRes; 
/*fwd*/class ImplObjStack; 
/*fwd*/class ImplOutDevData; 
/*fwd*/class ImplThresholdRes; 
/*fwd*/class ImplWinData; 
/*fwd*/class InputContext; 
/*fwd*/class KeyEvent; 
/*fwd*/class LanguageType; 
/*fwd*/class Line; 
/*fwd*/class LineInfo; 
/*fwd*/class Link; 
/*fwd*/class MouseEvent; 
/*fwd*/class OutDevType; 
/*fwd*/class OutDevViewType; 
/*fwd*/class Pointer; 
/*fwd*/class PointerStyle; 
/*fwd*/class PolyPolygon; 
/*fwd*/class Polygon; 
/*fwd*/class RasterOp; 
/*fwd*/class Reference; 
/*fwd*/class Region; 
/*fwd*/class ResId; 
/*fwd*/class ResMgr; 
/*fwd*/class SalFrame; 
/*fwd*/class SalGraphics; 
/*fwd*/class SalLayout; 
/*fwd*/class Selection; 
///*fwd*/class SwAccessibleChild; 
/*fwd*/class SwAccessibleChildMap; 
/*fwd*/class SwAccessibleChildSList_const_iterator; 
/*fwd*/class SwAccessibleHyperTextData; 
/*fwd*/class SwAccessibleNoTextHyperlink; 
/*fwd*/class SwFrm; 
/*fwd*/class SystemEnvData; 
/*fwd*/class SystemFontData; 
/*fwd*/class SystemGraphicsData; 
/*fwd*/class SystemTextLayoutData; 
/*fwd*/class SystemWindow; 
/*fwd*/class TextAlign; 
/*fwd*/class TrackingEvent; 
/*fwd*/class VCLXGraphicsList_impl; 
/*fwd*/class VCLXWindow; 
/*fwd*/class VclAlign; 
/*fwd*/class VclPackType; 
/*fwd*/class VirtualDevice; 
/*fwd*/class Wallpaper; 

/*fwd*/class WindowImpl; 
/*fwd*/class WindowResHeader; 
/*fwd*/class WindowType; 
/*fwd*/class nType; 
///*dcl*/class AccessibleRelation {}; 
///*dcl*/class IllegalAccessibleComponentStateException {}; 
///*dcl*/class SwAccessibleHyperTextData {}; 
///*dcl*/class SwAccessiblePortionData {}; 
///*dcl*/class TextSegment {}; 
namespace basegfx{
  enum B2VectorOrientation
    {
      ORIENTATION_POSITIVE = 0,
      ORIENTATION_NEGATIVE,
      ORIENTATION_NEUTRAL
    };

  enum B2VectorContinuity
    {
      CONTINUITY_NONE = 0,
      CONTINUITY_C1,
        CONTINUITY_C2
    };
  
  enum B2DLineJoin
    {
      B2DLINEJOIN_NONE,
      B2DLINEJOIN_MIDDLE,
        B2DLINEJOIN_BEVEL,
      B2DLINEJOIN_MITER,
      B2DLINEJOIN_ROUND
    };

}
// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2173:18: error: 'basegfx::B2DLineJoin' has not been declared

/*fwd*/class FontSelectPattern; 
/*dcl*/class FontSelectPattern {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2177:9: error: 'FontSelectPattern' has not been declared

/*fwd*/class OutDevSupportType; 
/*dcl*/class OutDevSupportType {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2187:29: error: 'OutDevSupportType' has not been declared

/*fwd*/class TextRectInfo; 
/*dcl*/class TextRectInfo {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2233:38: error: 'TextRectInfo' has not been declared

/*fwd*/class PolyPolyVector; 
/*dcl*/class PolyPolyVector {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2253:31: error: 'PolyPolyVector' has not been declared
namespace basegfx{
/*fwd*/class B2DPolyPolygonVector; 
/*dcl*/class B2DPolyPolygonVector {}; 
}
// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2257:42: error: 'basegfx::B2DPolyPolygonVector' has not been declared

/*fwd*/class MapUnit; 
/*dcl*/class MapUnit {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2511:39: error: 'MapUnit' has not been declared

/*fwd*/class FontCharMap; 
/*dcl*/class FontCharMap {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2538:30: error: 'FontCharMap' has not been declared
namespace vcl{
/*fwd*/class FontCapabilities; 
/*dcl*/class FontCapabilities {}; 
}
// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2539:36: error: 'vcl::FontCapabilities' has not been declared

/*fwd*/class ControlType; 
/*dcl*/class ControlType {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2587:40: error: 'ControlType' has not been declared

/*fwd*/class ControlPart; 
/*dcl*/class ControlPart {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2587:59: error: 'ControlPart' has not been declared

/*fwd*/class ControlState; 
/*dcl*/class ControlState {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2596:45: error: 'ControlState' has not been declared

/*fwd*/class SystemParentData; 
/*dcl*/class SystemParentData {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2634:53: error: 'SystemParentData' has not been declared

/*fwd*/class ImplDelData; 
/*dcl*/class ImplDelData {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2669:22: error: 'ImplDelData' has not been declared

/*fwd*/class ImplCalcToTopData; 
/*dcl*/class ImplCalcToTopData {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2724:25: error: 'ImplCalcToTopData' has not been declared

/*fwd*/class NotifyEvent; 
/*dcl*/class NotifyEvent {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2730:51: error: 'NotifyEvent' has not been declared

/*fwd*/class Timer; 
/*dcl*/class Timer {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2754:28: error: 'Timer' has not been declared

/*fwd*/class ScrollBar; 
/*dcl*/class ScrollBar {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2759:28: error: 'ScrollBar' has not been declared

/*fwd*/class VclSimpleEvent; 
/*dcl*/class VclSimpleEvent {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2793:32: error: 'VclSimpleEvent' has not been declared

/*fwd*/class StateChangedType; 
/*dcl*/class StateChangedType {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2824:32: error: 'StateChangedType' has not been declared
namespace vcl{
/*fwd*/class ControlLayoutData; 
/*dcl*/class ControlLayoutData {}; 
}
// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:3090:33: error: 'vcl::ControlLayoutData' has not been declared

/*fwd*/class FixedText; 
/*dcl*/class FixedText {}; 

// mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:3152:29: error: 'FixedText' has not been declared



class SvxUnoTextRangeBase{};
namespace com {namespace sun {namespace star {namespace accessibility { class AccessibleEventObject; }}}}
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

struct _xmlTextWriter;
typedef struct _xmlTextWriter *xmlTextWriterPtr;

class xub_StrLen{};
namespace osl{
  class Mutex{};
  class MutexGuard{
  public:
    MutexGuard(Mutex){}
  };
};
namespace rtl{
  class OString{
public:
  OString(const char *){}
  const char * getStr(){}
  OString & operator += (const char *){}
};
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
    bool isEmpty() const{}

    OUString & operator=( const OUString & str ){}
    sal_Unicode operator [](sal_Int32 index) const {}

    ///
    };

    sal_Bool operator == ( const OUString& rStr1, const OUString& rStr2 ){}
    sal_Bool operator == ( const OUString& rStr1, const sal_Unicode * pStr2 ){}
    sal_Bool operator == ( const sal_Unicode * pStr1, const OUString& rStr2 ){}
    sal_Bool operator != ( const OUString& rStr1, const OUString& rStr2 ){}
    sal_Bool operator != ( const OUString& rStr1, const sal_Unicode * pStr2 ){}
    sal_Bool operator != ( const sal_Unicode * pStr1, const OUString& rStr2 ){}
    sal_Bool operator < ( const OUString& rStr1, const OUString& rStr2 ){}
    sal_Bool operator > ( const OUString& rStr1, const OUString& rStr2 ){}
    sal_Bool operator <= ( const OUString& rStr1, const OUString& rStr2 ) {}
    sal_Bool operator >= ( const OUString& rStr1, const OUString& rStr2 ){}
    OUString operator+( const OUString& rStr1, const OUString& rStr2 ){}


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
  class PopupWindowControllerImpl;
};
class SwSectionFmt{};
class SwSectionData{};
class SwTOXBase;
class SwStartNode;
class SwTxtFmtColl;
/*fwd*/class FnForEach_SwNodes;
/*fwd*/class Graphic;
/*fwd*/class GraphicObject;
typedef sal_uInt8 SdrLayerID;
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
  enum SwMoveFlags
    {
      DOC_MOVEDEFAULT = 0x00,
      DOC_MOVEALLFLYS = 0x01,
      DOC_CREATEUNDOOBJ = 0x02,
      DOC_MOVEREDLINES = 0x04,
      DOC_NO_DELFRMS = 0x08
    };
  
  enum InsertFlags
    { 
      INS_DEFAULT = 0x00, 
      INS_EMPTYEXPAND = 0x01, 
      INS_NOHINTEXPAND = 0x02, 
      INS_FORCEHINTEXPAND = 0x04
    };
class IDocumentContentOperations{
public:

};
class IDocumentDeviceAccess{};
class IDocumentDrawModelAccess{};
class IDocumentFieldsAccess{};
class IDocumentLayoutAccess{};
class IDocumentLineNumberAccess{};
class IDocumentLinksAdministration{};
class IDocumentListItems{
public:
  class tSortedNodeNumList {}; 
};

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
//class SwDoc{};
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
        class XGraphic{};
      }}}}
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

  long Width() const { }
  long Height() const { }
  long& Width() {  }
  long& Height() { }


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
  Size GetSize() const {};

  bool IsInside( const Point& rPOINT ) const;
  bool IsInside( const Rectangle& rRect ) const;

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

  sal_Bool HasArea() const{};
  void Clear(){};

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

/*fwd*/class FrameControlType; 
/*dcl*/class FrameControlType {}; 
class SwViewImp;
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:1967:39: error: 'TypeId' does not name a type
/*fwd*/class TypeId; 
/*dcl*/class TypeId {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:1968:11: error: 'SwViewImp' does not name a type
/*fwd*/class SwViewImp; 
/*dcl*/class SwViewImp {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:1971:19: error: 'OutputDevice' has not been declared
/*fwd*/class OutputDevice; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:1989:5: error: 'stack' in namespace 'std' does not name a type
namespace std{
/*fwd*/class stack; 
/*dcl*/class stack {}; 
}

class SdrPaintWindow{};
class SwRootFrmPtr{};

class SwViewShell;

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2033:11: error: 'IDocumentStatistics' does not name a type
/*fwd*/class IDocumentStatistics; 
/*dcl*/class IDocumentStatistics {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2034:5: error: 'IDocumentUndoRedo' does not name a type
/*fwd*/class IDocumentUndoRedo; 
/*dcl*/class IDocumentUndoRedo {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2037:11: error: 'IDocumentOutlineNodes' does not name a type
/*fwd*/class IDocumentOutlineNodes; 
/*dcl*/class IDocumentOutlineNodes {

public :
  /*dcl*/class tSortedOutlineNodeList {}; 
}; 
// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2039:20: error: 'Window* SwViewShell::GetWin() const' cannot be overloaded
// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:1908:12: error: with 'Window* SwViewShell::GetWin() const'
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2046:13: error: 'SwPrintData' has not been declared
/*fwd*/class SwPrintData; 
/*dcl*/class SwPrintData {}; 
// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2048:67: error: ISO C++ forbids declaration of 'rPrintData' with no type [-fpermissive]
// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2050:84: error: ISO C++ forbids declaration of 'rOptions' with no type [-fpermissive]
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2052:47: error: 'SfxPrinter' does not name a type
/*fwd*/class SfxPrinter; 
/*dcl*/class SfxPrinter {}; 
// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2052:59: error: ISO C++ forbids declaration of 'pPrt' with no type [-fpermissive]
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2077:11: error: 'SwAccessibilityOptions' does not name a type
/*fwd*/class SwAccessibilityOptions; 
/*dcl*/class SwAccessibilityOptions {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2078:30: error: 'ShellResource' has not been declared
/*fwd*/class ShellResource; 
/*dcl*/class ShellResource {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2084:12: error: 'SfxViewShell' does not name a type
/*fwd*/class SfxViewShell; 
/*dcl*/class SfxViewShell {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2087:5: error: 'SwPagePreviewLayout' does not name a type
/*fwd*/class SwPagePreviewLayout; 
/*dcl*/class SwPagePreviewLayout {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2098:11: error: 'SdrView' does not name a type
/*fwd*/class SdrView; 
/*dcl*/class SdrView {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2101:18: error: 'SfxItemPool' does not name a type
/*fwd*/class SfxItemPool; 
/*dcl*/class SfxItemPool {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2117:35: error: 'SvtAccessibilityOptions' has not been declared
/*fwd*/class SvtAccessibilityOptions; 
/*dcl*/class SvtAccessibilityOptions {}; 

struct RSHEADER_TYPE;
typedef sal_uInt32 RESOURCE_TYPE;
namespace vcl {
  class PDFWriterImpl{};
  class ExtOutDevData{};
  class ITextLayout{};
}
class MetricVector{};
class FontStrikeout{};
class FontUnderline{};
class ImplMultiTextLineInfo{};
class SalTwoRect{};
class BitmapReadAccess{};
namespace basegfx {
  class B2DPolygon{};
  class B2DPolyPolygon{};
  class B2DHomMatrix{};
}
class FontFamily{};

/*fwd*/class rtl_TextEncoding; 
/*dcl*/class rtl_TextEncoding {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2125:20: error: 'rtl_TextEncoding' has not been declared

/*fwd*/class FontPitch; 
/*dcl*/class FontPitch {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2135:18: error: 'FontPitch' has not been declared

/*fwd*/class FontKerning; 
/*dcl*/class FontKerning {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2141:20: error: 'FontKerning' has not been declared
/*fwd*/class FontWeight; 
/*dcl*/class FontWeight {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2144:19: error: 'FontWeight' has not been declared
/*fwd*/class FontWidth; 
/*dcl*/class FontWidth {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2146:22: error: 'FontWidth' has not been declared
/*fwd*/class FontItalic; 
/*dcl*/class FontItalic {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2148:19: error: 'FontItalic' has not been declared
/*fwd*/class FontRelief; 
/*dcl*/class FontRelief {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2154:21: error: 'FontRelief' has not been declared
/*fwd*/class ImplFontAttributes; 
/*dcl*/class ImplFontAttributes {}; 
// // /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2167:29: error: 'ImplFontAttributes' has not been declared
/*fwd*/class SvStream; 
/*dcl*/class SvStream {}; 
// /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:2173:12: error: 'SvStream' does not name a type

class LanguageTag
{
public:
  ::com::sun::star::lang::Locale getLocale() {}
};

class Font
{
private:
  Impl_Font* mpImplFont;
  void MakeUnique();  
public:
  Font();
  Font( const Font& );
  Font( const rtl::OUString& rFamilyName, const Size& );
  Font( const rtl::OUString& rFamilyName, const rtl::OUString& rStyleName, const Size& );
  Font( FontFamily eFamily, const Size& );
  ~Font();
  void SetColor( const Color& );
  const Color& GetColor() const;
  void SetFillColor( const Color& );
  const Color& GetFillColor() const;
  void SetTransparent( sal_Bool bTransparent );
  sal_Bool IsTransparent() const;
  void SetAlign( TextAlign );
  TextAlign GetAlign() const;
  void SetName( const rtl::OUString& rFamilyName );
  const rtl::OUString& GetName() const;
  void SetStyleName( const rtl::OUString& rStyleName );
  const rtl::OUString& GetStyleName() const;
  void SetSize( const Size& );
  const Size& GetSize() const;
  void SetHeight( long nHeight );
  long GetHeight() const;
  void SetWidth( long nWidth );
  long GetWidth() const;
  void SetFamily( FontFamily );
  FontFamily GetFamily() const;
  void SetCharSet( rtl_TextEncoding );
  rtl_TextEncoding GetCharSet() const;
  void SetLanguageTag( const LanguageTag & );
  const LanguageTag& GetLanguageTag() const;
  void SetCJKContextLanguageTag( const LanguageTag& );
  const LanguageTag& GetCJKContextLanguageTag() const;
  void SetLanguage( LanguageType );
  LanguageType GetLanguage() const;
  void SetCJKContextLanguage( LanguageType );
  LanguageType GetCJKContextLanguage() const;
  void SetPitch( FontPitch ePitch );
  FontPitch GetPitch() const;
  void SetOrientation( short nLineOrientation );
  short GetOrientation() const;
  void SetVertical( sal_Bool bVertical );
  sal_Bool IsVertical() const;
  void SetKerning( FontKerning nKerning );
  FontKerning GetKerning() const;
  sal_Bool IsKerning() const;
  void SetWeight( FontWeight );
  FontWeight GetWeight() const;
  void SetWidthType( FontWidth );
  FontWidth GetWidthType() const;
  void SetItalic( FontItalic );
  FontItalic GetItalic() const;
  void SetOutline( sal_Bool bOutline );
    sal_Bool IsOutline() const;
    void SetShadow( sal_Bool bShadow );
    sal_Bool IsShadow() const;
    void SetRelief( FontRelief );
    FontRelief GetRelief() const;
    void SetUnderline( FontUnderline );
    FontUnderline GetUnderline() const;
    void SetOverline( FontUnderline );
    FontUnderline GetOverline() const;
    void SetStrikeout( FontStrikeout );
    FontStrikeout GetStrikeout() const;
    void SetEmphasisMark( FontEmphasisMark );
    FontEmphasisMark GetEmphasisMark() const;
    void SetWordLineMode( sal_Bool bWordLine );
    sal_Bool IsWordLineMode() const;
    void Merge( const Font& rFont );
    void GetFontAttributes( ImplFontAttributes& rAttrs ) const;
    Font& operator=( const Font& );
    sal_Bool operator==( const Font& ) const;
    sal_Bool operator!=( const Font& rFont ) const
                            { return !(Font::operator==( rFont )); }
    sal_Bool IsSameInstance( const Font& ) const;
    friend SvStream& operator>>( SvStream& rIStm, Font& );
    friend SvStream& operator<<( SvStream& rOStm, const Font& );
    static Font identifyFont( const void* pBuffer, sal_uInt32 nLen );
};
namespace com{namespace sun{namespace star{namespace awt{
/*fwd*/class XWindowPeer; 
/*dcl*/class XWindowPeer {}; 
}}}}
namespace com{namespace sun{namespace star{namespace rendering{
/*fwd*/class XSpriteCanvas; 
/*dcl*/class XSpriteCanvas {}; 
}}}}
namespace com{namespace sun{namespace star{
      namespace datatransfer{
        namespace dnd{
          class XDropTarget{};
          class XDragSource{};
          class XDragGestureRecognizer{};
        };
        namespace clipboard {
          class XClipboard{};
        };
      }; 
}}}
class VclSizeGroup{};

class Resource
{
protected:
    ResMgr* m_pResMgr;
    bool IsAvailableRes( const ResId& rId ) const
  { //return m_pResMgr->IsAvailable( rId, this ); 
}
    void GetRes( const ResId& rResId );
    void TestRes();
    void* GetClassRes()
  { //return m_pResMgr->GetClass(); 
}
    void* IncrementRes( sal_uInt32 nBytes )
  { //return m_pResMgr->Increment( nBytes ); 
  }
    static sal_uInt32 GetObjSizeRes( RSHEADER_TYPE * pHT )
  { //return ResMgr::GetObjSize( pHT ); 
}
    sal_uInt32 GetRemainSizeRes()
  { //return m_pResMgr->GetRemainSize(); 
}
    static sal_Int32 GetLongRes( void * pLong )
  { //return ResMgr::GetLong( pLong ); 
}
    static sal_Int16 GetShortRes( void * pShort )
  { //return ResMgr::GetShort( pShort ); 
}
    sal_Int32 ReadLongRes()
  { //return m_pResMgr->ReadLong(); 
}
    sal_Int16 ReadShortRes()
  { //return m_pResMgr->ReadShort(); 
}
    rtl::OUString ReadStringRes()
  { //return m_pResMgr->ReadString(); 
}
    rtl::OString ReadByteStringRes()
  { //return m_pResMgr->ReadByteString(); 
}
    void FreeResource()
  { //m_pResMgr->PopContext( this ); 
}
    Resource() : m_pResMgr( __null ) {}
    Resource( const ResId& rResId );
public:
    ~Resource() {}
};

class Fraction{};

namespace com{ namespace sun{ namespace star{ namespace uno{
class RuntimeException : Exception{
        public:
          template<class T> RuntimeException(
                                             rtl::OUString,
                                             com::sun::star::uno::Reference<
                                             T>&){}
        };
      }}}}

class OutputDevice : public Resource
{
    friend class Application;
    friend class Bitmap;
    friend class ImplImageBmp;
    friend class Printer;
    friend class System;
    friend class VirtualDevice;
    friend class Window;
    friend class WorkWindow;
    friend class vcl::PDFWriterImpl;
    friend const char* ImplDbgCheckOutputDevice( const void* pObj );
    friend void ImplHandleResize( Window* pWindow, long nNewWidth, long nNewHeight );
private:
    mutable SalGraphics* mpGraphics;
    mutable OutputDevice* mpPrevGraphics;
    mutable OutputDevice* mpNextGraphics;
    GDIMetaFile* mpMetaFile;
    mutable ImplFontEntry* mpFontEntry;
    mutable ImplFontCache* mpFontCache;
    mutable ImplDevFontList* mpFontList;
    mutable ImplGetDevFontList* mpGetDevFontList;
    mutable ImplGetDevSizeList* mpGetDevSizeList;
    ImplObjStack* mpObjStack;
    ImplOutDevData* mpOutDevData;
    VCLXGraphicsList_impl* mpUnoGraphicsList;
    vcl::PDFWriterImpl* mpPDFWriter;
    vcl::ExtOutDevData* mpExtOutDevData;
    VirtualDevice* mpAlphaVDev;
    long mnOutOffOrigX;
    long mnOutOffLogicX;
    long mnOutOffOrigY;
    long mnOutOffLogicY;
    long mnOutOffX;
    long mnOutOffY;
    long mnOutWidth;
    long mnOutHeight;
    sal_Int32 mnDPIX;
    sal_Int32 mnDPIY;
    sal_Int32 mnDPIScaleFactor;
    mutable long mnTextOffX;
    mutable long mnTextOffY;
    mutable long mnEmphasisAscent;
    mutable long mnEmphasisDescent;
    sal_uLong mnDrawMode;
    sal_uLong mnTextLayoutMode;
    ImplMapRes maMapRes;
    ImplThresholdRes maThresRes;
    OutDevType meOutDevType;
    OutDevViewType meOutDevViewType;
    Region maRegion;
    Color maLineColor;
    Color maFillColor;
    Font maFont;
    Color maTextColor;
    Color maTextLineColor;
    Color maOverlineColor;
    TextAlign meTextAlign;
    RasterOp meRasterOp;
    Wallpaper maBackground;
    AllSettings maSettings;
    MapMode maMapMode;
    Point maRefPoint;
    sal_uInt16 mnAntialiasing;
    LanguageType meTextLanguage;
    mutable bool mbMap : 1;
    mutable bool mbMapIsDefault : 1;
    mutable bool mbClipRegion : 1;
    mutable bool mbBackground : 1;
    mutable bool mbOutput : 1;
    mutable bool mbDevOutput : 1;
    mutable bool mbOutputClipped : 1;
    mutable bool mbLineColor : 1;
    mutable bool mbFillColor : 1;
    mutable bool mbInitLineColor : 1;
    mutable bool mbInitFillColor : 1;
    mutable bool mbInitFont : 1;
    mutable bool mbInitTextColor : 1;
    mutable bool mbInitClipRegion : 1;
    mutable bool mbClipRegionSet : 1;
    mutable bool mbKerning : 1;
    mutable bool mbNewFont : 1;
    mutable bool mbTextLines : 1;
    mutable bool mbTextSpecial : 1;
    mutable bool mbRefPoint : 1;
    mutable bool mbEnableRTL : 1;
public:
    sal_Int32 ImplGetDPIX() const { return mnDPIX; }
    sal_Int32 ImplGetDPIY() const { return mnDPIY; }
    SalGraphics* ImplGetGraphics() const;
    void ImplReleaseGraphics( sal_Bool bRelease = ((sal_Bool)1) );
    sal_Bool ImplHasMirroredGraphics();
    void ImplReMirror( Point &rPoint ) const;
    void ImplReMirror( Rectangle &rRect ) const;
    void ImplReMirror( Region &rRegion ) const;
    void ImplInitOutDevData();
    void ImplDeInitOutDevData();
    void ImplInitLineColor();
    void ImplInitFillColor();
    bool ImplNewFont() const;
    void ImplInitFont() const;
    void ImplInitTextColor();
    void ImplInitClipRegion();
    bool ImplSelectClipRegion( const Region&, SalGraphics* pGraphics = __null );
    void ImplSetClipRegion( const Region* pRegion );
    SalLayout* ImplLayout( const rtl::OUString&, sal_Int32 nIndex, sal_Int32 nLen,
                                            const Point& rLogicPos = Point(0,0), long nLogicWidth=0,
                                            const sal_Int32* pLogicDXArray=__null, bool bFilter = false ) const;
    ImplLayoutArgs ImplPrepareLayoutArgs( rtl::OUString&, const sal_Int32 nIndex, const sal_Int32 nLen,
                                            long nPixelWidth, const sal_Int32* pPixelDXArray ) const;
    SalLayout* ImplGlyphFallbackLayout( SalLayout*, ImplLayoutArgs& ) const;
    static
    rtl::OUString ImplGetEllipsisString( const OutputDevice& rTargetDevice, const rtl::OUString& rStr,
                                                       long nMaxWidth, sal_uInt16 nStyle, const ::vcl::ITextLayout& _rLayout );
    static
    void ImplDrawText( OutputDevice& rTargetDevice, const Rectangle& rRect,
                                              const rtl::OUString& rOrigStr, sal_uInt16 nStyle,
                                              MetricVector* pVector, rtl::OUString* pDisplayText, ::vcl::ITextLayout& _rLayout );
    void ImplDrawTextBackground( const SalLayout& );
    void ImplDrawTextLines( SalLayout&, FontStrikeout eStrikeout, FontUnderline eUnderline, FontUnderline eOverline, sal_Bool bWordLine, sal_Bool bUnderlineAbove );
    bool ImplDrawRotateText( SalLayout& );
    void ImplDrawTextDirect( SalLayout&, sal_Bool bTextLines );
    void ImplDrawSpecialText( SalLayout& );
    void ImplDrawText( SalLayout& );
    Rectangle ImplGetTextBoundRect( const SalLayout& );
    void ImplDrawEmphasisMarks( SalLayout& );
    void ImplDrawTextRect( long nBaseX, long nBaseY, long nX, long nY, long nWidth, long nHeight );
    void ImplInitTextLineSize();
    void ImplInitAboveTextLineSize();
    void ImplDrawWaveLine( long nBaseX, long nBaseY, long nStartX, long nStartY, long nWidth, long nHeight, long nLineWidth, short nOrientation, const Color& rColor );
    void ImplDrawWaveTextLine( long nBaseX, long nBaseY, long nX, long nY, long nWidth, FontUnderline eTextLine, Color aColor, sal_Bool bIsAbove );
    void ImplDrawStraightTextLine( long nBaseX, long nBaseY, long nX, long nY, long nWidth, FontUnderline eTextLine, Color aColor, sal_Bool bIsAbove );
    void ImplDrawStrikeoutLine( long nBaseX, long nBaseY, long nX, long nY, long nWidth, FontStrikeout eStrikeout, Color aColor );
    void ImplDrawStrikeoutChar( long nBaseX, long nBaseY, long nX, long nY, long nWidth, FontStrikeout eStrikeout, Color aColor );
    void ImplDrawTextLine( long nBaseX, long nX, long nY, long nWidth, FontStrikeout eStrikeout, FontUnderline eUnderline, FontUnderline eOverline, sal_Bool bUnderlineAbove );
    void ImplDrawMnemonicLine( long nX, long nY, long nWidth );
    void ImplGetEmphasisMark( PolyPolygon& rPolyPoly, sal_Bool& rPolyLine, Rectangle& rRect1, Rectangle& rRect2, long& rYOff, long& rWidth, FontEmphasisMark eEmphasis, long nHeight, short nOrient );
    void ImplDrawEmphasisMark( long nBaseX, long nX, long nY, const PolyPolygon& rPolyPoly, sal_Bool bPolyLine, const Rectangle& rRect1, const Rectangle& rRect2 );
    static
    long ImplGetTextLines( ImplMultiTextLineInfo& rLineInfo, long nWidth, const rtl::OUString& rStr, sal_uInt16 nStyle, const ::vcl::ITextLayout& _rLayout );
    void ImplInitFontList() const;
    void ImplUpdateFontData( bool bNewFontLists );
    static void ImplUpdateAllFontData( bool bNewFontLists );
    long ImplLogicXToDevicePixel( long nX ) const;
    long ImplLogicYToDevicePixel( long nY ) const;
    long ImplLogicWidthToDevicePixel( long nWidth ) const;
    long ImplLogicHeightToDevicePixel( long nHeight ) const;
    long ImplDevicePixelToLogicWidth( long nWidth ) const;
    long ImplDevicePixelToLogicHeight( long nHeight ) const;
    float ImplFloatLogicHeightToDevicePixel( float ) const;
    Point ImplLogicToDevicePixel( const Point& rLogicPt ) const;
    Size ImplLogicToDevicePixel( const Size& rLogicSize ) const;
    Rectangle ImplLogicToDevicePixel( const Rectangle& rLogicRect ) const;
    ::basegfx::B2DPolygon ImplLogicToDevicePixel( const ::basegfx::B2DPolygon& ) const;
    ::basegfx::B2DPolyPolygon ImplLogicToDevicePixel( const ::basegfx::B2DPolyPolygon& ) const;
    Polygon ImplLogicToDevicePixel( const Polygon& rLogicPoly ) const;
    PolyPolygon ImplLogicToDevicePixel( const PolyPolygon& rLogicPolyPoly ) const;
    LineInfo ImplLogicToDevicePixel( const LineInfo& rLineInfo ) const;
    Rectangle ImplDevicePixelToLogic( const Rectangle& rLogicRect ) const;
    Region ImplPixelToDevicePixel( const Region& rRegion ) const;
    void ImplInvalidateViewTransform();
    basegfx::B2DHomMatrix ImplGetDeviceTransformation() const;
    void ImplDrawPolygon( const Polygon& rPoly, const PolyPolygon* pClipPolyPoly = __null );
    void ImplDrawPolyPolygon( const PolyPolygon& rPolyPoly, const PolyPolygon* pClipPolyPoly = __null );
    void ImplDrawPolyPolygon( sal_uInt16 nPoly, const PolyPolygon& rPolyPoly );
    void ImplDrawLinearGradient( const Rectangle& rRect, const Gradient& rGradient, sal_Bool bMtf, const PolyPolygon* pClipPolyPoly );
    void ImplDrawComplexGradient( const Rectangle& rRect, const Gradient& rGradient, sal_Bool bMtf, const PolyPolygon* pClipPolyPoly );
    void ImplDrawHatch( const PolyPolygon& rPolyPoly, const Hatch& rHatch, sal_Bool bMtf );
    void ImplCalcHatchValues( const Rectangle& rRect, long nDist, sal_uInt16 nAngle10, Point& rPt1, Point& rPt2, Size& rInc, Point& rEndPt1 );
    void ImplDrawHatchLine( const Line& rLine, const PolyPolygon& rPolyPoly, Point* pPtBuffer, sal_Bool bMtf );
    void ImplDrawWallpaper( long nX, long nY, long nWidth, long nHeight, const Wallpaper& rWallpaper );
    void ImplDrawColorWallpaper( long nX, long nY, long nWidth, long nHeight, const Wallpaper& rWallpaper );
    void ImplDrawBitmapWallpaper( long nX, long nY, long nWidth, long nHeight, const Wallpaper& rWallpaper );
    void ImplDrawGradientWallpaper( long nX, long nY, long nWidth, long nHeight, const Wallpaper& rWallpaper );
    void ImplDrawOutDevDirect( const OutputDevice* pSrcDev, SalTwoRect& rPosAry );
    void ImplDrawBitmap( const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                        const Bitmap& rBitmap, const sal_uLong nAction );
    void ImplDrawBitmapEx( const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                        const BitmapEx& rBitmapEx, const sal_uLong nAction );
    void ImplDrawMask( const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                        const Bitmap& rBitmap, const Color& rMaskColor,
                                        const sal_uLong nAction );
    void ImplDrawAlpha( const Bitmap& rBmp, const AlphaMask& rAlpha,
                                        const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel );
    Bitmap ImplBlend( Bitmap aBmp,
                                           BitmapReadAccess* pP,
                                           BitmapReadAccess* pA,
                                           const sal_Int32 nOffY,
                                           const sal_Int32 nDstHeight,
                                           const sal_Int32 nOffX,
                                           const sal_Int32 nDstWidth,
                                           const Rectangle& aBmpRect,
                                           const Size& aOutSz,
                                           const bool bHMirr,
                                           const bool bVMirr,
                                           const long* pMapX,
                                           const long* pMapY );
    Bitmap ImplBlendWithAlpha( Bitmap aBmp,
                                                    BitmapReadAccess* pP,
                                                    BitmapReadAccess* pA,
                                                    const Rectangle& aDstRect,
                                                    const sal_Int32 nOffY,
                                                    const sal_Int32 nDstHeight,
                                                    const sal_Int32 nOffX,
                                                    const sal_Int32 nDstWidth,
                                                    const long* pMapX,
                                                    const long* pMapY );
    void ImplPrintTransparent( const Bitmap& rBmp, const Bitmap& rMask,
                                        const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel );
    void ImplPrintMask( const Bitmap& rMask, const Color& rMaskColor,
                                        const Point& rDestPt, const Size& rDestSize,
                                        const Point& rSrcPtPixel, const Size& rSrcSizePixel );
    void ImplDrawFrameDev( const Point& rPt, const Point& rDevPt, const Size& rDevSize,
                                        const OutputDevice& rOutDev, const Region& rRegion );
    void ImplGetFrameDev( const Point& rPt, const Point& rDevPt, const Size& rDevSize,
                                        OutputDevice& rOutDev );
    sal_Bool ImplIsRecordLayout() const;
    static FontEmphasisMark ImplGetEmphasisMarkStyle( const Font& rFont );
    static sal_Bool ImplIsUnderlineAbove( const Font& );
    bool ImplIsAntiparallel() const ;
    Color ImplDrawModeToColor( const Color& rColor ) const;
    void ImpDrawPolyLineWithLineInfo(const Polygon& rPoly, const LineInfo& rLineInfo);
    void ImpDrawPolyPolygonWithB2DPolyPolygon(const basegfx::B2DPolyPolygon& rB2DPolyPoly);
    bool ImpTryDrawPolyLineDirect(
        const basegfx::B2DPolygon& rB2DPolygon,
        double fLineWidth = 0.0,
        double fTransparency = 0.0,
        basegfx::B2DLineJoin eLineJoin = basegfx::B2DLINEJOIN_NONE,
        com::sun::star::drawing::LineCap eLineCap = com::sun::star::drawing::LineCap_BUTT);
    void impPaintLineGeometryWithEvtlExpand(const LineInfo& rInfo, basegfx::B2DPolyPolygon aLinePolyPolygon);
    SalLayout* getFallbackFont(ImplFontEntry &rFallbackFont,
        FontSelectPattern &rFontSelData, int nFallbackLevel,
        ImplLayoutArgs& rLayoutArgs) const;
protected:
                        OutputDevice();
private:
    OutputDevice( const OutputDevice& rOutDev );
    OutputDevice& operator =( const OutputDevice& rOutDev );
public:
    virtual ~OutputDevice();
    OutDevType GetOutDevType() const { return meOutDevType; }
    bool supportsOperation( OutDevSupportType ) const;
    sal_Int32 GetDPIScaleFactor() const { return mnDPIScaleFactor; }
    vcl::PDFWriterImpl* GetPDFWriter() const { return mpPDFWriter; }
    void SetExtOutDevData( vcl::ExtOutDevData* pExtOutDevData ) { mpExtOutDevData = pExtOutDevData; }
    vcl::ExtOutDevData* GetExtOutDevData() const { return mpExtOutDevData; }
    void DrawTextLine( const Point& rPos, long nWidth,
                                      FontStrikeout eStrikeout,
                                      FontUnderline eUnderline,
                                      FontUnderline eOverline,
                                      sal_Bool bUnderlineAbove = ((sal_Bool)0) );
    void DrawText( const Point& rStartPt, const rtl::OUString& rStr,
                                  sal_Int32 nIndex = 0, sal_Int32 nLen = -1,
                                  MetricVector* pVector = __null, rtl::OUString* pDisplayText = __null );
    long GetTextWidth( const rtl::OUString& rStr, sal_Int32 nIndex = 0, sal_Int32 nLen = -1 ) const;
    long GetTextHeight() const;
    float approximate_char_width() const;
    void DrawTextArray( const Point& rStartPt, const rtl::OUString& rStr,
                                       const sal_Int32* pDXAry = __null,
                                       sal_Int32 nIndex = 0,
                                       sal_Int32 nLen = -1 );
    long GetTextArray( const rtl::OUString& rStr, sal_Int32* pDXAry = __null,
                                      sal_Int32 nIndex = 0, sal_Int32 nLen = -1 ) const;
    bool GetCaretPositions( const rtl::OUString&, sal_Int32* pCaretXArray,
                                      sal_Int32 nIndex, sal_Int32 nLen,
                                      sal_Int32* pDXAry = __null, long nWidth = 0,
                                      sal_Bool bCellBreaking = ((sal_Bool)1) ) const;
    void DrawStretchText( const Point& rStartPt, sal_uLong nWidth,
                                         const rtl::OUString& rStr,
                                         sal_Int32 nIndex = 0, sal_Int32 nLen = -1 );
    sal_Int32 GetTextBreak( const rtl::OUString& rStr, long nTextWidth,
                                      sal_Int32 nIndex = 0, sal_Int32 nLen = -1,
                                      long nCharExtra = 0 ) const;
    sal_Int32 GetTextBreak( const rtl::OUString& rStr, long nTextWidth,
                                      sal_Unicode nExtraChar, sal_Int32& rExtraCharPos,
                                      sal_Int32 nIndex, sal_Int32 nLen,
                                      long nCharExtra = 0 ) const;
    void AddTextRectActions( const Rectangle& rRect,
                                            const rtl::OUString& rOrigStr,
                                            sal_uInt16 nStyle,
                                            GDIMetaFile& rMtf );
    void DrawText( const Rectangle& rRect,
                                  const rtl::OUString& rStr, sal_uInt16 nStyle = 0,
                                  MetricVector* pVector = __null, rtl::OUString* pDisplayText = __null,
                                  ::vcl::ITextLayout* _pTextLayout = __null );
    Rectangle GetTextRect( const Rectangle& rRect,
                                     const rtl::OUString& rStr, sal_uInt16 nStyle = ((sal_uInt16)0x2000),
                                     TextRectInfo* pInfo = __null,
                                     const ::vcl::ITextLayout* _pTextLayout = __null ) const;
    rtl::OUString GetEllipsisString( const rtl::OUString& rStr, long nMaxWidth,
                                           sal_uInt16 nStyle = ((sal_uInt16)0x0400) ) const;
    void DrawCtrlText( const Point& rPos, const rtl::OUString& rStr,
                                      sal_Int32 nIndex = 0, sal_Int32 nLen = -1,
                                      sal_uInt16 nStyle = ((sal_uInt16)0x0002), MetricVector* pVector = __null, rtl::OUString* pDisplayText = __null );
    long GetCtrlTextWidth( const rtl::OUString& rStr, sal_Int32 nIndex = 0,
                                          sal_Int32 nLen = -1,
                                          sal_uInt16 nStyle = ((sal_uInt16)0x0002) ) const;
    static rtl::OUString GetNonMnemonicString( const rtl::OUString& rStr, sal_Int32& rMnemonicPos );
    static rtl::OUString GetNonMnemonicString( const rtl::OUString& rStr )
                            { sal_Int32 nDummy; return GetNonMnemonicString( rStr, nDummy ); }
    sal_Bool GetTextBoundRect( Rectangle& rRect,
                            const rtl::OUString& rStr, sal_Int32 nBase = 0, sal_Int32 nIndex = 0, sal_Int32 nLen = -1,
                            sal_uLong nLayoutWidth = 0, const sal_Int32* pDXArray = __null ) const;
    sal_Bool GetTextOutline( PolyPolygon&,
                            const rtl::OUString& rStr, sal_Int32 nBase = 0, sal_Int32 nIndex = 0,
                            sal_Int32 nLen = -1, sal_Bool bOptimize = ((sal_Bool)1),
                            sal_uLong nLayoutWidth = 0, const sal_Int32* pDXArray = __null ) const;
    sal_Bool GetTextOutlines( PolyPolyVector&,
                            const rtl::OUString& rStr, sal_Int32 nBase = 0, sal_Int32 nIndex = 0,
                            sal_Int32 nLen = -1, sal_Bool bOptimize = ((sal_Bool)1),
                            sal_uLong nLayoutWidth = 0, const sal_Int32* pDXArray = __null ) const;
    sal_Bool GetTextOutlines( ::basegfx::B2DPolyPolygonVector&,
                            const rtl::OUString& rStr, sal_Int32 nBase = 0, sal_Int32 nIndex = 0,
                            sal_Int32 nLen = -1, sal_Bool bOptimize = ((sal_Bool)1),
                            sal_uLong nLayoutWidth = 0, const sal_Int32* pDXArray = __null ) const;
    sal_Bool GetGlyphBoundRects( const Point& rOrigin, const rtl::OUString& rStr, int nIndex,
                            int nLen, int nBase, MetricVector& rVector );
    void DrawPixel( const Point& rPt );
    void DrawPixel( const Point& rPt, const Color& rColor );
    void DrawPixel( const Polygon& rPts, const Color* pColors = __null );
    void DrawPixel( const Polygon& rPts, const Color& rColor );
    void DrawLine( const Point& rStartPt, const Point& rEndPt );
    void DrawLine( const Point& rStartPt, const Point& rEndPt,
                                  const LineInfo& rLineInfo );
    void DrawPolyLine( const Polygon& rPoly );
    void DrawPolyLine(
        const basegfx::B2DPolygon&,
        double fLineWidth = 0.0,
        basegfx::B2DLineJoin = basegfx::B2DLINEJOIN_ROUND,
        com::sun::star::drawing::LineCap = com::sun::star::drawing::LineCap_BUTT);
    bool TryDrawPolyLineDirect(
        const basegfx::B2DPolygon& rB2DPolygon,
        double fLineWidth = 0.0,
        double fTransparency = 0.0,
        basegfx::B2DLineJoin eLineJoin = basegfx::B2DLINEJOIN_NONE,
        com::sun::star::drawing::LineCap eLineCap = com::sun::star::drawing::LineCap_BUTT);
    void DrawPolyLine( const Polygon& rPoly,
                                      const LineInfo& rLineInfo );
    void DrawPolygon( const Polygon& rPoly );
    void DrawPolygon( const basegfx::B2DPolygon& );
    void DrawPolyPolygon( const PolyPolygon& rPolyPoly );
    void DrawPolyPolygon( const basegfx::B2DPolyPolygon& );
    void DrawRect( const Rectangle& rRect );
    void DrawRect( const Rectangle& rRect,
                                  sal_uLong nHorzRount, sal_uLong nVertRound );
    void DrawEllipse( const Rectangle& rRect );
    void DrawArc( const Rectangle& rRect,
                                 const Point& rStartPt, const Point& rEndPt );
    void DrawPie( const Rectangle& rRect,
                                 const Point& rStartPt, const Point& rEndPt );
    void DrawChord( const Rectangle& rRect,
                                   const Point& rStartPt, const Point& rEndPt );
    void DrawOutDev( const Point& rDestPt, const Size& rDestSize,
                                    const Point& rSrcPt, const Size& rSrcSize );
    void DrawOutDev( const Point& rDestPt, const Size& rDestSize,
                                    const Point& rSrcPt, const Size& rSrcSize,
                                    const OutputDevice& rOutDev );
    void CopyArea( const Point& rDestPt,
                                  const Point& rSrcPt, const Size& rSrcSize,
                                  sal_uInt16 nFlags = 0 );
    void DrawBitmap( const Point& rDestPt,
                                    const Bitmap& rBitmap );
    void DrawBitmap( const Point& rDestPt, const Size& rDestSize,
                                    const Bitmap& rBitmap );
    void DrawBitmap( const Point& rDestPt, const Size& rDestSize,
                                    const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                    const Bitmap& rBitmap );
    void DrawBitmapEx( const Point& rDestPt,
                                      const BitmapEx& rBitmapEx );
    void DrawBitmapEx( const Point& rDestPt, const Size& rDestSize,
                                      const BitmapEx& rBitmapEx );
    void DrawBitmapEx( const Point& rDestPt, const Size& rDestSize,
                                      const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                      const BitmapEx& rBitmapEx );
    void DrawTransformedBitmapEx(
        const basegfx::B2DHomMatrix& rTransformation,
        const BitmapEx& rBitmapEx);
    void DrawMask( const Point& rDestPt,
                                  const Bitmap& rBitmap, const Color& rMaskColor );
    void DrawMask( const Point& rDestPt, const Size& rDestSize,
                                  const Bitmap& rBitmap, const Color& rMaskColor );
    void DrawMask( const Point& rDestPt, const Size& rDestSize,
                                  const Point& rSrcPtPixel, const Size& rSrcSizePixel,
                                  const Bitmap& rBitmap, const Color& rMaskColor );
    void DrawImage( const Point& rPos,
                                   const Image& rImage, sal_uInt16 nStyle = 0 );
    void DrawImage( const Point& rPos, const Size& rSize,
                                   const Image& rImage, sal_uInt16 nStyle = 0 );
    void DrawGradient( const Rectangle& rRect, const Gradient& rGradient );
    void DrawGradient( const PolyPolygon& rPolyPoly, const Gradient& rGradient );
    void AddGradientActions( const Rectangle& rRect,
                                            const Gradient& rGradient,
                                            GDIMetaFile& rMtf );
    void DrawHatch( const PolyPolygon& rPolyPoly, const Hatch& rHatch );
    void AddHatchActions( const PolyPolygon& rPolyPoly,
                                         const Hatch& rHatch,
                                         GDIMetaFile& rMtf );
    void DrawWallpaper( const Rectangle& rRect, const Wallpaper& rWallpaper );
    void DrawWaveLine( const Point& rStartPos, const Point& rEndPos, sal_uInt16 nStyle );
    void DrawGrid( const Rectangle& rRect, const Size& rDist, sal_uLong nFlags );
    void DrawTransparent( const PolyPolygon& rPolyPoly, sal_uInt16 nTransparencePercent );
    void DrawTransparent( const basegfx::B2DPolyPolygon& rB2DPolyPoly, double fTransparency);
    void DrawTransparent( const GDIMetaFile& rMtf, const Point& rPos, const Size& rSize,
                                         const Gradient& rTransparenceGradient );
    bool DrawEPS( const Point& rPt, const Size& rSz,
                                 const GfxLink& rGfxLink, GDIMetaFile* pSubst = __null );
    void DrawCheckered(
        const Point& rPos,
        const Size& rSize,
        sal_uInt32 nLen = 8,
        Color aStart = Color(((ColorData)(((sal_uInt32)((sal_uInt8)(0xFF))))|(((sal_uInt32)((sal_uInt8)(0xFF)))<<8)|(((sal_uInt32)((sal_uInt8)(0xFF)))<<16))),
        Color aEnd = Color(((ColorData)(((sal_uInt32)((sal_uInt8)(0x00))))|(((sal_uInt32)((sal_uInt8)(0x00)))<<8)|(((sal_uInt32)((sal_uInt8)(0x00)))<<16))));
    Color GetPixel( const Point& rPt ) const;
    Bitmap GetBitmap( const Point& rSrcPt, const Size& rSize ) const;
    BitmapEx GetBitmapEx( const Point& rSrcPt, const Size& rSize ) const;
    void EnableMapMode( sal_Bool bEnable = ((sal_Bool)1) );
    sal_Bool IsMapModeEnabled() const { return mbMap; }
    void EnableRTL( sal_Bool bEnable = ((sal_Bool)1));
    sal_Bool IsRTLEnabled() const { return mbEnableRTL; }
    void SetConnectMetaFile( GDIMetaFile* pMtf );
    GDIMetaFile* GetConnectMetaFile() const { return mpMetaFile; }
    void EnableOutput( sal_Bool bEnable = ((sal_Bool)1) );
    sal_Bool IsOutputEnabled() const { return mbOutput; }
    sal_Bool IsDeviceOutput() const { return mbDevOutput; }
    sal_Bool IsDeviceOutputNecessary() const { return (mbOutput && mbDevOutput); }
    sal_Bool IsOutputNecessary() const { return ((mbOutput && mbDevOutput) || (mpMetaFile != __null)); }
    void SetClipRegion();
    void SetClipRegion( const Region& rRegion );
    Region GetClipRegion() const;
    sal_Bool IsClipRegion() const { return mbClipRegion; }
    Region GetActiveClipRegion() const;
    void MoveClipRegion( long nHorzMove, long nVertMove );
    void IntersectClipRegion( const Rectangle& rRect );
    void IntersectClipRegion( const Region& rRegion );
    void SetAntialiasing( sal_uInt16 nMode = 0 );
    sal_uInt16 GetAntialiasing() const { return mnAntialiasing; }
    void SetDrawMode( sal_uLong nDrawMode );
    sal_uLong GetDrawMode() const { return mnDrawMode; }
    void SetLayoutMode( sal_uLong nTextLayoutMode );
    sal_uLong GetLayoutMode() const { return mnTextLayoutMode; }
    void SetDigitLanguage( LanguageType );
    LanguageType GetDigitLanguage() const { return meTextLanguage; }
    void SetRasterOp( RasterOp eRasterOp );
    RasterOp GetRasterOp() const { return meRasterOp; }
    void SetOutDevViewType( OutDevViewType eOutDevViewType ) { meOutDevViewType=eOutDevViewType; }
    OutDevViewType GetOutDevViewType() const { return meOutDevViewType; }
    void SetLineColor();
    void SetLineColor( const Color& rColor );
    const Color& GetLineColor() const { return maLineColor; }
    sal_Bool IsLineColor() const { return mbLineColor; }
    void SetFillColor();
    void SetFillColor( const Color& rColor );
    const Color& GetFillColor() const { return maFillColor; }
    sal_Bool IsFillColor() const { return mbFillColor; }
    void SetBackground();
    void SetBackground( const Wallpaper& rBackground );
    const Wallpaper& GetBackground() const { return maBackground; }
    sal_Bool IsBackground() const { return mbBackground; }
    void SetFont( const Font& rNewFont );
    const Font& GetFont() const { return maFont; }
    SystemFontData GetSysFontData( int nFallbacklevel ) const;
    SystemTextLayoutData GetSysTextLayoutData( const Point& rStartPt, const rtl::OUString& rStr,
                                                sal_Int32 nIndex = 0, sal_Int32 nLen = -1,
                                                const sal_Int32* pDXAry = __null ) const;
    void SetTextColor( const Color& rColor );
    const Color& GetTextColor() const { return maTextColor; }
    void SetTextFillColor();
    void SetTextFillColor( const Color& rColor );
    Color GetTextFillColor() const;
    sal_Bool IsTextFillColor() const { return !maFont.IsTransparent(); }
    void SetTextLineColor();
    void SetTextLineColor( const Color& rColor );
    const Color& GetTextLineColor() const { return maTextLineColor; }
    sal_Bool IsTextLineColor() const { return (maTextLineColor.GetTransparency() == 0); }
    void SetOverlineColor();
    void SetOverlineColor( const Color& rColor );
    const Color& GetOverlineColor() const { return maOverlineColor; }
    sal_Bool IsOverlineColor() const { return (maOverlineColor.GetTransparency() == 0); }
    void SetTextAlign( TextAlign eAlign );
    TextAlign GetTextAlign() const { return maFont.GetAlign(); }
    virtual void SetSettings( const AllSettings& rSettings );
    const AllSettings& GetSettings() const { return maSettings; }
    SystemGraphicsData GetSystemGfxData() const;
    ::com::sun::star::uno::Any GetSystemGfxDataAny() const;
    virtual void SetMapMode();
    virtual void SetMapMode( const MapMode& rNewMapMode );
    virtual void SetRelativeMapMode( const MapMode& rNewMapMode );
    const MapMode& GetMapMode() const { return maMapMode; }
    sal_Bool IsMapMode() const { return mbMap; }
    void SetRefPoint();
    void SetRefPoint( const Point& rRefPoint );
    const Point& GetRefPoint() const { return maRefPoint; }
    sal_Bool IsRefPoint() const { return mbRefPoint; }
    basegfx::B2DHomMatrix GetViewTransformation() const;
    basegfx::B2DHomMatrix GetInverseViewTransformation() const;
    basegfx::B2DHomMatrix GetViewTransformation( const MapMode& rMapMode ) const;
    basegfx::B2DHomMatrix GetInverseViewTransformation( const MapMode& rMapMode ) const;
    void SetPixelOffset( const Size& rOffset );
    Size GetPixelOffset() const;
    Point LogicToPixel( const Point& rLogicPt ) const;
    Size LogicToPixel( const Size& rLogicSize ) const;
    Rectangle LogicToPixel( const Rectangle& rLogicRect ) const;
    Polygon LogicToPixel( const Polygon& rLogicPoly ) const;
    PolyPolygon LogicToPixel( const PolyPolygon& rLogicPolyPoly ) const;
    basegfx::B2DPolyPolygon LogicToPixel( const basegfx::B2DPolyPolygon& rLogicPolyPoly ) const;
    Region LogicToPixel( const Region& rLogicRegion )const;
    Point LogicToPixel( const Point& rLogicPt,
                                      const MapMode& rMapMode ) const;
    Size LogicToPixel( const Size& rLogicSize,
                                      const MapMode& rMapMode ) const;
    Rectangle LogicToPixel( const Rectangle& rLogicRect,
                                      const MapMode& rMapMode ) const;
    Polygon LogicToPixel( const Polygon& rLogicPoly,
                                      const MapMode& rMapMode ) const;
    basegfx::B2DPolygon LogicToPixel( const basegfx::B2DPolygon& rLogicPoly,
                                          const MapMode& rMapMode ) const;
    PolyPolygon LogicToPixel( const PolyPolygon& rLogicPolyPoly,
                                      const MapMode& rMapMode ) const;
    basegfx::B2DPolyPolygon LogicToPixel( const basegfx::B2DPolyPolygon& rLogicPolyPoly,
                                          const MapMode& rMapMode ) const;
    Region LogicToPixel( const Region& rLogicRegion,
                                      const MapMode& rMapMode ) const;
    Point PixelToLogic( const Point& rDevicePt ) const;
    Size PixelToLogic( const Size& rDeviceSize ) const;
    Rectangle PixelToLogic( const Rectangle& rDeviceRect ) const;
    Polygon PixelToLogic( const Polygon& rDevicePoly ) const;
    basegfx::B2DPolygon LogicToPixel( const basegfx::B2DPolygon& rLogicPoly ) const;
    PolyPolygon PixelToLogic( const PolyPolygon& rDevicePolyPoly ) const;
    basegfx::B2DPolyPolygon PixelToLogic( const basegfx::B2DPolyPolygon& rDevicePolyPoly ) const;
    Region PixelToLogic( const Region& rDeviceRegion ) const;
    Point PixelToLogic( const Point& rDevicePt,
                                      const MapMode& rMapMode ) const;
    Size PixelToLogic( const Size& rDeviceSize,
                                      const MapMode& rMapMode ) const;
    Rectangle PixelToLogic( const Rectangle& rDeviceRect,
                                      const MapMode& rMapMode ) const;
    Polygon PixelToLogic( const Polygon& rDevicePoly,
                                      const MapMode& rMapMode ) const;
    basegfx::B2DPolygon PixelToLogic( const basegfx::B2DPolygon& rDevicePoly,
                                      const MapMode& rMapMode ) const;
    PolyPolygon PixelToLogic( const PolyPolygon& rDevicePolyPoly,
                                      const MapMode& rMapMode ) const;
    basegfx::B2DPolyPolygon PixelToLogic( const basegfx::B2DPolyPolygon& rDevicePolyPoly,
                                          const MapMode& rMapMode ) const;
    Region PixelToLogic( const Region& rDeviceRegion,
                                      const MapMode& rMapMode ) const;
    Point LogicToLogic( const Point& rPtSource,
                                      const MapMode* pMapModeSource,
                                      const MapMode* pMapModeDest ) const;
    Size LogicToLogic( const Size& rSzSource,
                                      const MapMode* pMapModeSource,
                                      const MapMode* pMapModeDest ) const;
    Rectangle LogicToLogic( const Rectangle& rRectSource,
                                      const MapMode* pMapModeSource,
                                      const MapMode* pMapModeDest ) const;
    static Point LogicToLogic( const Point& rPtSource,
                                      const MapMode& rMapModeSource,
                                      const MapMode& rMapModeDest );
    static Size LogicToLogic( const Size& rSzSource,
                                      const MapMode& rMapModeSource,
                                      const MapMode& rMapModeDest );
    static Rectangle LogicToLogic( const Rectangle& rRectSource,
                                      const MapMode& rMapModeSource,
                                      const MapMode& rMapModeDest );
    static long LogicToLogic( long nLongSource,
                                      MapUnit eUnitSource,
                                      MapUnit eUnitDest );
    static basegfx::B2DPolygon LogicToLogic( const basegfx::B2DPolygon& rPoly,
                                             const MapMode& rMapModeSource,
                                             const MapMode& rMapModeDest );
    static basegfx::B2DPolyPolygon LogicToLogic( const basegfx::B2DPolyPolygon& rPolyPoly,
                                                 const MapMode& rMapModeSource,
                                                 const MapMode& rMapModeDest );
    static basegfx::B2DHomMatrix LogicToLogic(const MapMode& rMapModeSource, const MapMode& rMapModeDest);
    Size GetOutputSizePixel() const
                            { return Size( mnOutWidth, mnOutHeight ); }
    long GetOutputWidthPixel() const { return mnOutWidth; }
    long GetOutputHeightPixel() const { return mnOutHeight; }
    long GetOutOffXPixel() const { return mnOutOffX; }
    long GetOutOffYPixel() const { return mnOutOffY; }
    Size GetOutputSize() const
                            { return PixelToLogic( GetOutputSizePixel() ); }
    void Erase();
    void Erase( const Rectangle& rRect ) { DrawWallpaper( rRect, GetBackground() ); }
    sal_Bool AddTempDevFont( const rtl::OUString& rFileURL, const rtl::OUString& rFontName );
    int GetDevFontCount() const;
    FontInfo GetDevFont( int nDevFontIndex ) const;
    int GetDevFontSizeCount( const Font& ) const;
    Size GetDevFontSize( const Font& rFont, int nSizeIndex ) const;
    sal_Bool IsFontAvailable( const rtl::OUString& rFontName ) const;
    FontMetric GetFontMetric() const;
    FontMetric GetFontMetric( const Font& rFont ) const;
    sal_Bool GetFontCharMap( FontCharMap& rFontCharMap ) const;
    bool GetFontCapabilities( vcl::FontCapabilities& rFontCapabilities ) const;
    sal_Int32 HasGlyphs( const Font& rFont, const rtl::OUString& rStr,
                            sal_Int32 nIndex = 0, sal_Int32 nLen = -1 ) const;
    long GetMinKashida() const;
    sal_uInt16 ValidateKashidas ( const rtl::OUString& rTxt,
                                            sal_uInt16 nIdx, sal_uInt16 nLen,
                                            sal_uInt16 nKashCount,
                                            const sal_uInt16* pKashidaPos,
                                            sal_uInt16* pKashidaPosDropped
                                            ) const;
    sal_uInt16 GetBitCount() const;
    sal_Bool GetTextIsRTL( const rtl::OUString&, sal_Int32 nIndex, sal_Int32 nLen ) const;
    sal_uInt16 GetAlphaBitCount() const;
    sal_uLong GetColorCount() const;
    void Push( sal_uInt16 nFlags = ((sal_uInt16)0xFFFF) );
    void Pop();
    sal_uInt32 GetGCStackDepth() const;
    sal_Bool HasAlpha();
    ::com::sun::star::uno::Reference<
        ::com::sun::star::rendering::XCanvas > GetCanvas() const;
    ::com::sun::star::uno::Reference< ::com::sun::star::awt::XGraphics > CreateUnoGraphics();
    VCLXGraphicsList_impl* GetUnoGraphicsList() const { return mpUnoGraphicsList; }
    VCLXGraphicsList_impl* CreateUnoGraphicsList()
                            {
                                mpUnoGraphicsList = new VCLXGraphicsList_impl();
                                return mpUnoGraphicsList;
                            }
    static void BeginFontSubstitution();
    static void EndFontSubstitution();
    static void AddFontSubstitute( const rtl::OUString& rFontName,
                                           const rtl::OUString& rReplaceFontName,
                                           sal_uInt16 nFlags = 0 );
    static void RemoveFontSubstitute( sal_uInt16 n );
    static sal_uInt16 GetFontSubstituteCount();
    static Font GetDefaultFont( sal_uInt16 nType,
                                        LanguageType eLang,
                                        sal_uLong nFlags,
                                        const OutputDevice* pOutDev = __null );
    bool RemoveTransparenciesFromMetaFile( const GDIMetaFile& rInMtf, GDIMetaFile& rOutMtf,
                                                          long nMaxBmpDPIX, long nMaxBmpDPIY,
                                                          bool bReduceTransparency,
                                                          bool bTransparencyAutoMode,
                                                          bool bDownsampleBitmaps,
                                                          const Color& rBackground = Color( ((ColorData)(((sal_uInt32)((sal_uInt8)(0xFF))))|(((sal_uInt32)((sal_uInt8)(0xFF)))<<8)|(((sal_uInt32)((sal_uInt8)(0xFF)))<<16)|(((sal_uInt32)((sal_uInt8)(0xFF)))<<24)) )
                                                          );
    Bitmap GetDownsampledBitmap( const Size& rDstSz,
                                              const Point& rSrcPt, const Size& rSrcSz,
                                              const Bitmap& rBmp, long nMaxBmpDPIX, long nMaxBmpDPIY );
    sal_Bool IsNativeControlSupported( ControlType nType, ControlPart nPart ) const;
    sal_Bool HitTestNativeControl( ControlType nType,
                                                ControlPart nPart,
                                                const Rectangle& rControlRegion,
                                                const Point& aPos,
                                                sal_Bool& rIsInside ) const;
    sal_Bool DrawNativeControl( ControlType nType,
                                            ControlPart nPart,
                                            const Rectangle& rControlRegion,
                                            ControlState nState,
                                            const ImplControlValue& aValue,
                                            rtl::OUString aCaption );
    sal_Bool GetNativeControlRegion( ControlType nType,
                                                ControlPart nPart,
                                                const Rectangle& rControlRegion,
                                                ControlState nState,
                                                const ImplControlValue& aValue,
                                                rtl::OUString aCaption,
                                                Rectangle &rNativeBoundingRegion,
                                                Rectangle &rNativeContentRegion ) const;
};
class Window : public OutputDevice
{
    friend class Cursor;
    friend class OutputDevice;
    friend class Application;
    friend class SystemWindow;
    friend class WorkWindow;
    friend class Dialog;
    friend class MessBox;
    friend class DockingWindow;
    friend class FloatingWindow;
    friend class GroupBox;
    friend class PushButton;
    friend class RadioButton;
    friend class SystemChildWindow;
    friend class ImplBorderWindow;
    friend class VclBuilder;
    friend class ImplDockingWindowWrapper;
    friend class ImplPopupFloatWin;
    friend class MenuFloatingWindow;
    friend class svt::PopupWindowControllerImpl;
private:
    WindowImpl* mpWindowImpl;
    void ImplInitWindowData( WindowType nType );
    friend Window* ImplFindWindow( const SalFrame* pFrame, Point& rSalFramePos );
public:
    void ImplInit( Window* pParent, WinBits nStyle, SystemParentData* pSystemParentData );
    WinBits ImplInitRes( const ResId& rResId );
    WindowResHeader ImplLoadResHeader( const ResId& rResId );
    void ImplLoadRes( const ResId& rResId );
    void ImplSetFrameParent( const Window* pParent );
    void ImplInsertWindow( Window* pParent );
    void ImplRemoveWindow( sal_Bool bRemoveFrameData );
    Window* ImplGetWindow();
    ImplFrameData* ImplGetFrameData();
                   SalFrame* ImplGetFrame() const;
    ImplWinData* ImplGetWinData() const;
    SalGraphics* ImplGetFrameGraphics() const;
    void ImplCallFocusChangeActivate( Window* pNewOverlapWindow, Window* pOldOverlapWindow );
    Window* ImplFindWindow( const Point& rFramePos );
    sal_uInt16 ImplHitTest( const Point& rFramePos );
    Window* ImplGetParent() const;
    Window* ImplGetClientWindow() const;
    Window* ImplGetBorderWindow() const;
    Window* ImplGetFirstOverlapWindow();
    const Window* ImplGetFirstOverlapWindow() const;
    Window* ImplGetFrameWindow() const;
    sal_Bool ImplIsRealParentPath( const Window* pWindow ) const;
    sal_Bool ImplIsChild( const Window* pWindow, sal_Bool bSystemWindow = ((sal_Bool)0) ) const;
    sal_Bool ImplIsWindowOrChild( const Window* pWindow, sal_Bool bSystemWindow = ((sal_Bool)0) ) const;
    sal_Bool ImplIsDockingWindow() const;
    sal_Bool ImplIsFloatingWindow() const;
    sal_Bool ImplIsSplitter() const;
    sal_Bool ImplIsPushButton() const;
    sal_Bool ImplIsOverlapWindow() const;
    void ImplSetMouseTransparent( sal_Bool bTransparent );
    int ImplTestMousePointerSet();
    PointerStyle ImplGetMousePointer() const;
    void ImplResetReallyVisible();
    void ImplSetReallyVisible();
    void ImplCallInitShow();
    void ImplAddDel( ImplDelData* pDel );
    void ImplRemoveDel( ImplDelData* pDel );
    void ImplInitResolutionSettings();
    void ImplPointToLogic( Font& rFont ) const;
    void ImplLogicToPoint( Font& rFont ) const;
    Point ImplOutputToFrame( const Point& rPos );
    Point ImplFrameToOutput( const Point& rPos );
    sal_Bool ImplSysObjClip( const Region* pOldRegion );
    void ImplUpdateSysObjChildrenClip();
    void ImplUpdateSysObjOverlapsClip();
    void ImplUpdateSysObjClip();
    sal_Bool ImplSetClipFlagChildren( sal_Bool bSysObjOnlySmaller = ((sal_Bool)0) );
    sal_Bool ImplSetClipFlagOverlapWindows( sal_Bool bSysObjOnlySmaller = ((sal_Bool)0) );
    sal_Bool ImplSetClipFlag( sal_Bool bSysObjOnlySmaller = ((sal_Bool)0) );
    void ImplIntersectWindowClipRegion( Region& rRegion );
    void ImplIntersectWindowRegion( Region& rRegion );
    void ImplExcludeWindowRegion( Region& rRegion );
    void ImplExcludeOverlapWindows( Region& rRegion );
    void ImplExcludeOverlapWindows2( Region& rRegion );
    void ImplClipBoundaries( Region& rRegion, sal_Bool bThis, sal_Bool bOverlaps );
    sal_Bool ImplClipChildren( Region& rRegion );
    void ImplClipAllChildren( Region& rRegion );
    void ImplClipSiblings( Region& rRegion );
    void ImplInitWinClipRegion();
    void ImplInitWinChildClipRegion();
    Region* ImplGetWinChildClipRegion();
    void ImplIntersectAndUnionOverlapWindows( const Region& rInterRegion, Region& rRegion );
    void ImplIntersectAndUnionOverlapWindows2( const Region& rInterRegion, Region& rRegion );
    void ImplCalcOverlapRegionOverlaps( const Region& rInterRegion, Region& rRegion );
    void ImplCalcOverlapRegion( const Rectangle& rSourceRect, Region& rRegion,
                                               sal_Bool bChildren, sal_Bool bParent, sal_Bool bSiblings );
    void ImplCallPaint( const Region* pRegion, sal_uInt16 nPaintFlags );
    void ImplCallOverlapPaint();
    void ImplPostPaint();
    void ImplInvalidateFrameRegion( const Region* pRegion, sal_uInt16 nFlags );
    void ImplInvalidateOverlapFrameRegion( const Region& rRegion );
    void ImplInvalidateParentFrameRegion( Region& rRegion );
    void ImplInvalidate( const Region* rRegion, sal_uInt16 nFlags );
    void ImplValidateFrameRegion( const Region* rRegion, sal_uInt16 nFlags );
    void ImplValidate( const Region* rRegion, sal_uInt16 nFlags );
    void ImplMoveInvalidateRegion( const Rectangle& rRect, long nHorzScroll, long nVertScroll, sal_Bool bChildren );
    void ImplMoveAllInvalidateRegions( const Rectangle& rRect, long nHorzScroll, long nVertScroll, sal_Bool bChildren );
    void ImplScroll( const Rectangle& rRect, long nHorzScroll, long nVertScroll, sal_uInt16 nFlags );
    void ImplUpdateAll( sal_Bool bOverlapWindows = ((sal_Bool)1) );
    void ImplUpdateWindowPtr( Window* pWindow );
    void ImplUpdateWindowPtr();
    void ImplUpdateOverlapWindowPtr( sal_Bool bNewFrame );
    sal_Bool ImplUpdatePos();
    void ImplUpdateSysObjPos();
    WindowImpl* ImplGetWindowImpl() const { return mpWindowImpl; }
    bool ImplCheckUIFont( const Font& rFont );
    void ImplUpdateGlobalSettings( AllSettings& rSettings, sal_Bool bCallHdl = ((sal_Bool)1) );
    void ImplAlignChildren();
    void ImplPosSizeWindow( long nX, long nY, long nWidth, long nHeight, sal_uInt16 nFlags );
    void ImplToBottomChild();
    void ImplCalcToTop( ImplCalcToTopData* pPrevData );
    void ImplToTop( sal_uInt16 nFlags );
    void ImplStartToTop( sal_uInt16 nFlags );
    void ImplFocusToTop( sal_uInt16 nFlags, sal_Bool bReallyVisible );
    void ImplShowAllOverlaps();
    void ImplHideAllOverlaps();
    void ImplNotifyKeyMouseCommandEventListeners( NotifyEvent& rNEvt );
    void ImplCallMouseMove( sal_uInt16 nMouseCode, sal_Bool bModChanged = ((sal_Bool)0) );
    void ImplGenerateMouseMove();
    void ImplGrabFocus( sal_uInt16 nFlags );
    void ImplInvertFocus( const Rectangle& rRect );
    void ImplControlFocus( sal_uInt16 nFlags = 0 );
    Window* ImplGetDlgWindow( sal_uInt16 n, sal_uInt16 nType, sal_uInt16 nStart = 0, sal_uInt16 nEnd = 0xFFFF, sal_uInt16* pIndex = __null );
    sal_Bool ImplDlgCtrl( const KeyEvent& rKEvt, sal_Bool bKeyInput );
    sal_Bool ImplHasDlgCtrl();
    void ImplDlgCtrlNextWindow();
    void ImplDlgCtrlFocusChanged( Window* pWindow, sal_Bool bGetFocus );
    Window* ImplFindDlgCtrlWindow( Window* pWindow );
    long ImplLogicUnitToPixelX( long nX, MapUnit eUnit );
    long ImplLogicUnitToPixelY( long nY, MapUnit eUnit );
    sal_Bool ImplIsWindowInFront( const Window* pTestWindow ) const;
    void ImplSaveOverlapBackground();
    sal_Bool ImplRestoreOverlapBackground( Region& rInvRegion );
    void ImplDeleteOverlapBackground();
    void ImplInvalidateAllOverlapBackgrounds();
    static void ImplNewInputContext();
    void ImplCallActivateListeners(Window*);
    void ImplCallDeactivateListeners(Window*);
    long ImplHandlePaintHdl(void*); static long LinkStubImplHandlePaintHdl(void * pThis, void *);
    long ImplGenerateMouseMoveHdl(void*); static long LinkStubImplGenerateMouseMoveHdl(void * pThis, void *);
    long ImplTrackTimerHdl(Timer*); static long LinkStubImplTrackTimerHdl(void * pThis, void *);
    long ImplAsyncFocusHdl(void*); static long LinkStubImplAsyncFocusHdl(void * pThis, void *);
    long ImplHideOwnerDrawWindowsHdl(void*); static long LinkStubImplHideOwnerDrawWindowsHdl(void * pThis, void *);
    long ImplHandleResizeTimerHdl(void*); static long LinkStubImplHandleResizeTimerHdl(void * pThis, void *);
    static void ImplCalcSymbolRect( Rectangle& rRect );
    void ImplHandleScroll( ScrollBar* pHScrl, long nX, ScrollBar* pVScrl, long nY );
    sal_Bool ImplIsAccessibleCandidate() const;
    sal_Bool ImplIsAccessibleNativeFrame() const;
    sal_uInt16 ImplGetAccessibleCandidateChildWindowCount( sal_uInt16 nFirstWindowType ) const;
    Window* ImplGetAccessibleCandidateChild( sal_uInt16 nChild, sal_uInt16& rChildCount, sal_uInt16 nFirstWindowType, sal_Bool bTopLevel = ((sal_Bool)1) ) const;
    sal_Bool ImplRegisterAccessibleNativeFrame();
    void ImplRevokeAccessibleNativeFrame();
    void ImplCallResize();
    void ImplCallMove();
    Rectangle ImplOutputToUnmirroredAbsoluteScreenPixel( const Rectangle& rRect ) const;
    void ImplMirrorFramePos( Point &pt ) const;
    long ImplGetUnmirroredOutOffX();
    void ImplIncModalCount();
    void ImplDecModalCount();
    ::std::vector<Window *>& ImplGetOwnerDrawList();
    Window* ImplGetTopmostFrameWindow();
    Rectangle ImplGetWindowExtentsRelative( Window *pRelativeWindow, sal_Bool bClientOnly ) const;
    void ImplNotifyIconifiedState( sal_Bool bIconified );
    bool ImplStopDnd();
    void ImplStartDnd();
    static void ImplInitAppFontData( Window* pWindow );
    void ImplPaintToDevice( OutputDevice* pTargetOutDev, const Point& rPos );
    void ImplIsInTaskPaneList( sal_Bool mbIsInTaskList );
    ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XCanvas >
                               ImplGetCanvas( const Size& rFullscreenSize, bool bFullscreen, bool bSpriteCanvas ) const;
private:
    Window();
    Window (const Window &);
    Window & operator= (const Window &);
protected:
    explicit Window( WindowType nType );
            void SetCompoundControl( sal_Bool bCompound );
            void ImplCallEventListeners( sal_uLong nEvent, void* pData = __null );
            void CallEventListeners( sal_uLong nEvent, void* pData = __null );
            void FireVclEvent( VclSimpleEvent* pEvent );
    void ImplAdjustNWFSizes();
    Window* getLegacyNonLayoutAccessibleRelationMemberOf() const;
    Window* getLegacyNonLayoutAccessibleRelationLabeledBy() const;
    Window* getLegacyNonLayoutAccessibleRelationLabelFor() const;
    virtual Window* getAccessibleRelationLabelFor() const;
    virtual sal_uInt16 getDefaultAccessibleRole() const;
    virtual rtl::OUString getDefaultAccessibleName() const;
public:
    explicit Window( Window* pParent, WinBits nStyle = 0 );
                        Window( Window* pParent, const ResId& rResId );
    virtual ~Window();
    virtual void MouseMove( const MouseEvent& rMEvt );
    virtual void MouseButtonDown( const MouseEvent& rMEvt );
    virtual void MouseButtonUp( const MouseEvent& rMEvt );
    virtual void KeyInput( const KeyEvent& rKEvt );
    virtual void KeyUp( const KeyEvent& rKEvt );
    virtual void PrePaint();
    virtual void Paint( const Rectangle& rRect );
    virtual void PostPaint();
    virtual void Draw( OutputDevice* pDev, const Point& rPos, const Size& rSize, sal_uLong nFlags );
    virtual void Move();
    virtual void Resize();
    virtual void Activate();
    virtual void Deactivate();
    virtual void GetFocus();
    virtual void LoseFocus();
    virtual void RequestHelp( const HelpEvent& rHEvt );
    virtual void Command( const CommandEvent& rCEvt );
    virtual void Tracking( const TrackingEvent& rTEvt );
    virtual void UserEvent( sal_uLong nEvent, void* pEventData );
    virtual void StateChanged( StateChangedType nStateChange );
    virtual void DataChanged( const DataChangedEvent& rDCEvt );
    virtual long PreNotify( NotifyEvent& rNEvt );
    virtual long Notify( NotifyEvent& rNEvt );
    virtual Window* GetPreferredKeyInputWindow();
                void AddEventListener( const Link& rEventListener );
                void RemoveEventListener( const Link& rEventListener );
                void AddChildEventListener( const Link& rEventListener );
                void RemoveChildEventListener( const Link& rEventListener );
    sal_uLong PostUserEvent( const Link& rLink, void* pCaller = __null );
    sal_Bool PostUserEvent( sal_uLong& rEventId, const Link& rLink, void* pCaller = __null );
    void RemoveUserEvent( sal_uLong nUserEvent );
    void IncrementLockCount();
    void DecrementLockCount();
    sal_Bool IsLocked( sal_Bool bChildren = ((sal_Bool)0) ) const;
    LanguageType GetInputLanguage() const;
    void SetStyle( WinBits nStyle );
    WinBits GetStyle() const;
    WinBits GetPrevStyle() const;
    void SetExtendedStyle( WinBits nExtendedStyle );
    WinBits GetExtendedStyle() const;
    void SetType( WindowType nType );
    WindowType GetType() const;
    sal_Bool IsSystemWindow() const;
    sal_Bool IsDialog() const;
    sal_Bool IsMenuFloatingWindow() const;
    sal_Bool IsToolbarFloatingWindow() const;
    sal_Bool IsTopWindow() const;
    SystemWindow* GetSystemWindow() const;
    void EnableAllResize( sal_Bool bEnable = ((sal_Bool)1) );
    void SetBorderStyle( sal_uInt16 nBorderStyle );
    sal_uInt16 GetBorderStyle() const;
    void GetBorder( sal_Int32& rLeftBorder, sal_Int32& rTopBorder,
                                   sal_Int32& rRightBorder, sal_Int32& rBottomBorder ) const;
    Size CalcWindowSize( const Size& rOutSz ) const;
    Size CalcOutputSize( const Size& rWinSz ) const;
    long CalcTitleWidth() const;
    void EnableClipSiblings( sal_Bool bClipSiblings = ((sal_Bool)1) );
    void EnableChildTransparentMode( sal_Bool bEnable = ((sal_Bool)1) );
    sal_Bool IsChildTransparentModeEnabled() const;
    void SetMouseTransparent( sal_Bool bTransparent );
    sal_Bool IsMouseTransparent() const;
    void SetPaintTransparent( sal_Bool bTransparent );
    sal_Bool IsPaintTransparent() const;
    void SetDialogControlStart( sal_Bool bStart );
    sal_Bool IsDialogControlStart() const;
    void SetDialogControlFlags( sal_uInt16 nFlags );
    sal_uInt16 GetDialogControlFlags() const;
    struct PointerState
    {
        sal_uLong mnState;
        Point maPos;
    };
    PointerState GetPointerState();
    sal_Bool IsMouseOver();
    sal_uLong GetCurrentModButtons();
    void SetInputContext( const InputContext& rInputContext );
    const InputContext& GetInputContext() const;
    void EndExtTextInput( sal_uInt16 nFlags );
    void SetCursorRect( const Rectangle* pRect = __null, long nExtTextInputWidth = 0 );
    const Rectangle* GetCursorRect() const;
    long GetCursorExtTextInputWidth() const;
    void SetCompositionCharRect( const Rectangle* pRect, long nCompositionLength, sal_Bool bVertical = ((sal_Bool)0) );
    using OutputDevice::SetSettings;
    virtual void SetSettings( const AllSettings& rSettings );
    virtual void SetSettings( const AllSettings& rSettings, sal_Bool bChild );
    void UpdateSettings( const AllSettings& rSettings, sal_Bool bChild = ((sal_Bool)0) );
    void NotifyAllChildren( DataChangedEvent& rDCEvt );
    void SetPointFont( const Font& rFont );
    Font GetPointFont() const;
    void SetZoomedPointFont( const Font& rFont );
    long GetDrawPixel( OutputDevice* pDev, long nPixels ) const;
    Font GetDrawPixelFont( OutputDevice* pDev ) const;
    void SetControlFont();
    void SetControlFont( const Font& rFont );
    Font GetControlFont() const;
    sal_Bool IsControlFont() const;
    void SetControlForeground();
    void SetControlForeground( const Color& rColor );
    Color GetControlForeground() const;
    sal_Bool IsControlForeground() const;
    void SetControlBackground();
    void SetControlBackground( const Color& rColor );
    Color GetControlBackground() const;
    sal_Bool IsControlBackground() const;
    void SetParentClipMode( sal_uInt16 nMode = 0 );
    sal_uInt16 GetParentClipMode() const;
    void SetWindowRegionPixel();
    void SetWindowRegionPixel( const Region& rRegion );
    const Region& GetWindowRegionPixel() const;
    sal_Bool IsWindowRegionPixel() const;
    Region GetWindowClipRegionPixel( sal_uInt16 nFlags = 0 ) const;
    Region GetPaintRegion() const;
    sal_Bool IsInPaint() const;
    void ExpandPaintClipRegion( const Region& rRegion );
    void SetParent( Window* pNewParent );
    Window* GetParent() const;
    Dialog* GetParentDialog() const;
    void Show( sal_Bool bVisible = ((sal_Bool)1), sal_uInt16 nFlags = 0 );
    void Hide( sal_uInt16 nFlags = 0 ) { Show( ((sal_Bool)0), nFlags ); }
    sal_Bool IsVisible() const;
    sal_Bool IsReallyVisible() const;
    sal_Bool IsReallyShown() const;
    sal_Bool IsInInitShow() const;
    void Enable( bool bEnable = true, bool bChild = true );
    void Disable( bool bChild = true ) { Enable( false, bChild ); }
    sal_Bool IsEnabled() const;
    void EnableInput( sal_Bool bEnable = ((sal_Bool)1), sal_Bool bChild = ((sal_Bool)1) );
    void EnableInput( sal_Bool bEnable, sal_Bool bChild, sal_Bool bSysWin,
                                     const Window* pExcludeWindow = __null );
    sal_Bool IsInputEnabled() const;
    void AlwaysEnableInput( sal_Bool bAlways, sal_Bool bChild = ((sal_Bool)1) );
    sal_Bool IsAlwaysEnableInput() const;
    void AlwaysDisableInput( sal_Bool bAlways, sal_Bool bChild = ((sal_Bool)1) );
    void SetCallHandlersOnInputDisabled( bool bCall );
    bool IsCallHandlersOnInputDisabled() const;
    sal_Bool IsInModalMode() const;
    bool IsInModalNonRefMode() const;
    void SetActivateMode( sal_uInt16 nMode );
    sal_uInt16 GetActivateMode() const;
    void ToTop( sal_uInt16 nFlags = 0 );
    void SetZOrder( Window* pRefWindow, sal_uInt16 nFlags );
    void EnableAlwaysOnTop( sal_Bool bEnable = ((sal_Bool)1) );
    sal_Bool IsAlwaysOnTopEnabled() const;
    virtual void setPosSizePixel( long nX, long nY,
                                         long nWidth, long nHeight,
                                         sal_uInt16 nFlags = (((((sal_uInt16)0x0001) | ((sal_uInt16)0x0002)) | (((sal_uInt16)0x0004) | ((sal_uInt16)0x0008)))) );
    virtual void SetPosPixel( const Point& rNewPos );
    virtual Point GetPosPixel() const;
    virtual void SetSizePixel( const Size& rNewSize );
    virtual Size GetSizePixel() const;
    virtual void SetPosSizePixel( const Point& rNewPos,
                                         const Size& rNewSize );
    virtual void SetOutputSizePixel( const Size& rNewSize );
    sal_Bool IsDefaultPos() const;
    sal_Bool IsDefaultSize() const;
    Point OutputToScreenPixel( const Point& rPos ) const;
    Point ScreenToOutputPixel( const Point& rPos ) const;
    Point OutputToNormalizedScreenPixel( const Point& rPos ) const;
    Point NormalizedScreenToOutputPixel( const Point& rPos ) const;
    Point OutputToAbsoluteScreenPixel( const Point& rPos ) const;
    Point AbsoluteScreenToOutputPixel( const Point& rPos ) const;
    Rectangle GetDesktopRectPixel() const;
    Rectangle GetWindowExtentsRelative( Window *pRelativeWindow ) const;
    Rectangle GetClientWindowExtentsRelative( Window *pRelativeWindow ) const;
    virtual sal_Bool IsScrollable() const;
    virtual void Scroll( long nHorzScroll, long nVertScroll,
                                sal_uInt16 nFlags = 0 );
    virtual void Scroll( long nHorzScroll, long nVertScroll,
                                const Rectangle& rRect, sal_uInt16 nFlags = 0 );
    virtual void Invalidate( sal_uInt16 nFlags = 0 );
    virtual void Invalidate( const Rectangle& rRect, sal_uInt16 nFlags = 0 );
    virtual void Invalidate( const Region& rRegion, sal_uInt16 nFlags = 0 );
    void Validate( sal_uInt16 nFlags = 0 );
    sal_Bool HasPaintEvent() const;
    void Update();
    void Flush();
    void Sync();
    void EnableDocking( sal_Bool bEnable = ((sal_Bool)1) );
    static DockingManager* GetDockingManager();
    void EnablePaint( sal_Bool bEnable );
    sal_Bool IsPaintEnabled() const;
    void SetUpdateMode( sal_Bool bUpdate );
    sal_Bool IsUpdateMode() const;
    void SetParentUpdateMode( sal_Bool bUpdate );
    void GrabFocus();
    sal_Bool HasFocus() const;
    sal_Bool HasChildPathFocus( sal_Bool bSystemWindow = ((sal_Bool)0) ) const;
    sal_Bool IsActive() const;
    sal_Bool HasActiveChildFrame();
    sal_uInt16 GetGetFocusFlags() const;
    void GrabFocusToDocument();
    void SetFakeFocus( bool bFocus );
    sal_Bool IsCompoundControl() const;
    static sal_uIntPtr SaveFocus();
    static sal_Bool EndSaveFocus( sal_uIntPtr nSaveId, sal_Bool bRestore = ((sal_Bool)1) );
    void CaptureMouse();
    void ReleaseMouse();
    sal_Bool IsMouseCaptured() const;
    void SetPointer( const Pointer& rPointer );
    const Pointer& GetPointer() const;
    void EnableChildPointerOverwrite( sal_Bool bOverwrite = ((sal_Bool)1) );
    void SetPointerPosPixel( const Point& rPos );
    Point GetPointerPosPixel();
    Point GetLastPointerPosPixel();
    void ShowPointer( sal_Bool bVisible );
    void EnterWait();
    void LeaveWait();
    sal_Bool IsWait() const;
    void SetCursor( Cursor* pCursor );
    Cursor* GetCursor() const;
    void SetZoom( const Fraction& rZoom );
    const Fraction& GetZoom() const;
    sal_Bool IsZoom() const;
    long CalcZoom( long n ) const;
    virtual void SetText( const rtl::OUString& rStr );
    virtual rtl::OUString GetText() const;
    virtual rtl::OUString GetDisplayText() const;
    virtual const Wallpaper& GetDisplayBackground() const;
    void SetHelpText( const rtl::OUString& rHelpText );
    const rtl::OUString& GetHelpText() const;
    void SetQuickHelpText( const rtl::OUString& rHelpText );
    const rtl::OUString& GetQuickHelpText() const;
    void SetHelpId( const rtl::OString& );
    const rtl::OString& GetHelpId() const;
    void SetUniqueId( const rtl::OString& );
    const rtl::OString& GetUniqueId() const;
    Window* FindWindow( const Point& rPos ) const;
    sal_uInt16 GetChildCount() const;
    Window* GetChild( sal_uInt16 nChild ) const;
    Window* GetWindow( sal_uInt16 nType ) const;
    sal_Bool IsChild( const Window* pWindow, sal_Bool bSystemWindow = ((sal_Bool)0) ) const;
    sal_Bool IsWindowOrChild( const Window* pWindow, sal_Bool bSystemWindow = ((sal_Bool)0) ) const;
    void SetData( void* pNewData );
    void* GetData() const;
    void ShowFocus( const Rectangle& rRect );
    void HideFocus();
    void Invert( const Rectangle& rRect, sal_uInt16 nFlags = 0 );
    void Invert( const Polygon& rPoly, sal_uInt16 nFlags = 0 );
    void DrawSelectionBackground( const Rectangle& rRect, sal_uInt16 highlight, sal_Bool bChecked, sal_Bool bDrawBorder, sal_Bool bDrawExtBorderOnly );
    void DrawSelectionBackground( const Rectangle& rRect, sal_uInt16 highlight, sal_Bool bChecked, sal_Bool bDrawBorder, sal_Bool bDrawExtBorderOnly, Color* pSelectionTextColor );
    void DrawSelectionBackground( const Rectangle& rRect, sal_uInt16 highlight, sal_Bool bChecked, sal_Bool bDrawBorder, sal_Bool bDrawExtBorderOnly, long nCornerRadius, Color* pSelectionTextColor, Color* pPaintColor );
    void ShowTracking( const Rectangle& rRect,
                                      sal_uInt16 nFlags = ((sal_uInt16)0x0001) );
    void HideTracking();
    void InvertTracking( const Rectangle& rRect,
                                        sal_uInt16 nFlags = ((sal_uInt16)0x0001) );
    void InvertTracking( const Polygon& rPoly, sal_uInt16 nFlags = 0 );
    void StartTracking( sal_uInt16 nFlags = 0 );
    void EndTracking( sal_uInt16 nFlags = 0 );
    sal_Bool IsTracking() const;
    void StartAutoScroll( sal_uInt16 nFlags );
    void EndAutoScroll();
    sal_Bool HandleScrollCommand( const CommandEvent& rCmd,
                                             ScrollBar* pHScrl = __null,
                                             ScrollBar* pVScrl = __null );
    void SaveBackground( const Point& rPos, const Size& rSize,
                                        const Point& rDestOff, VirtualDevice& rSaveDevice );
    const SystemEnvData* GetSystemData() const;
    ::com::sun::star::uno::Any GetSystemDataAny() const;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindowPeer > GetComponentInterface( sal_Bool bCreate = ((sal_Bool)1) );
    virtual void SetComponentInterface( ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindowPeer > xIFace );
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > GetAccessible( sal_Bool bCreate = ((sal_Bool)1) );
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > CreateAccessible();
    void SetAccessible( ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > );
    Window* GetAccessibleParentWindow() const;
    sal_uInt16 GetAccessibleChildWindowCount();
    Window* GetAccessibleChildWindow( sal_uInt16 n );
    void SetAccessibleRole( sal_uInt16 nRole );
    sal_uInt16 GetAccessibleRole() const;
    void SetAccessibleName( const rtl::OUString& rName );
    rtl::OUString GetAccessibleName() const;
    void SetAccessibleDescription( const rtl::OUString& rDescr );
    rtl::OUString GetAccessibleDescription() const;
    void SetAccessibleRelationLabeledBy( Window* pLabeledBy );
    Window* GetAccessibleRelationLabeledBy() const;
    void SetAccessibleRelationLabelFor( Window* pLabelFor );
    Window* GetAccessibleRelationLabelFor() const;
    void SetAccessibleRelationMemberOf( Window* pMemberOf );
    Window* GetAccessibleRelationMemberOf() const;
    sal_Bool IsAccessibilityEventsSuppressed( sal_Bool bTraverseParentPath = ((sal_Bool)1) );
    void SetAccessibilityEventsSuppressed(sal_Bool bSuppressed);
    ::com::sun::star::uno::Reference<
        ::com::sun::star::rendering::XCanvas > GetCanvas() const;
    ::com::sun::star::uno::Reference<
        ::com::sun::star::rendering::XSpriteCanvas > GetSpriteCanvas() const;
    void RecordLayoutData( vcl::ControlLayoutData* pLayout, const Rectangle& rRect );
    VCLXWindow* GetWindowPeer() const;
    void SetWindowPeer( ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindowPeer > xPeer, VCLXWindow* pVCLXWindow );
    sal_Bool IsCreatedWithToolkit() const;
    void SetCreatedWithToolkit( sal_Bool b );
    virtual Window* GetParentLabelFor( const Window* pLabel ) const;
    virtual Window* GetParentLabeledBy( const Window* pLabeled ) const;
    KeyEvent GetActivationKey() const;
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDropTarget > GetDropTarget();
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource > GetDragSource();
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragGestureRecognizer > GetDragGestureRecognizer();
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::clipboard::XClipboard > GetClipboard();
    virtual ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::clipboard::XClipboard > GetPrimarySelection();
    virtual Size GetOptimalSize() const;
    virtual void queue_resize();
    void set_height_request(sal_Int32 nHeightRequest);
    sal_Int32 get_height_request() const;
    void set_width_request(sal_Int32 nWidthRequest);
    sal_Int32 get_width_request() const;
    Size get_preferred_size() const;
    VclAlign get_halign() const;
    void set_halign(VclAlign eAlign);
    VclAlign get_valign() const;
    void set_valign(VclAlign eAlign);
    bool get_hexpand() const;
    void set_hexpand(bool bExpand);
    bool get_vexpand() const;
    void set_vexpand(bool bExpand);
    bool get_expand() const;
    void set_expand(bool bExpand);
    bool get_fill() const;
    void set_fill(bool bFill);
    void set_border_width(sal_Int32 nBorderWidth);
    sal_Int32 get_border_width() const;
    void set_margin_left(sal_Int32 nWidth);
    sal_Int32 get_margin_left() const;
    void set_margin_right(sal_Int32 nWidth);
    sal_Int32 get_margin_right() const;
    void set_margin_top(sal_Int32 nWidth);
    sal_Int32 get_margin_top() const;
    void set_margin_bottom(sal_Int32 nWidth);
    sal_Int32 get_margin_bottom() const;
    VclPackType get_pack_type() const;
    void set_pack_type(VclPackType ePackType);
    sal_Int32 get_padding() const;
    void set_padding(sal_Int32 nPadding);
    sal_Int32 get_grid_width() const;
    void set_grid_width(sal_Int32 nCols);
    sal_Int32 get_grid_left_attach() const;
    void set_grid_left_attach(sal_Int32 nAttach);
    sal_Int32 get_grid_height() const;
    void set_grid_height(sal_Int32 nRows);
    sal_Int32 get_grid_top_attach() const;
    void set_grid_top_attach(sal_Int32 nAttach);
    bool get_secondary() const;
    void set_secondary(bool bSecondary);
    bool get_non_homogeneous() const;
    void set_non_homogeneous(bool bNonHomogeneous);
    virtual bool set_property(const rtl::OString &rKey, const rtl::OString &rValue);
    bool set_font_attribute(const rtl::OString &rKey, const rtl::OString &rValue);
    void add_to_size_group(boost::shared_ptr< VclSizeGroup > xGroup);
    void remove_from_all_size_groups();
    void add_mnemonic_label(FixedText *pLabel);
    void remove_mnemonic_label(FixedText *pLabel);
    std::vector<FixedText*> list_mnemonic_labels() const;
    void reorderWithinParent(sal_uInt16 nNewPosition);
    void EnableNativeWidget( sal_Bool bEnable = ((sal_Bool)1) );
    sal_Bool IsNativeWidgetEnabled() const;
    void PaintToDevice( OutputDevice* pDevice, const Point& rPos, const Size& rSize );
    void doLazyDelete();
    sal_uInt16 GetIndicatorState() const;
    void SimulateKeyPress( sal_uInt16 nKeyCode ) const;
    virtual rtl::OUString GetSurroundingText() const;
    virtual Selection GetSurroundingTextSelection() const;
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


class SwViewShell : public SwCrsrShell{
public :
  Window * GetWin() const{}
  bool IsPreview(){}
  SwPostItMgr * GetPostItMgr(){}
  const SwFrm* GetLayout(){}
  template <class T> bool DOISA(T) const{}
private:
//     friend void SetOutDev( SwViewShell *pSh, OutputDevice *pOut );
//     friend void SetOutDevAndWin( SwViewShell *pSh, OutputDevice *pOut, Window *pWin, sal_uInt16 nZoom );
//     friend class SwViewImp;
//     friend class SwLayIdle;
//     friend class SwPagePreviewLayout;
//     friend void SetSwVisArea( SwViewShell *pSh, const SwRect & );
//     static BitmapEx* mpReplaceBmp;
//     static BitmapEx* mpErrorBmp;
  static sal_Bool mbLstAct;
  Point maPrtOffst;
  Size maBrowseBorder;
  SwRect maInvalidRect;
  SfxViewShell *mpSfxViewShell;
  SwViewImp *mpImp;
  Window *mpWin;
  OutputDevice *mpOut;
  OutputDevice* mpTmpRef;
  SwViewOption *mpOpt;
  SwAccessibilityOptions* mpAccOptions;
  sal_Bool mbDocSizeChgd :1;
  sal_Bool mbPaintWorks :1;
  sal_Bool mbPaintInProgress :1;
  sal_Bool mbViewLocked :1;
  sal_Bool mbInEndAction :1;
  sal_Bool mbPreview :1;
  sal_Bool mbFrameView :1;
  sal_Bool mbEnableSmooth :1;
  sal_Bool mbEndActionByVirDev:1;
  bool mbShowHeaderSeparator:1;
  bool mbShowFooterSeparator:1;
  bool mbHeaderFooterEdit:1;
  bool mbInConstructor:1;
  bool mbTiledRendering:1;
  SdrPaintWindow* mpTargetPaintWindow;
  OutputDevice* mpBufferedOut;
  SwRootFrmPtr mpLayout;
//     void Init( const SwViewOption *pNewOpt );
//     inline void ResetInvalidRect();
  void Reformat(){}
//     void PaintDesktop( const SwRect & );
//     void _PaintDesktop( const SwRegionRects &rRegion );
//     sal_Bool CheckInvalidForPaint( const SwRect & );
//     void PrepareForPrint( const SwPrintData &rOptions );
//     void ImplApplyViewOptions( const SwViewOption &rOpt );
protected:
  static ShellResource* mpShellRes;
  static Window* mpCareWindow;
  SwRect maVisArea;
  SwDoc *mpDoc;
  sal_uInt16 mnStartAction;
  sal_uInt16 mnLockPaint;
  bool mbSelectAll;
public:
    static void* CreateType(); static TypeId StaticType(); static sal_Bool IsOf( TypeId aSameOrSuperType ); virtual TypeId Type() const; virtual sal_Bool IsA( TypeId aSameOrSuperType ) const;
          SwViewImp *Imp() { return mpImp; }
    const SwViewImp *Imp() const { return mpImp; }
    const SwNodes& GetNodes() const;
    void InitPrt( OutputDevice *pOutDev );
    inline void StartAction();
           void ImplStartAction();
    inline void EndAction( const sal_Bool bIdleEnd = ((sal_Bool)0) );
           void ImplEndAction( const sal_Bool bIdleEnd = ((sal_Bool)0) );
    sal_uInt16 ActionCount() const { return mnStartAction; }
    sal_Bool ActionPend() const { return mnStartAction != 0; }
    sal_Bool IsInEndAction() const { return mbInEndAction; }
    void SetEndActionByVirDev( sal_Bool b ) { mbEndActionByVirDev = b; }
    sal_Bool IsEndActionByVirDev() { return mbEndActionByVirDev; }
    void SetRestoreActions(sal_uInt16 nSet);
    sal_uInt16 GetRestoreActions() const;
    inline sal_Bool HasInvalidRect() const { return maInvalidRect.HasArea(); }
    void ChgHyphenation() { Reformat(); }
    void ChgNumberDigits();
    sal_Bool AddPaintRect( const SwRect &rRect );
    void InvalidateWindows( const SwRect &rRect );
protected:
  //    std::stack<Region> mPrePostPaintRegions;
    OutputDevice* mpPrePostOutDev;
    MapMode maPrePostMapMode;
public:
    void PrePaint();
    void DLPrePaint2(const Region& rRegion);
    void DLPostPaint2(bool bPaintFormLayer);
    const MapMode& getPrePostMapMode() const { return maPrePostMapMode; }
    virtual void Paint(const Rectangle &rRect);
    void PaintTile(VirtualDevice &rDevice, int contextWidth, int contextHeight, int tilePosX, int tilePosY, long tileWidth, long tileHeight);
    sal_Bool IsPaintInProgress() const { return mbPaintInProgress; }
  bool IsDrawingLayerPaintInProgress() const {};    //{ return !mPrePostPaintRegions.empty(); }
    virtual void VisPortChgd( const SwRect & );
    sal_Bool SmoothScroll( long lXDiff, long lYDiff, const Rectangle* );
    void EnableSmooth( sal_Bool b ) { mbEnableSmooth = b; }
    const SwRect& VisArea() const { return maVisArea; }
    void MakeVisible( const SwRect & );
    void SizeChgNotify();
    void UISizeNotify();
    Point GetPagePos( sal_uInt16 nPageNum ) const;
    sal_uInt16 GetNumPages();
    sal_Bool IsDummyPage( sal_uInt16 nPageNum ) const;
    void SetFirstVisPageInvalid();
    SwRootFrm *GetLayout() const;
    sal_Bool IsNewLayout() const;
     Size GetDocSize() const;
    void CalcLayout();
    sal_uInt16 GetPageCount() const;
    const Size GetPageSize( sal_uInt16 nPageNum, bool bSkipEmptyPages ) const;
    inline SwDoc *GetDoc() const { return mpDoc; }
    const IDocumentSettingAccess* getIDocumentSettingAccess() const;
          IDocumentSettingAccess* getIDocumentSettingAccess();
    const IDocumentDeviceAccess* getIDocumentDeviceAccess() const;
          IDocumentDeviceAccess* getIDocumentDeviceAccess();
    const IDocumentMarkAccess* getIDocumentMarkAccess() const;
          IDocumentMarkAccess* getIDocumentMarkAccess();
    const IDocumentDrawModelAccess* getIDocumentDrawModelAccess() const;
          IDocumentDrawModelAccess* getIDocumentDrawModelAccess();
    const IDocumentRedlineAccess* getIDocumentRedlineAccess() const;
          IDocumentRedlineAccess* getIDocumentRedlineAccess();
    const IDocumentLayoutAccess* getIDocumentLayoutAccess() const;
          IDocumentLayoutAccess* getIDocumentLayoutAccess();
    IDocumentContentOperations* getIDocumentContentOperations();
    IDocumentStylePoolAccess* getIDocumentStylePoolAccess();
    const IDocumentStatistics* getIDocumentStatistics() const;
    IDocumentUndoRedo const& GetIDocumentUndoRedo() const;
    IDocumentUndoRedo & GetIDocumentUndoRedo();
    const IDocumentListItems* getIDocumentListItemsAccess() const;
    const IDocumentOutlineNodes* getIDocumentOutlineNodesAccess() const;
    OutputDevice& GetRefDev() const;
  //    inline Window* GetWin() const { return mpWin; }
    inline OutputDevice* GetOut() const { return mpOut; }
    void SetWin(Window* win) { mpWin = win; }
    static inline sal_Bool IsLstEndAction() { return SwViewShell::mbLstAct; }
    void ChgAllPageOrientation( sal_uInt16 eOri );
    void ChgAllPageSize( Size &rSz );
    sal_Bool PrintOrPDFExport( OutputDevice *pOutDev,
            SwPrintData const& rPrintData,
            sal_Int32 nRenderer );
    void PrintProspect( OutputDevice *pOutDev, const SwPrintData &rPrintData,
            sal_Int32 nRenderer );
    static void PrtOle2( SwDoc *pDoc, const SwViewOption *pOpt, const SwPrintData& rOptions,
                         OutputDevice* pOleOut, const Rectangle& rRect );
    SwDoc * FillPrtDoc( SwDoc* pPrtDoc, const SfxPrinter* pPrt );
    void CalcPagesForPrint( sal_uInt16 nMax );
    void UpdateFlds(sal_Bool bCloseDB = ((sal_Bool)0));
    sal_Bool IsAnyFieldInDoc() const;
    void UpdateAllCharts();
    sal_Bool HasCharts() const;
    void SetParaSpaceMax( bool bNew );
    void SetParaSpaceMaxAtPages( bool bNew );
    void SetTabCompat( bool bNew );
    void SetAddExtLeading( bool bNew );
    void SetUseVirDev( bool nNew );
    void SetAddParaSpacingToTableCells( bool _bAddParaSpacingToTableCells );
    void SetUseFormerLineSpacing( bool _bUseFormerLineSpacing );
    void SetUseFormerObjectPositioning( bool _bUseFormerObjPos );
    void SetConsiderWrapOnObjPos( bool _bConsiderWrapOnObjPos );
    void SetUseFormerTextWrapping( bool _bUseFormerTextWrapping );
    void SetDoNotJustifyLinesWithManualBreak( bool _bDoNotJustifyLinesWithManualBreak );
    void LayoutIdle();
    inline const SwViewOption *GetViewOptions() const { return mpOpt; }
    virtual void ApplyViewOptions( const SwViewOption &rOpt );
           void SetUIOptions( const SwViewOption &rOpt );
    virtual void SetReadonlyOption(sal_Bool bSet);
           void SetPDFExportOption(sal_Bool bSet);
           void SetPrtFormatOption(sal_Bool bSet);
           void SetReadonlySelectionOption(sal_Bool bSet);
    const SwAccessibilityOptions* GetAccessibilityOptions() const { return mpAccOptions;}
    static void SetShellRes( ShellResource* pRes ) { mpShellRes = pRes; }
    static ShellResource* GetShellRes();
    static void SetCareWin( Window* pNew );
    static Window* GetCareWin(SwViewShell& rVSh)
                          { return mpCareWindow ? mpCareWindow : CareChildWin(rVSh); }
    static Window* CareChildWin(SwViewShell& rVSh);
    inline SfxViewShell *GetSfxViewShell() { return mpSfxViewShell; }
    inline void SetSfxViewShell(SfxViewShell *pNew) { mpSfxViewShell = pNew; }
    virtual void DrawSelChanged();
    SwPagePreviewLayout* PagePreviewLayout();
    void AdjustOptionsForPagePreview( SwPrintData const& rPrintOptions );
    sal_Bool IsViewLocked() const { return mbViewLocked; }
    void LockView( sal_Bool b ) { mbViewLocked = b; }
    inline void LockPaint();
           void ImplLockPaint();
    inline void UnlockPaint( sal_Bool bVirDev = ((sal_Bool)0) );
           void ImplUnlockPaint( sal_Bool bVirDev );
           sal_Bool IsPaintLocked() const { return mnLockPaint != 0; }
    sal_Bool HasDrawView() const;
    void MakeDrawView();
          SdrView *GetDrawView();
    const SdrView *GetDrawView() const { return ((SwViewShell*)this)->GetDrawView(); }
    SdrView *GetDrawViewWithValidMarkList();
    inline const SfxItemPool& GetAttrPool() const;
                 SfxItemPool& GetAttrPool();
    sal_Bool IsPreview() const { return mbPreview; }
    sal_Bool IsFrameView() const { return mbFrameView; }
    void SetFrameView( const Size& rBrowseBorder )
           { mbFrameView = ((sal_Bool)1); maBrowseBorder = rBrowseBorder; }
    void CheckBrowseView( sal_Bool bBrowseChgd );
    const Size& GetBrowseBorder() const;
    sal_Int32 GetBrowseWidth() const;
    void SetBrowseBorder( const Size& rNew );
    ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible > CreateAccessible();
    ::com::sun::star::uno::Reference<
        ::com::sun::star::accessibility::XAccessible >
            CreateAccessiblePreview();
    void ShowPreviewSelection( sal_uInt16 nSelPage );
    void InvalidateAccessibleFocus();
    void ApplyAccessiblityOptions(SvtAccessibilityOptions& rAccessibilityOptions);
    void InvalidateAccessibleParaFlowRelation( const SwTxtFrm* _pFromTxtFrm,                                               const SwTxtFrm* _pToTxtFrm );
    void InvalidateAccessibleParaTextSelection();
    void InvalidateAccessibleParaAttrs( const SwTxtFrm& rTxtFrm );
    SwAccessibleMap* GetAccessibleMap();
    SwViewShell( SwViewShell&, Window *pWin = 0, OutputDevice *pOut = 0,
                long nFlags = 0 );
    SwViewShell( SwDoc& rDoc, Window *pWin,
               const SwViewOption *pOpt = 0, OutputDevice *pOut = 0,
               long nFlags = 0 );
    virtual ~SwViewShell();
    sal_Int32 GetPageNumAndSetOffsetForPDF( OutputDevice& rOut, const SwRect& rRect ) const;
    inline bool IsInConstructor() const { return mbInConstructor; }
    static const BitmapEx& GetReplacementBitmap( bool bIsErrorState );
    static void DeleteReplacementBitmaps();
    const SwPostItMgr* GetPostItMgr() const { return (const_cast<SwViewShell*>(this))->GetPostItMgr(); }
  //    SwPostItMgr* GetPostItMgr();
    void ToggleHeaderFooterEdit();
    bool IsHeaderFooterEdit() const { return mbHeaderFooterEdit; }
  bool IsShowHeaderFooterSeparator( FrameControlType eControl ) {} // return (eControl == Header)? mbShowHeaderSeparator: mbShowFooterSeparator; }
  virtual void SetShowHeaderFooterSeparator( FrameControlType eControl, bool bShow ) {}//{ if ( eControl == Header ) mbShowHeaderSeparator = bShow; else mbShowFooterSeparator = bShow; }
    bool IsSelectAll() { return mbSelectAll; }
};
/*class SwAccessibleMap{
  public:
  SwViewShell * GetShell() const {}
  };*/

typedef void* FontToSubsFontConverter;

using namespace com::sun::star::awt;
template <class T> void OSL_ENSURE(T, const char * message){}
class typelib_TypeDescription{};
class typelib_TypeClass{};
com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleContext>){
}
com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, sal_Int16){
}
class FunkyXAccessible{};
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
  ND_TEXTNODE,
  CHECK_FOR_DEFUNC,
  CHECK_FOR_WINDOW,
  ClearFrm,
  CNT_GRF,
  CNT_OLE,
  CNT_TXT,
  COL_AUTO,
  COL_TRANSPARENT,
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
class SwDocShell{
public:
    rtl::OUString GetTitle() const;
  rtl::OUString GetTitle( sal_uInt16 nMaxLen = 0 ) const;
};

enum sfx_title {
  SFX_TITLE_TITLE   = 0,
  SFX_TITLE_FILENAME  = 1,
  SFX_TITLE_FULLNAME   = 2,
  SFX_TITLE_APINAME   = 3,
  SFX_TITLE_DETECT   = 4,
  SFX_TITLE_CAPTION   = 5,
  SFX_TITLE_PICKLIST   = 6,
  SFX_TITLE_HISTORY   = 7,
  SFX_TITLE_MAXLEN   = 10
};

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
// class Window{
// public:
//   bool HasFocus(){}
//   FunkyXAccessible funky;
//   ::com::sun::star::uno::Reference<
//     ::com::sun::star::accessibility::XAccessible > r;
//   ::com::sun::star::uno::Reference<
//     ::com::sun::star::accessibility::XAccessible
//     > GetAccessible(){}
//   FunkyXAccessible   GetAccessible2(){}
//   Window*  GetAccessibleParentWindow(){}
//   Point OutputToAbsoluteScreenPixel(::com::sun::star::awt::Point ) {}
// };


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
  void InvalidateStates( tAccessibleStates _nStates ) ;
    // the XAccessibleRelationSet may have changed
  void InvalidateRelation( sal_uInt16 nType ) ;
  void InvalidateTextSelection() ; 
  void InvalidateAttr() ; 
  bool HasAdditionalAccessibleChildren() ;
  Window* GetAdditionalAccessibleChild( const sal_Int32 nIndex ) ;
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
    size_t nBeforePortions;     /// no of portions before first model character
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


class SwAttrPool;
class SwPageDescs{};
/*fwd*/class DocumentSettingId; 
/*dcl*/class DocumentSettingId {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7143:13: error: 'SwFldUpdateFlags' does not name a type


/*fwd*/class SwFldUpdateFlags; 
/*dcl*/class SwFldUpdateFlags {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7145:13: error: 'SwCharCompressType' does not name a type


/*fwd*/class SwCharCompressType; 
/*dcl*/class SwCharCompressType {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7157:19: error: 'JobSetup' does not name a type


/*fwd*/class JobSetup; 
/*dcl*/class JobSetup {}; 

// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7158:47: error: ISO C++ forbids declaration of 'rJobSetup' with no type [-fpermissive]


// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7163:13: error: 'RedlineMode_t' does not name a type


/*fwd*/class RedlineMode_t; 
/*dcl*/class RedlineMode_t {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7169:19: error: 'SwRedlineTbl' does not name a type


/*fwd*/class SwRedlineTbl; 
/*dcl*/class SwRedlineTbl {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7195:13: error: 'sfx2' does not name a type


/*fwd*/namespace sfx2 {
         
}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7598:13: error: 'LinkManager' in namespace 'sfx2' does not name a type
namespace sfx2{
/*fwd*/class LinkManager; 
/*dcl*/class LinkManager {}; 
}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7603:13: error: 'SvLinkSource' in namespace 'sfx2' does not name a type
namespace sfx2{
/*fwd*/class SvLinkSource; 
/*dcl*/class SvLinkSource {}; 
}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8258:33: error: 'SvxBorderLine' in 'class editeng' does not name a type

namespace editeng { 
/*dcl*/class SvxBorderLine {};}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8327:5: error: 'IXmlIdRegistry' in namespace 'sfx2' does not name a type
namespace sfx2{
/*fwd*/class IXmlIdRegistry; 
/*dcl*/class IXmlIdRegistry {}; 
}


/*fwd*/class SwFldTypes; 
/*dcl*/class SwFldTypes {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7205:13: error: 'SwFieldType' does not name a type


/*fwd*/class SwFieldType; 
/*dcl*/class SwFieldType {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7212:28: error: 'SwTxtFld' has not been declared


/*fwd*/class SwTxtFld; 
/*dcl*/class SwTxtFld {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7212:70: error: 'SwMsgPoolItem' has not been declared


/*fwd*/class SwMsgPoolItem; 
/*dcl*/class SwMsgPoolItem {}; 

/*fwd*/class SwDocUpdtFld; 
/*dcl*/class SwDocUpdtFld {}; 

/*fwd*/class DateTime; 
/*dcl*/class DateTime {}; 

/*fwd*/class SwCalc; 
/*dcl*/class SwCalc {}; 
/*fwd*/class _SetGetExpFld; 
/*dcl*/class _SetGetExpFld {}; 
/*fwd*/class SwHash; 
/*dcl*/class SwHash {}; 
/*fwd*/class SwFlyFrmFmt; 
/*dcl*/class SwFlyFrmFmt {}; 
/*fwd*/class SwDrawFrmFmt; 
/*dcl*/class SwDrawFrmFmt {}; 
/*fwd*/class SetAttrMode; 
/*dcl*/class SetAttrMode {}; 
namespace utl{
/*fwd*/class TransliterationWrapper; 
/*dcl*/class TransliterationWrapper {}; 
}
/*fwd*/class SwFmt; 
/*dcl*/class SwFmt {}; 
/*fwd*/class SwCharFmt; 
/*dcl*/class SwCharFmt {}; 
/*fwd*/class SwNumRule; 
/*dcl*/class SwNumRule {}; 
/*fwd*/class SwLineNumberInfo; 
/*dcl*/class SwLineNumberInfo {}; 
/*fwd*/class SwDocStat; 
/*dcl*/class SwDocStat {}; 
/*fwd*/class SdrPageView; 
/*dcl*/class SdrPageView {}; 

/*fwd*/class SwLayouter; 
/*dcl*/class SwLayouter {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7330:13: error: 'SwChartDataProvider' does not name a type


/*fwd*/class SwChartDataProvider; 
/*dcl*/class SwChartDataProvider {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7331:58: error: 'SwTable' does not name a type


/*fwd*/class SwTable; 
/*dcl*/class SwTable {}; 

// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7331:67: error: ISO C++ forbids declaration of 'pTable' with no type [-fpermissive]


// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7332:13: error: 'SwChartLockController_Helper' does not name a type


/*fwd*/class SwChartLockController_Helper; 
/*dcl*/class SwChartLockController_Helper {}; 

/*fwd*/class SwNodeNum; 
/*dcl*/class SwNodeNum {}; 

/*fwd*/class SwList; 
/*dcl*/class SwList {}; 

namespace sw{
/*fwd*/class tExternalDataType; 
/*dcl*/class tExternalDataType {}; 
}

namespace sw{
/*fwd*/class tExternalDataPointer; 
/*dcl*/class tExternalDataPointer {}; 
}
/*fwd*/class EditFieldInfo; 
/*dcl*/class EditFieldInfo {}; 

/*fwd*/class SwPosFlyFrms; 
/*dcl*/class SwPosFlyFrms {}; 

/*fwd*/class SwFtnInfo; 
/*dcl*/class SwFtnInfo {}; 

/*fwd*/class SwEndNoteInfo; 
/*dcl*/class SwEndNoteInfo {}; 

/*fwd*/class SwFtnIdxs; 
/*dcl*/class SwFtnIdxs {}; 


/*fwd*/class SwConversionArgs; 
/*dcl*/class SwConversionArgs {}; 

/*fwd*/class SwAuthEntry; 
/*dcl*/class SwAuthEntry {}; 

/*fwd*/class SwNewDBMgr; 
/*dcl*/class SwNewDBMgr {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7444:27: error: 'SwDBData' does not name a type


/*fwd*/class SwDBData; 
/*dcl*/class SwDBData {}; 

/*fwd*/class SwFrmFmts; 
/*dcl*/class SwFrmFmts {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7471:11: error: 'SwCharFmts' does not name a type


/*fwd*/class SwCharFmts; 
/*dcl*/class SwCharFmts {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7497:11: error: 'SwTxtFmtColls' does not name a type


/*fwd*/class SwTxtFmtColls; 
/*dcl*/class SwTxtFmtColls {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7502:5: error: 'SwConditionTxtFmtColl' does not name a type


/*fwd*/class SwConditionTxtFmtColl; 
/*dcl*/class SwConditionTxtFmtColl {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7514:11: error: 'SwGrfFmtColls' does not name a type


/*fwd*/class SwGrfFmtColls; 
/*dcl*/class SwGrfFmtColls {}; 

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7526:29: error: 'FlyCntType' has not been declared

/*fwd*/class SwTextBlocks; 
/*dcl*/class SwTextBlocks {}; 

/*fwd*/class SwRenderData; 
/*dcl*/class SwRenderData {}; 
/*fwd*/class SwPrintUIOptions; 
/*dcl*/class SwPrintUIOptions {}; 
/*fwd*/class SfxStyleFamily; 
/*dcl*/class SfxStyleFamily {}; 
/*fwd*/class SwTOXMarks; 
/*dcl*/class SwTOXMarks {}; 
/*fwd*/class SwTOXMark; 
/*dcl*/class SwTOXMark {}; 

/*fwd*/class SwTOXBaseSection; 
/*dcl*/class SwTOXBaseSection {}; 

/*fwd*/class SwTOXType; 
/*dcl*/class SwTOXType {}; 

/*fwd*/class TOXTypes; 
/*dcl*/class TOXTypes {}; 


/*fwd*/class SwTOXTypes; 
/*dcl*/class SwTOXTypes {}; 

/*fwd*/class SwTOIKeyType; 
/*dcl*/class SwTOIKeyType {}; 


/*fwd*/class SwSortOptions; 
/*dcl*/class SwSortOptions {}; 

/*fwd*/class SwNumRuleTbl; 
/*dcl*/class SwNumRuleTbl {}; 

/*fwd*/class eDefaultNumberFormatPositionAndSpaceMode; 
/*dcl*/class eDefaultNumberFormatPositionAndSpaceMode {}; 

/*fwd*/class SwTabCols; 
/*dcl*/class SwTabCols {}; 

/*fwd*/class SwTableAutoFmt; 
/*dcl*/class SwTableAutoFmt {}; 

/*fwd*/class SwTwips; 
/*dcl*/class SwTwips {}; 

/*fwd*/class SwFmtRefMark; 
/*dcl*/class SwFmtRefMark {}; 


/*fwd*/class SwEditShell; 
/*dcl*/class SwEditShell {}; 

namespace sw{
/*fwd*/class IShellCursorSupplier; 
/*dcl*/class IShellCursorSupplier {}; 
}
/*fwd*/class SwSectionFmts; 
/*dcl*/class SwSectionFmts {}; 
/*fwd*/class SfxObjectShellLock; 
/*dcl*/class SfxObjectShellLock {}; 

/*fwd*/class SfxObjectShell; 
/*dcl*/class SfxObjectShell {}; 

/*fwd*/class SwDrawView; 
/*dcl*/class SwDrawView {}; 

/*fwd*/class Outliner; 
/*dcl*/class Outliner {}; 
/*fwd*/class SwAutoCorrExceptWord; 
/*dcl*/class SwAutoCorrExceptWord {}; 
/*fwd*/class SvxMacro; 
/*dcl*/class SvxMacro {}; 

/*fwd*/class SbxArray; 
/*dcl*/class SbxArray {}; 
/*fwd*/class SwCallMouseEvent; 
/*dcl*/class SwCallMouseEvent {}; 

/*fwd*/class SvNumberFormatter; 
/*dcl*/class SvNumberFormatter {}; 
/*fwd*/class SwPagePreviewPrtData; 
/*dcl*/class SwPagePreviewPrtData {}; 

/*fwd*/class SwUnoCrsrTbl; 
/*dcl*/class SwUnoCrsrTbl {}; 

/*fwd*/class SwUnoCrsr; 
/*dcl*/class SwUnoCrsr {}; 
/*fwd*/class RndStdIds; 
/*dcl*/class RndStdIds {}; 

/*fwd*/class SwExtTextInput; 
/*dcl*/class SwExtTextInput {}; 

/*fwd*/class SwAutoCompleteWord; 
/*dcl*/class SwAutoCompleteWord {}; 

/*fwd*/class SwRubyList; 
/*dcl*/class SwRubyList {}; 

/*fwd*/class SwLayoutCache; 
/*dcl*/class SwLayoutCache {}; 

/*fwd*/class IGrammarContact; 
/*dcl*/class IGrammarContact {}; 

namespace com{namespace sun{namespace star{namespace container{
/*fwd*/class XNameContainer; 
/*dcl*/class XNameContainer {}; 
}}}}


namespace sw{
/*fwd*/class MetaFieldManager; 
/*dcl*/class MetaFieldManager {}; 
}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7926:5: error: 'UndoManager' in namespace 'sw' does not name a type

namespace sw{
/*fwd*/class UndoManager; 
/*dcl*/class UndoManager {}; 
}


namespace boost{
/*fwd*/class is_null; 
/*dcl*/class is_null {}; 
}

// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7789:29: error: 'XSpellChecker1' is not a member of 'com::sun::star::linguistic2'
namespace com{namespace sun{namespace star{namespace linguistic2{
/*fwd*/class XSpellChecker1; 
/*dcl*/class XSpellChecker1 {}; 
}}}}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7793:9: error: 'XHyphenatedWord' is not a member of 'com::sun::star::linguistic2'
namespace com{namespace sun{namespace star{namespace linguistic2{
/*fwd*/class XHyphenatedWord; 
/*dcl*/class XHyphenatedWord {}; 
}}}}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7953:33: error: 'SwTOXSearch' has not been declared
/*fwd*/class SwTOXSearch; 
/*dcl*/class SwTOXSearch {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8054:39: error: 'SwInsertTableOptions' does not name a type
/*fwd*/class SwInsertTableOptions; 
/*dcl*/class SwInsertTableOptions {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8128:37: error: 'SwLabelType' does not name a type
/*fwd*/class SwLabelType; 
/*dcl*/class SwLabelType {}; 
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8161:39: error: 'XStorage' is not a member of 'com::sun::star::embed'
namespace com{namespace sun{namespace star{namespace embed{
/*fwd*/class XStorage; 
/*dcl*/class XStorage {}; 
}}}}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8269:37: error: 'XProofreadingIterator' is not a member of 'com::sun::star::linguistic2'
namespace com{namespace sun{namespace star{namespace linguistic2{
/*fwd*/class XProofreadingIterator; 
/*dcl*/class XProofreadingIterator {}; 
}}}}


namespace com{namespace sun{namespace star{namespace i18n{
/*fwd*/class ForbiddenCharacters; 
/*dcl*/class ForbiddenCharacters {}; 
}}}}
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8048:15: error: 'SvxNumPositionAndSpaceMode' in namespace 'SvxNumberFormat' does not name a type
// in line /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:8315:37: error: 'XVBAEventProcessor' is not a member of 'com::sun::star::script::vba'
namespace com{namespace sun{namespace star{namespace script{namespace vba{
/*fwd*/class XVBAEventProcessor; 
/*dcl*/class XVBAEventProcessor {}; 
}}}}}

/*fwd*/class SvxForbiddenCharactersTable; 
/*dcl*/class SvxForbiddenCharactersTable {}; 

enum FlyCntType
{
     FLYCNTTYPE_ALL = 0,
     FLYCNTTYPE_FRM,
     FLYCNTTYPE_GRF,
     FLYCNTTYPE_OLE

};

namespace com{namespace sun{ namespace star{
    namespace text{
        class XNumberingFormatter;
    }
}}}

namespace com { namespace sun { namespace star { namespace style { namespace NumberingType {

          enum _X_ { 
            AIU_FULLWIDTH_JA = (sal_Int16)21,
            AIU_HALFWIDTH_JA = (sal_Int16)22,
            ARABIC = (sal_Int16)4,
            BITMAP = (sal_Int16)8,
            CHARS_ARABIC = (sal_Int16)31,
            CHARS_ARABIC_ABJAD = (sal_Int16)54,
            CHARS_CYRILLIC_LOWER_LETTER_BG = (sal_Int16)39,
            CHARS_CYRILLIC_LOWER_LETTER_N_BG = (sal_Int16)41,
            CHARS_CYRILLIC_LOWER_LETTER_N_RU = (sal_Int16)45,
            CHARS_CYRILLIC_LOWER_LETTER_N_SR = (sal_Int16)51,
            CHARS_CYRILLIC_LOWER_LETTER_RU = (sal_Int16)43,
            CHARS_CYRILLIC_LOWER_LETTER_SR = (sal_Int16)49,
            CHARS_CYRILLIC_UPPER_LETTER_BG = (sal_Int16)38,
            CHARS_CYRILLIC_UPPER_LETTER_N_BG = (sal_Int16)40,
            CHARS_CYRILLIC_UPPER_LETTER_N_RU = (sal_Int16)44,
            CHARS_CYRILLIC_UPPER_LETTER_N_SR = (sal_Int16)50,
            CHARS_CYRILLIC_UPPER_LETTER_RU = (sal_Int16)42,
            CHARS_CYRILLIC_UPPER_LETTER_SR = (sal_Int16)48,
            CHARS_GREEK_LOWER_LETTER = (sal_Int16)53,
            CHARS_GREEK_UPPER_LETTER = (sal_Int16)52,
            CHARS_HEBREW = (sal_Int16)33,
            CHARS_KHMER = (sal_Int16)35,
            CHARS_LAO = (sal_Int16)36,
            CHARS_LOWER_LETTER = (sal_Int16)1,
            CHARS_LOWER_LETTER_N = (sal_Int16)10,
            CHARS_MYANMAR = (sal_Int16)47,
            CHARS_NEPALI = (sal_Int16)34,
            CHARS_PERSIAN = (sal_Int16)46,
            CHARS_PERSIAN_WORD = (sal_Int16)55,
            CHARS_THAI = (sal_Int16)32,
            CHARS_TIBETAN = (sal_Int16)37,
            CHARS_UPPER_LETTER = (sal_Int16)0,
            CHARS_UPPER_LETTER_N = (sal_Int16)9,
            CHAR_SPECIAL = (sal_Int16)6,
            CIRCLE_NUMBER = (sal_Int16)14,
            DI_ZI_ZH = (sal_Int16)19,
            FULLWIDTH_ARABIC = (sal_Int16)13,
            HANGUL_CIRCLED_JAMO_KO = (sal_Int16)29,
            HANGUL_CIRCLED_SYLLABLE_KO = (sal_Int16)30,
            HANGUL_JAMO_KO = (sal_Int16)27,
            HANGUL_SYLLABLE_KO = (sal_Int16)28,
            IROHA_FULLWIDTH_JA = (sal_Int16)23,
            IROHA_HALFWIDTH_JA = (sal_Int16)24,
            NATIVE_NUMBERING = (sal_Int16)12,
            NUMBER_HANGUL_KO = (sal_Int16)26,
            NUMBER_LOWER_ZH = (sal_Int16)15,
            NUMBER_NONE = (sal_Int16)5,
            NUMBER_TRADITIONAL_JA = (sal_Int16)20,
            NUMBER_UPPER_KO = (sal_Int16)25,
            NUMBER_UPPER_ZH = (sal_Int16)16,
            NUMBER_UPPER_ZH_TW = (sal_Int16)17,
            PAGE_DESCRIPTOR = (sal_Int16)7,
            ROMAN_LOWER = (sal_Int16)3,
            ROMAN_UPPER = (sal_Int16)2,
            TIAN_GAN_ZH = (sal_Int16)18,
            TRANSLITERATION = (sal_Int16)11,

          };
        }}}}}


class SvxNumberType
{
    static sal_Int32 nRefCount;
  static com::sun::star::uno::Reference<com::sun::star::text::XNumberingFormatter> xFormatter;

    sal_Int16 nNumType;
    sal_Bool bShowSymbol;

public:
    explicit SvxNumberType(sal_Int16 nType = com::sun::star::style::NumberingType::ARABIC);
    SvxNumberType(const SvxNumberType& rType);
    ~SvxNumberType();

    OUString GetNumStr( sal_uLong nNo ) const;
    OUString GetNumStr( sal_uLong nNo, const com::sun::star::lang::Locale& rLocale ) const;

    void SetNumberingType(sal_Int16 nSet) {nNumType = nSet;}
    sal_Int16 GetNumberingType() const {return nNumType;}

    void SetShowSymbol(sal_Bool bSet) {bShowSymbol = bSet;}
    sal_Bool IsShowSymbol()const{return bShowSymbol;}

    sal_Bool IsTxtFmt() const
                    {
                        return com::sun::star::style::NumberingType::NUMBER_NONE != nNumType &&
                               com::sun::star::style::NumberingType::CHAR_SPECIAL != nNumType &&
                               com::sun::star::style::NumberingType::BITMAP != nNumType;
                    }
};

enum SvxCaseMap
{
    SVX_CASEMAP_NOT_MAPPED,
    SVX_CASEMAP_VERSALIEN,
    SVX_CASEMAP_GEMEINE,
    SVX_CASEMAP_TITEL,
    SVX_CASEMAP_KAPITAELCHEN,
    SVX_CASEMAP_END
};

enum SvxEscapement
{
    SVX_ESCAPEMENT_OFF,
    SVX_ESCAPEMENT_SUPERSCRIPT,
    SVX_ESCAPEMENT_SUBSCRIPT,
    SVX_ESCAPEMENT_END
};

enum SvxShadowLocation
{
    SVX_SHADOW_NONE,
    SVX_SHADOW_TOPLEFT,
    SVX_SHADOW_TOPRIGHT,
    SVX_SHADOW_BOTTOMLEFT,
    SVX_SHADOW_BOTTOMRIGHT,
    SVX_SHADOW_END
};

enum SvxTabAdjust
{
    SVX_TAB_ADJUST_LEFT = 0,
    SVX_TAB_ADJUST_RIGHT,
    SVX_TAB_ADJUST_DECIMAL,
    SVX_TAB_ADJUST_CENTER,
    SVX_TAB_ADJUST_DEFAULT,
    SVX_TAB_ADJUST_END
};

enum SvxLineSpace
{
    SVX_LINE_SPACE_AUTO,
    SVX_LINE_SPACE_FIX,
    SVX_LINE_SPACE_MIN,
    SVX_LINE_SPACE_END
};

enum SvxInterLineSpace
{
    SVX_INTER_LINE_SPACE_OFF,
    SVX_INTER_LINE_SPACE_PROP,
    SVX_INTER_LINE_SPACE_FIX,
    SVX_INTER_LINE_SPACE_END
};

enum SvxAdjust
{
    SVX_ADJUST_LEFT,
    SVX_ADJUST_RIGHT,
    SVX_ADJUST_BLOCK,
    SVX_ADJUST_CENTER,
    SVX_ADJUST_BLOCKLINE,
    SVX_ADJUST_END
};

enum SvxSpecialLineSpace
{
    SVX_LINESPACE_USER,
    SVX_LINESPACE_ONE_LINE,
    SVX_LINESPACE_ONE_POINT_FIVE_LINES,
    SVX_LINESPACE_TWO_LINES,
    SVX_LINESPACE_END
};

enum SvxBreak
{
    SVX_BREAK_NONE,
    SVX_BREAK_COLUMN_BEFORE,
    SVX_BREAK_COLUMN_AFTER,
    SVX_BREAK_COLUMN_BOTH,
    SVX_BREAK_PAGE_BEFORE,
    SVX_BREAK_PAGE_AFTER,
    SVX_BREAK_PAGE_BOTH,
    SVX_BREAK_END
};

enum SvxCellHorJustify
{
    SVX_HOR_JUSTIFY_STANDARD,
    SVX_HOR_JUSTIFY_LEFT,
    SVX_HOR_JUSTIFY_CENTER,
    SVX_HOR_JUSTIFY_RIGHT,
    SVX_HOR_JUSTIFY_BLOCK,
    SVX_HOR_JUSTIFY_REPEAT
};

enum SvxCellJustifyMethod
{
    SVX_JUSTIFY_METHOD_AUTO,
    SVX_JUSTIFY_METHOD_DISTRIBUTE
};

enum SvxCellVerJustify
{
    SVX_VER_JUSTIFY_STANDARD,
    SVX_VER_JUSTIFY_TOP,
    SVX_VER_JUSTIFY_CENTER,
    SVX_VER_JUSTIFY_BOTTOM,
    SVX_VER_JUSTIFY_BLOCK
};

enum SvxCellOrientation
{
    SVX_ORIENTATION_STANDARD,
    SVX_ORIENTATION_TOPBOTTOM,
    SVX_ORIENTATION_BOTTOMTOP,
    SVX_ORIENTATION_STACKED
};

enum SvxDrawToolEnum
{
    SVX_SNAP_DRAW_SELECT,

    SVX_SNAP_DRAW_LINE,
    SVX_SNAP_DRAW_RECT,
    SVX_SNAP_DRAW_ELLIPSE,
    SVX_SNAP_DRAW_POLYGON_NOFILL,
    SVX_SNAP_DRAW_BEZIER_NOFILL,
    SVX_SNAP_DRAW_FREELINE_NOFILL,
    SVX_SNAP_DRAW_ARC,
    SVX_SNAP_DRAW_PIE,
    SVX_SNAP_DRAW_CIRCLECUT,
    SVX_SNAP_DRAW_TEXT,
    SVX_SNAP_DRAW_TEXT_VERTICAL,
    SVX_SNAP_DRAW_TEXT_MARQUEE,
    SVX_SNAP_DRAW_CAPTION,
    SVX_SNAP_DRAW_CAPTION_VERTICAL
};

enum SvxDrawAlignEnum
{
    SVX_OBJECT_ALIGN_LEFT,
    SVX_OBJECT_ALIGN_CENTER,
    SVX_OBJECT_ALIGN_RIGHT,
    SVX_OBJECT_ALIGN_UP,
    SVX_OBJECT_ALIGN_MIDDLE,
    SVX_OBJECT_ALIGN_DOWN
};

enum SvxDrawBezierEnum
{
    SVX_BEZIER_MOVE,
    SVX_BEZIER_INSERT,
    SVX_BEZIER_DELETE,
    SVX_BEZIER_CUTLINE,
    SVX_BEZIER_CONVERT,
    SVX_BEZIER_EDGE,
    SVX_BEZIER_SMOOTH,
    SVX_BEZIER_SYMMTR,
    SVX_BEZIER_CLOSE,
    SVX_BEZIER_ELIMINATE_POINTS
};

enum SvxSpellArea
{
    SVX_SPELL_BODY = 0,
    SVX_SPELL_BODY_END,
    SVX_SPELL_BODY_START,
    SVX_SPELL_OTHER
};

enum SvxFrameAnchor
{
    SVX_FLY_AT_CNTNT,
    SVX_FLY_IN_CNTNT,
    SVX_FLY_PAGE
};

enum SvxExtNumType
{
    SVX_NUM_CHARS_UPPER_LETTER,
    SVX_NUM_CHARS_LOWER_LETTER,
    SVX_NUM_ROMAN_UPPER,
    SVX_NUM_ROMAN_LOWER,
    SVX_NUM_ARABIC,
    SVX_NUM_NUMBER_NONE,
    SVX_NUM_CHAR_SPECIAL,
    SVX_NUM_PAGEDESC,
    SVX_NUM_BITMAP,
    SVX_NUM_CHARS_UPPER_LETTER_N,
    SVX_NUM_CHARS_LOWER_LETTER_N,
    SVX_NUM_TRANSLITERATION,
    SVX_NUM_NATIVE_NUMBERING,
    SVX_NUM_FULL_WIDTH_ARABIC,
    SVX_NUM_CIRCLE_NUMBER,
    SVX_NUM_NUMBER_LOWER_ZH,
    SVX_NUM_NUMBER_UPPER_ZH,
    SVX_NUM_NUMBER_UPPER_ZH_TW,
    SVX_NUM_TIAN_GAN_ZH,
    SVX_NUM_DI_ZI_ZH,
    SVX_NUM_NUMBER_TRADITIONAL_JA,
    SVX_NUM_AIU_FULLWIDTH_JA,
    SVX_NUM_AIU_HALFWIDTH_JA,
    SVX_NUM_IROHA_FULLWIDTH_JA,
    SVX_NUM_IROHA_HALFWIDTH_JA
};

enum SvxCompareMode
{
    SVX_CMP_AUTO = 0,
    SVX_CMP_BY_WORD,
    SVX_CMP_BY_CHAR
};


class SvxNumberFormat : public SvxNumberType
{
public:
    enum SvxNumPositionAndSpaceMode
    {
        LABEL_WIDTH_AND_POSITION,
        LABEL_ALIGNMENT
    };
    enum LabelFollowedBy
    {
        LISTTAB,
        SPACE,
        NOTHING
    };

private:
    OUString sPrefix;
    OUString sSuffix;

    SvxAdjust eNumAdjust;

    sal_uInt8 nInclUpperLevels;
    sal_uInt16 nStart;

    sal_Unicode cBullet;
    sal_uInt16 nBulletRelSize;
    Color nBulletColor;

    SvxNumPositionAndSpaceMode mePositionAndSpaceMode;

    short nFirstLineOffset;
    short nAbsLSpace;
    short nLSpace;
    short nCharTextDistance;



    LabelFollowedBy meLabelFollowedBy;

    long mnListtabPos;

    long mnFirstLineIndent;

    long mnIndentAt;

    SvxBrushItem* pGraphicBrush;
    sal_Int16 eVertOrient;

    Size aGraphicSize;
    Font* pBulletFont;

    OUString sCharStyleName;

    static long GraphicArrived( SvxNumberFormat*, void * );
    virtual void NotifyGraphicArrived();
public:
    explicit SvxNumberFormat( sal_Int16 nNumberingType,
                     SvxNumPositionAndSpaceMode ePositionAndSpaceMode = LABEL_WIDTH_AND_POSITION );
    SvxNumberFormat(const SvxNumberFormat& rFormat);
    SvxNumberFormat( SvStream & rStream );

    virtual ~SvxNumberFormat();

    SvStream& Store(SvStream &rStream, FontToSubsFontConverter pConverter);
    SvxNumberFormat* Create(SvStream& rStream );

    SvxNumberFormat& operator=( const SvxNumberFormat& );
    sal_Bool operator==( const SvxNumberFormat& ) const;
    sal_Bool operator!=( const SvxNumberFormat& rFmt) const {return !(*this == rFmt);}

    void SetNumAdjust(SvxAdjust eSet) {eNumAdjust = eSet;}
    SvxAdjust GetNumAdjust() const {return eNumAdjust;}
    void SetPrefix(const OUString& rSet) { sPrefix = rSet;}
    const OUString& GetPrefix() const { return sPrefix;}
    void SetSuffix(const OUString& rSet) { sSuffix = rSet;}
    const OUString& GetSuffix() const { return sSuffix;}

    void SetCharFmtName(const OUString& rSet){ sCharStyleName = rSet; }
    virtual OUString GetCharFmtName()const;

    void SetBulletFont(const Font* pFont);
    const Font* GetBulletFont() const {return pBulletFont;}
    void SetBulletChar(sal_Unicode cSet){cBullet = cSet;}
    sal_Unicode GetBulletChar()const {return cBullet;}
    void SetBulletRelSize(sal_uInt16 nSet) {nBulletRelSize = nSet;}
    sal_uInt16 GetBulletRelSize() const { return nBulletRelSize;}
    void SetBulletColor(Color nSet){nBulletColor = nSet;}
    Color GetBulletColor()const {return nBulletColor;}

    void SetIncludeUpperLevels( sal_uInt8 nSet ) { nInclUpperLevels = nSet;}
    sal_uInt8 GetIncludeUpperLevels()const { return nInclUpperLevels;}
    void SetStart(sal_uInt16 nSet) {nStart = nSet;}
    sal_uInt16 GetStart() const {return nStart;}

    virtual void SetGraphicBrush( const SvxBrushItem* pBrushItem, const Size* pSize = 0, const sal_Int16* pOrient = 0);
    const SvxBrushItem* GetBrush() const {return pGraphicBrush;}
    void SetGraphic( const OUString& rName );
    virtual void SetVertOrient(sal_Int16 eSet);
    virtual sal_Int16 GetVertOrient() const;
    void SetGraphicSize(const Size& rSet) {aGraphicSize = rSet;}
    const Size& GetGraphicSize() const {return aGraphicSize;}

    SvxNumPositionAndSpaceMode GetPositionAndSpaceMode() const;
    void SetPositionAndSpaceMode( SvxNumPositionAndSpaceMode ePositionAndSpaceMode );

    void SetLSpace(short nSet) {nLSpace = nSet;}
    short GetLSpace() const;
    void SetAbsLSpace(short nSet) {nAbsLSpace = nSet;}
    short GetAbsLSpace() const;
    void SetFirstLineOffset(short nSet) { nFirstLineOffset = nSet;}
    short GetFirstLineOffset() const;
    void SetCharTextDistance(short nSet) { nCharTextDistance = nSet; }
    short GetCharTextDistance() const;

    void SetLabelFollowedBy( const LabelFollowedBy eLabelFollowedBy );
    LabelFollowedBy GetLabelFollowedBy() const;
    void SetListtabPos( const long nListtabPos );
    long GetListtabPos() const;
    void SetFirstLineIndent( const long nFirstLineIndent );
    long GetFirstLineIndent() const;
    void SetIndentAt( const long nIndentAt );
    long GetIndentAt() const;

    static Size GetGraphicSizeMM100(const Graphic* pGraphic);
    static OUString CreateRomanString( sal_uLong nNo, sal_Bool bUpper );
};

// ELSE /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/all.hxx:7797:
class SwDoc {
  /*:
    public IInterface,
    public IDocumentSettingAccess,
    public IDocumentDeviceAccess,
    public IDocumentRedlineAccess,
    public IDocumentLinksAdministration,
    public IDocumentFieldsAccess,
    public IDocumentContentOperations,
    public IDocumentStylePoolAccess,
    public IDocumentLineNumberAccess,
    public IDocumentStatistics,
    public IDocumentState,
    public IDocumentDrawModelAccess,
    public IDocumentLayoutAccess,
    public IDocumentTimerAccess,
    public IDocumentChartDataProviderAccess,
    public IDocumentListItems,
    public IDocumentOutlineNodes,
    public IDocumentListsAccess,
    public IDocumentExternalData
                                     */
//    friend void _InitCore();
//     friend void _FinitCore();
//   //::boost::scoped_ptr<SwNodes> m_pNodes;
//     SwAttrPool* mpAttrPool;
//     SwPageDescs maPageDescs;
//     Link maOle2Link;    Timer maIdleTimer;
//     Timer maOLEModifiedTimer;
//     Timer maStatsUpdateTimer;
//     SwDBData maDBData;
//     ::com::sun::star::uno::Sequence <sal_Int8 > maRedlinePasswd;
//     OUString msTOIAutoMarkURL;
//     boost::ptr_vector< boost::nullable<OUString> > maPatternNms;
//     com::sun::star::uno::Reference<com::sun::star::container::XNameContainer>
//         mxXForms;
//     mutable com::sun::star::uno::Reference< com::sun::star::linguistic2::XProofreadingIterator > m_xGCIterator;    const ::boost::scoped_ptr< ::sw::mark::MarkManager> mpMarkManager;
//     const ::boost::scoped_ptr< ::sw::MetaFieldManager > m_pMetaFieldManager;
//     const ::boost::scoped_ptr< ::sw::UndoManager > m_pUndoManager;
//     SwFrmFmt *mpDfltFrmFmt;
//     SwFrmFmt *mpEmptyPageFmt;
//     SwFrmFmt *mpColumnContFmt;
//     SwCharFmt *mpDfltCharFmt;
//     SwTxtFmtColl *mpDfltTxtFmtColl;
//     SwGrfFmtColl *mpDfltGrfFmtColl;    SwFrmFmts *mpFrmFmtTbl;
//     SwCharFmts *mpCharFmtTbl;
//     SwFrmFmts *mpSpzFrmFmtTbl;
//     SwSectionFmts *mpSectionFmtTbl;
//     SwFrmFmts *mpTblFrmFmtTbl;
//     SwTxtFmtColls *mpTxtFmtCollTbl;
//     SwGrfFmtColls *mpGrfFmtCollTbl;    
//   SwTOXTypes *mpTOXTypes;
//     SwDefTOXBase_Impl * mpDefTOXBases;    
//   SwViewShell *mpCurrentView;
//     SdrModel *mpDrawModel;    
//   SwDocUpdtFld *mpUpdtFlds;
//     SwFldTypes *mpFldTypes;
//     SwNewDBMgr *mpNewDBMgr;
//     VirtualDevice *mpVirDev;
//     SfxPrinter *mpPrt;
//     SwPrintData *mpPrtData;    
//   SwDoc *mpGlossaryDoc;    
//   SwNumRule *mpOutlineRule;
//     SwFtnInfo *mpFtnInfo;
//     SwEndNoteInfo *mpEndNoteInfo;
//     SwLineNumberInfo*mpLineNumberInfo;
//     SwFtnIdxs *mpFtnIdxs;
//     SwDocStat *mpDocStat;    SwDocShell *mpDocShell;
//     SfxObjectShellLock mxTmpDocShell;
//     sfx2::LinkManager *mpLinkMgr;    
//   SwAutoCorrExceptWord *mpACEWord;    
//   SwURLStateChanged *mpURLStateChgd;
//     SvNumberFormatter *mpNumberFormatter;
//     mutable SwNumRuleTbl *mpNumRuleTbl;
//     mutable boost::unordered_map<OUString, SwNumRule *, OUStringHash> maNumRuleMap;
//     typedef boost::unordered_map<OUString, SwList*, OUStringHash> tHashMapForLists;
//     tHashMapForLists maLists;
//     tHashMapForLists maListStyleLists;
//     SwRedlineTbl *mpRedlineTbl;
//     OUString *mpAutoFmtRedlnComment;
//     SwUnoCrsrTbl *mpUnoCrsrTbl;
//     SwPagePreviewPrtData *mpPgPViewPrtData;
//     SwPaM *mpExtInputRing;
//     SwLayouter *mpLayouter;
//     IStyleAccess *mpStyleAccess;
//     SwLayoutCache *mpLayoutCache;
//     SwModify *mpUnoCallBack;
//     IGrammarContact *mpGrammarContact;
//     mutable comphelper::ImplementationReference< SwChartDataProvider
//         , ::com::sun::star::chart2::data::XDataProvider >
//                                 maChartDataProviderImplRef;
//     SwChartLockController_Helper *mpChartControllerHelper;
//     rtl::Reference<SvxForbiddenCharactersTable> mxForbiddenCharsTable;
//     com::sun::star::uno::Reference< com::sun::star::script::vba::XVBAEventProcessor > mxVbaEvents;
//     com::sun::star::uno::Reference<com::sun::star::container::XNameContainer> m_xTemplateToProjectCache;
// public:
//     struct lessThanNodeNum
//     {
//         bool operator()( const SwNodeNum* pNodeNumOne,
//                          const SwNodeNum* pNodeNumTwo ) const;
//     };
//     typedef ::std::set< const SwNodeNum*, lessThanNodeNum > tImplSortedNodeNumList;
// private:
//     tImplSortedNodeNumList* mpListItemsList;
//     ::std::auto_ptr< ::sfx2::IXmlIdRegistry > m_pXmlIdRegistry;
    sal_uInt16 mnUndoCnt;
    sal_uInt16 mnUndoSttEnd;
    sal_uInt16 mnAutoFmtRedlnCommentNo;
    sal_uInt16 mnLinkUpdMode;
    SwFldUpdateFlags meFldUpdMode;
    RedlineMode_t meRedlineMode;
    SwCharCompressType meChrCmprType;
    sal_uInt32 mnRsid;
    sal_uInt32 mnRsidRoot;
    sal_Int32 mReferenceCount;
    sal_Int32 mIdleBlockCount;
    sal_Int8 mnLockExpFld;
    SdrLayerID mnHeaven;
    SdrLayerID mnHell;
    SdrLayerID mnControls;
    SdrLayerID mnInvisibleHeaven;
    SdrLayerID mnInvisibleHell;
    SdrLayerID mnInvisibleControls;
     bool mbGlossDoc : 1;
     bool mbModified : 1;
     bool mbDtor : 1;
     bool mbPageNums : 1;
     bool mbLoaded : 1;
    bool mbUpdateExpFld : 1;
    bool mbNewDoc : 1;
    bool mbNewFldLst : 1;
    bool mbCopyIsMove : 1;
    bool mbVisibleLinks : 1;
    bool mbInReading : 1;
    bool mbInXMLImport : 1;
    bool mbUpdateTOX : 1;
    bool mbInLoadAsynchron : 1;
    bool mbHTMLMode : 1;
    bool mbInCallModified : 1;
    bool mbIsGlobalDoc : 1;
    bool mbGlblDocSaveLinks : 1;
    bool mbIsLabelDoc : 1;
    bool mbIsAutoFmtRedline : 1;
    bool mbOLEPrtNotifyPending : 1;
    bool mbAllOLENotify : 1;
    bool mbIsRedlineMove : 1;
    bool mbInsOnlyTxtGlssry : 1;
    bool mbContains_MSVBasic : 1;
    bool mbPurgeOLE : 1;
    bool mbKernAsianPunctuation : 1;
    bool mbReadlineChecked : 1;
    bool mbLinksUpdated : 1;
    bool mbClipBoard : 1;
    bool mbColumnSelection : 1;
    bool mbIsPrepareSelAll : 1;
    bool mbContainsAtPageObjWithContentAnchor : 1;
    bool mbParaSpaceMax : 1;
    bool mbParaSpaceMaxAtPages : 1;
    bool mbTabCompat : 1;
    bool mbUseVirtualDevice : 1;
    bool mbAddFlyOffsets : 1;
    bool mbAddExternalLeading : 1;
    bool mbUseHiResolutionVirtualDevice : 1;
    bool mbOldLineSpacing : 1;
    bool mbAddParaSpacingToTableCells : 1;
    bool mbUseFormerObjectPos : 1;
    bool mbUseFormerTextWrapping : 1;
    bool mbConsiderWrapOnObjPos : 1;
    bool mbMathBaselineAlignment : 1;
    bool mbStylesNoDefault : 1;
    bool mbFloattableNomargins : 1;
    bool mEmbedFonts : 1;
    bool mEmbedSystemFonts : 1;
    bool mbOldNumbering : 1;
    bool mbIgnoreFirstLineIndentInNumbering : 1;
    bool mbDoNotJustifyLinesWithManualBreak : 1;
    bool mbDoNotResetParaAttrsForNumFont : 1;
    bool mbTableRowKeep : 1;
    bool mbIgnoreTabsAndBlanksForLineCalculation : 1;
    bool mbDoNotCaptureDrawObjsOnPage : 1;
    bool mbOutlineLevelYieldsOutlineRule : 1;
    bool mbClipAsCharacterAnchoredWriterFlyFrames : 1;
    bool mbUnixForceZeroExtLeading : 1;
    bool mbOldPrinterMetrics : 1;
    bool mbTabRelativeToIndent : 1;
    bool mbProtectForm : 1;
    bool mbInvertBorderSpacing : 1;
    bool mbCollapseEmptyCellPara : 1;
    bool mbTabAtLeftIndentForParagraphsInList;
    bool mbSmallCapsPercentage66;
    bool mbTabOverflow;
    bool mbUnbreakableNumberings;
    bool mbClippedPictures;
    bool mbBackgroundParaOverDrawings;
    bool mbTabOverMargin;
    bool mbSurroundTextWrapSmall;
    bool mbLastBrowseMode : 1;
    sal_uInt32 mn32DummyCompatabilityOptions1;
    sal_uInt32 mn32DummyCompatabilityOptions2;
    bool mbStartIdleTimer;
//     static SwAutoCompleteWord *mpACmpltWords;
//     void checkRedlining(RedlineMode_t& _rReadlineMode);
//     long AddDrawUndo( SdrUndoAction * ); static long LinkStubAddDrawUndo( void* pThis, void* );
//     void DrawNotifyUndoHdl();
//     bool CopyImpl( SwPaM&, SwPosition&, const bool MakeNewFrms ,
//             const bool bCopyAll, SwPaM *const pCpyRng ) const;
//     SwFlyFrmFmt* _MakeFlySection( const SwPosition& rAnchPos,
//                                 const SwCntntNode& rNode, RndStdIds eRequestId,
//                                 const SfxItemSet* pFlyAttrSet,
//                                 SwFrmFmt* = 0 );
//     SwFlyFrmFmt* _InsNoTxtNode( const SwPosition&rPos, SwNoTxtNode*,
//                                 const SfxItemSet* pFlyAttrSet,
//                                 const SfxItemSet* pGrfAttrSet,
//                                 SwFrmFmt* = 0 );
//     void CopyFlyInFlyImpl( const SwNodeRange& rRg,
//                             const sal_Int32 nEndContentIndex,
//                             const SwNodeIndex& rStartIdx,
//                             const bool bCopyFlyAtFly = false ) const;
//     sal_Int8 SetFlyFrmAnchor( SwFrmFmt& rFlyFmt, SfxItemSet& rSet, bool bNewFrms );
//     typedef SwFmt* (SwDoc:: *FNCopyFmt)( const OUString&, SwFmt*, bool, bool );
//     SwFmt* CopyFmt( const SwFmt& rFmt, const SwFmtsBase& rFmtArr,
//                         FNCopyFmt fnCopyFmt, const SwFmt& rDfltFmt );
//     void CopyFmtArr( const SwFmtsBase& rSourceArr, SwFmtsBase& rDestArr,
//                         FNCopyFmt fnCopyFmt, SwFmt& rDfltFmt );
//     void CopyPageDescHeaderFooterImpl( bool bCpyHeader,
//                                 const SwFrmFmt& rSrcFmt, SwFrmFmt& rDestFmt );
//     SwFmt* FindFmtByName( const SwFmtsBase& rFmtArr, const OUString& rName ) const;
//     VirtualDevice& CreateVirtualDevice_() const;
//     SfxPrinter& CreatePrinter_() const;
//     void PrtDataChanged();
//     SwDoc( const SwDoc &);
//     void _InitFieldTypes();
//     void _MakeFldList( int eMode );
//     void UpdateDBNumFlds( SwDBNameInfField& rDBFld, SwCalc& rCalc );
//     void AddUsedDBToList( std::vector<OUString>& rDBNameList,
//                           const std::vector<OUString>& rUsedDBNames );
//     void AddUsedDBToList( std::vector<OUString>& rDBNameList, const OUString& rDBName );
//     bool IsNameInArray( const std::vector<OUString>& rOldNames, const OUString& rName );
//     void GetAllDBNames( std::vector<OUString>& rAllDBNames );
//     OUString ReplaceUsedDBs( const std::vector<OUString>& rUsedDBNames,
//                              const OUString& rNewName, const OUString& rFormula );
//     std::vector<OUString>& FindUsedDBs( const std::vector<OUString>& rAllDBNames,
//                                 const OUString& rFormula,
//                                 std::vector<OUString>& rUsedDBNames );
//     void InitDrawModel();
//     void ReleaseDrawModel();
//     void _CreateNumberFormatter();
//     sal_Bool _UnProtectTblCells( SwTable& rTbl );
//     bool SplitDoc( sal_uInt16 eDocType, const OUString& rPath, bool bOutline,
//                         const SwTxtFmtColl* pSplitColl, int nOutlineLevel = 0 );
//     void _UpdateCharts( const SwTable& rTbl, SwViewShell& rVSh ) const;
//     sal_Bool _SelectNextRubyChars( SwPaM& rPam, SwRubyListEntry& rRubyEntry,
//                                 sal_uInt16 nMode );
//     long DoIdleJobs( Timer * ); static long LinkStubDoIdleJobs( void* pThis, void* );
//     void DoUpdateAllCharts();
//     long DoUpdateModifiedOLE( Timer * ); static long LinkStubDoUpdateModifiedOLE( void* pThis, void* );
//     SwFmt *_MakeCharFmt(const OUString &, SwFmt *, bool, bool );
//     SwFmt *_MakeFrmFmt(const OUString &, SwFmt *, bool, bool );
//     SwFmt *_MakeTxtFmtColl(const OUString &, SwFmt *, bool, bool );
private:
  sal_Bool mbReadOnly;
  OUString msDocAccTitle;
//     void InitTOXTypes();
//     void Paste( const SwDoc& );
//     bool DeleteAndJoinImpl(SwPaM&, const bool);
//     bool DeleteAndJoinWithRedlineImpl(SwPaM&, const bool unused = false);
//     bool DeleteRangeImpl(SwPaM&, const bool unused = false);
//     bool DeleteRangeImplImpl(SwPaM &);
//     bool ReplaceRangeImpl(SwPaM&, OUString const&, const bool);
public:
    SwDoc();
    ~SwDoc();
    bool IsInDtor() const {} // { return mbDtor; }
  SwNodes & GetNodes(){}; //{ return *m_pNodes; }
  SwNodes const& GetNodes() const {}//{ return *m_pNodes; }
    virtual sal_Int32 acquire();
    virtual sal_Int32 release();
    virtual sal_Int32 getReferenceCount() const;
    virtual bool get( DocumentSettingId id) const;
    virtual void set( DocumentSettingId id, bool value);
    virtual const com::sun::star::i18n::ForbiddenCharacters* getForbiddenCharacters( sal_uInt16 nLang, bool bLocaleData ) const;
    virtual void setForbiddenCharacters( sal_uInt16 nLang, const com::sun::star::i18n::ForbiddenCharacters& rForbiddenCharacters );
    virtual rtl::Reference<SvxForbiddenCharactersTable>& getForbiddenCharacterTable();
    virtual const rtl::Reference<SvxForbiddenCharactersTable>& getForbiddenCharacterTable() const;
    virtual sal_uInt16 getLinkUpdateMode( bool bGlobalSettings ) const;
    virtual void setLinkUpdateMode( sal_uInt16 nMode );
    virtual SwFldUpdateFlags getFieldUpdateFlags( bool bGlobalSettings ) const;
    virtual void setFieldUpdateFlags( SwFldUpdateFlags eMode );
    virtual SwCharCompressType getCharacterCompressionType() const;
    virtual void setCharacterCompressionType( SwCharCompressType nType );
    virtual sal_uInt32 getRsid() const;
    virtual void setRsid( sal_uInt32 nVal );
    virtual sal_uInt32 getRsidRoot() const;
    virtual void setRsidRoot( sal_uInt32 nVal );
    virtual SfxPrinter* getPrinter( bool bCreate ) const;
    virtual void setPrinter( SfxPrinter* pP, bool bDeleteOld, bool bCallPrtDataChanged );
    virtual VirtualDevice* getVirtualDevice( bool bCreate ) const;
    virtual void setVirtualDevice( VirtualDevice* pVd, bool bDeleteOld, bool bCallVirDevDataChanged );
    virtual OutputDevice* getReferenceDevice( bool bCreate ) const;
    virtual void setReferenceDeviceType( bool bNewVirtual, bool bNewHiRes );
    virtual const JobSetup* getJobsetup() const;
    virtual void setJobsetup( const JobSetup& rJobSetup );
    virtual const SwPrintData & getPrintData() const;
    virtual void setPrintData( const SwPrintData& rPrtData);
    IDocumentMarkAccess* getIDocumentMarkAccess();
    const IDocumentMarkAccess* getIDocumentMarkAccess() const;
    virtual RedlineMode_t GetRedlineMode() const;
    virtual void SetRedlineMode_intern( RedlineMode_t eMode);
    virtual void SetRedlineMode( RedlineMode_t eMode);
    virtual bool IsRedlineOn() const;
    virtual bool IsIgnoreRedline() const;
    virtual bool IsInRedlines(const SwNode& rNode) const;
    virtual const SwRedlineTbl& GetRedlineTbl() const;
    virtual bool AppendRedline( SwRedline* pPtr, bool bCallDelete);
    virtual bool SplitRedline(const SwPaM& rPam);
    virtual bool DeleteRedline( const SwPaM& rPam, bool bSaveInUndo, sal_uInt16 nDelType);
    virtual bool DeleteRedline( const SwStartNode& rSection, bool bSaveInUndo, sal_uInt16 nDelType);
    virtual sal_uInt16 GetRedlinePos( const SwNode& rNode, sal_uInt16 nType) const;
    virtual void CompressRedlines();
    virtual const SwRedline* GetRedline( const SwPosition& rPos, sal_uInt16* pFndPos) const;
    virtual bool IsRedlineMove() const;
    virtual void SetRedlineMove( bool bFlag);
    virtual bool AcceptRedline( sal_uInt16 nPos, bool bCallDelete);
    virtual bool AcceptRedline( const SwPaM& rPam, bool bCallDelete);
    virtual bool RejectRedline( sal_uInt16 nPos, bool bCallDelete);
    virtual bool RejectRedline( const SwPaM& rPam, bool bCallDelete);
    virtual const SwRedline* SelNextRedline( SwPaM& rPam) const;
    virtual const SwRedline* SelPrevRedline( SwPaM& rPam) const;
    virtual void UpdateRedlineAttr();
    virtual sal_uInt16 GetRedlineAuthor();
    virtual sal_uInt16 InsertRedlineAuthor(const OUString& rAuthor);
    virtual bool SetRedlineComment( const SwPaM& rPam, const OUString& rComment);
    virtual const ::com::sun::star::uno::Sequence <sal_Int8>& GetRedlinePassword() const;
    virtual void SetRedlinePassword( const ::com::sun::star::uno::Sequence <sal_Int8>& rNewPassword);
    IDocumentUndoRedo & GetIDocumentUndoRedo();
    IDocumentUndoRedo const& GetIDocumentUndoRedo() const;
    virtual bool IsVisibleLinks() const;
    virtual void SetVisibleLinks(bool bFlag);
    virtual sfx2::LinkManager& GetLinkManager();
    virtual const sfx2::LinkManager& GetLinkManager() const;
    virtual void UpdateLinks(bool bUI);
    virtual bool GetData(const OUString& rItem, const OUString& rMimeType, ::com::sun::star::uno::Any& rValue) const;
    virtual bool SetData(const OUString& rItem, const OUString& rMimeType, const ::com::sun::star::uno::Any& rValue);
    virtual ::sfx2::SvLinkSource* CreateLinkSource(const OUString& rItem);
    virtual bool EmbedAllLinks();
    virtual void SetLinksUpdated(const bool bNewLinksUpdated);
    virtual bool LinksUpdated() const;
    virtual const SwFldTypes *GetFldTypes() const;
    virtual SwFieldType *InsertFldType(const SwFieldType &);
    virtual SwFieldType *GetSysFldType( const sal_uInt16 eWhich ) const;
    virtual SwFieldType* GetFldType(sal_uInt16 nResId, const OUString& rName, bool bDbFieldMatching) const;
    virtual void RemoveFldType(sal_uInt16 nFld);
    virtual void UpdateFlds( SfxPoolItem* pNewHt, bool bCloseDB);
    virtual void InsDeletedFldType(SwFieldType &);
    virtual bool PutValueToField(const SwPosition & rPos, const com::sun::star::uno::Any& rVal, sal_uInt16 nWhich);
    virtual bool UpdateFld(SwTxtFld * rDstFmtFld, SwField & rSrcFld, SwMsgPoolItem * pMsgHnt, bool bUpdateTblFlds);
    virtual void UpdateRefFlds(SfxPoolItem* pHt);
    virtual void UpdateTblFlds(SfxPoolItem* pHt);
    virtual void UpdateExpFlds(SwTxtFld* pFld, bool bUpdateRefFlds);
    virtual void UpdateUsrFlds();
    virtual void UpdatePageFlds(SfxPoolItem*);
    virtual void LockExpFlds();
    virtual void UnlockExpFlds();
    virtual bool IsExpFldsLocked() const;
    virtual SwDocUpdtFld& GetUpdtFlds() const;
    virtual bool SetFieldsDirty(bool b, const SwNode* pChk, sal_uLong nLen);
    virtual void SetFixFields(bool bOnlyTimeDate, const DateTime* pNewDateTime);
    virtual void FldsToCalc(SwCalc& rCalc, sal_uLong nLastNd, sal_uInt16 nLastCnt);
    virtual void FldsToCalc(SwCalc& rCalc, const _SetGetExpFld& rToThisFld);
    virtual void FldsToExpand(SwHash**& ppTbl, sal_uInt16& rTblSize, const _SetGetExpFld& rToThisFld);
    virtual bool IsNewFldLst() const;
    virtual void SetNewFldLst( bool bFlag);
    virtual void InsDelFldInFldLst(bool bIns, const SwTxtFld& rFld);
    static SwField* GetFieldAtPos(const SwPosition& rPos);
    static SwTxtFld* GetTxtFldAtPos(const SwPosition& rPos);
    bool containsUpdatableFields();
    virtual bool CopyRange(SwPaM&, SwPosition&, const bool bCopyAll) const;
    virtual void DeleteSection(SwNode* pNode);
    virtual bool DeleteRange(SwPaM&);
    virtual bool DelFullPara(SwPaM&);
    virtual bool DeleteAndJoin( SwPaM&,
                                const bool bForceJoinNext = false );
    virtual bool MoveRange(SwPaM&, SwPosition&, SwMoveFlags);
    virtual bool MoveNodeRange(SwNodeRange&, SwNodeIndex&, SwMoveFlags);
    virtual bool MoveAndJoin(SwPaM&, SwPosition&, SwMoveFlags);
    virtual bool Overwrite(const SwPaM &rRg, const OUString& rStr);
    virtual bool InsertString(const SwPaM &rRg, const OUString&,
              const enum InsertFlags nInsertMode = INS_EMPTYEXPAND );
    virtual bool UpdateParRsid( SwTxtNode *pTxtNode, sal_uInt32 nVal = 0 );
    virtual bool UpdateRsid( const SwPaM &rRg, sal_uInt16 nLen );
    virtual SwFlyFrmFmt* Insert(const SwPaM &rRg, const OUString& rGrfName, const OUString& rFltName, const Graphic* pGraphic,
                        const SfxItemSet* pFlyAttrSet, const SfxItemSet* pGrfAttrSet, SwFrmFmt*);
    virtual SwFlyFrmFmt* Insert(const SwPaM& rRg, const GraphicObject& rGrfObj, const SfxItemSet* pFlyAttrSet,
                        const SfxItemSet* pGrfAttrSet, SwFrmFmt*);
    virtual SwDrawFrmFmt* Insert(const SwPaM &rRg, SdrObject& rDrawObj, const SfxItemSet* pFlyAttrSet, SwFrmFmt*);
    virtual SwFlyFrmFmt* Insert(const SwPaM &rRg, const svt::EmbeddedObjectRef& xObj, const SfxItemSet* pFlyAttrSet,
                        const SfxItemSet* pGrfAttrSet, SwFrmFmt*);
    virtual bool InsertPoolItem(
        const SwPaM &rRg,
        const SfxPoolItem&,
        const SetAttrMode nFlags,
        const bool bExpandCharToPara=false);
    virtual bool InsertItemSet (const SwPaM &rRg, const SfxItemSet&,
                                const SetAttrMode nFlags);
    virtual void ReRead(SwPaM&, const OUString& rGrfName, const OUString& rFltName, const Graphic* pGraphic, const GraphicObject* pGrfObj);
    virtual void TransliterateText(const SwPaM& rPaM, utl::TransliterationWrapper&);
    virtual SwFlyFrmFmt* InsertOLE(const SwPaM &rRg, const OUString& rObjName, sal_Int64 nAspect, const SfxItemSet* pFlyAttrSet,
                           const SfxItemSet* pGrfAttrSet, SwFrmFmt*);
    virtual bool SplitNode(const SwPosition &rPos, bool bChkTableStart);
    virtual bool AppendTxtNode(SwPosition& rPos);
        virtual void SetModified(SwPaM &rPaM);
    virtual bool ReplaceRange(SwPaM& rPam, const OUString& rNewStr,
                              const bool bRegExReplace);
    virtual void RemoveLeadingWhiteSpace(const SwPosition & rPos );
    virtual SwTxtFmtColl* GetTxtCollFromPool( sal_uInt16 nId, bool bRegardLanguage = true );
    virtual SwFmt* GetFmtFromPool( sal_uInt16 nId );
    virtual SwFrmFmt* GetFrmFmtFromPool( sal_uInt16 nId );
    virtual SwCharFmt* GetCharFmtFromPool( sal_uInt16 nId );
    virtual SwPageDesc* GetPageDescFromPool( sal_uInt16 nId, bool bRegardLanguage = true );
    virtual SwNumRule* GetNumRuleFromPool( sal_uInt16 nId );
    virtual bool IsPoolTxtCollUsed( sal_uInt16 nId ) const;
    virtual bool IsPoolFmtUsed( sal_uInt16 nId ) const;
    virtual bool IsPoolPageDescUsed( sal_uInt16 nId ) const;
    virtual const SwLineNumberInfo& GetLineNumberInfo() const;
    virtual void SetLineNumberInfo(const SwLineNumberInfo& rInfo);
    virtual void DocInfoChgd();
    virtual const SwDocStat &GetDocStat() const;
    virtual const SwDocStat &GetUpdatedDocStat(bool bCompleteAsync = false, bool bFields = true);
    virtual void SetDocStat(const SwDocStat& rStat);
    virtual void UpdateDocStat(bool bCompleteAsync = false, bool bFields = true);
    virtual void SetModified();
    virtual void ResetModified();
    virtual bool IsModified() const;
    virtual bool IsLoaded() const;
    virtual bool IsUpdateExpFld() const;
    virtual bool IsNewDoc() const;
    virtual bool IsPageNums() const;
    virtual void SetPageNums(bool b);
    virtual void SetNewDoc(bool b);
    virtual void SetUpdateExpFldStat(bool b);
    virtual void SetLoaded(bool b);
    virtual const SdrModel* GetDrawModel() const;
    virtual SdrModel* GetDrawModel();
    virtual SdrLayerID GetHeavenId() const;
    virtual SdrLayerID GetHellId() const;
    virtual SdrLayerID GetControlsId() const;
    virtual SdrLayerID GetInvisibleHeavenId() const;
    virtual SdrLayerID GetInvisibleHellId() const;
    virtual SdrLayerID GetInvisibleControlsId() const;
    virtual void NotifyInvisibleLayers( SdrPageView& _rSdrPageView );
    virtual bool IsVisibleLayerId( const SdrLayerID& _nLayerId ) const;
    virtual SdrLayerID GetVisibleLayerIdByInvisibleOne( const SdrLayerID& _nInvisibleLayerId );
    virtual SdrLayerID GetInvisibleLayerIdByVisibleOne( const SdrLayerID& _nVisibleLayerId );
    virtual SdrModel* _MakeDrawModel();
    virtual SdrModel* GetOrCreateDrawModel();
    virtual void SetCurrentViewShell( SwViewShell* pNew );
    virtual SwLayouter* GetLayouter();
    virtual const SwLayouter* GetLayouter() const;
    virtual void SetLayouter( SwLayouter* pNew );
    virtual SwFrmFmt* MakeLayoutFmt( RndStdIds eRequest, const SfxItemSet* pSet );
    virtual void DelLayoutFmt( SwFrmFmt *pFmt );
    virtual SwFrmFmt* CopyLayoutFmt( const SwFrmFmt& rSrc, const SwFmtAnchor& rNewAnchor, bool bSetTxtFlyAtt, bool bMakeFrms );
    virtual const SwViewShell *GetCurrentViewShell() const;
    virtual SwViewShell *GetCurrentViewShell();
    virtual const SwRootFrm *GetCurrentLayout() const;
    virtual SwRootFrm *GetCurrentLayout();
    virtual bool HasLayout() const;
    void ClearSwLayouterEntries();
    virtual void StartIdling();
    virtual void StopIdling();
    virtual void BlockIdling();
    virtual void UnblockIdling();
    virtual void StartBackgroundJobs();
    virtual SwChartDataProvider * GetChartDataProvider( bool bCreate = false ) const;
    virtual void CreateChartInternalDataProviders( const SwTable *pTable );
    virtual SwChartLockController_Helper & GetChartControllerHelper();
    virtual void addListItem( const SwNodeNum& rNodeNum );
    virtual void removeListItem( const SwNodeNum& rNodeNum );
    virtual OUString getListItemText( const SwNodeNum& rNodeNum,
                                    const bool bWithNumber = true,
                                    const bool bWithSpacesForLevel = false ) const;
    virtual void getListItems( IDocumentListItems::tSortedNodeNumList& orNodeNumList ) const;
    virtual void getNumItems( IDocumentListItems::tSortedNodeNumList& orNodeNumList ) const;
    virtual sal_Int32 getOutlineNodesCount() const;
    virtual int getOutlineLevel( const sal_Int32 nIdx ) const;
    virtual OUString getOutlineText( const sal_Int32 nIdx,
                                   const bool bWithNumber,
                                   const bool bWithSpacesForLevel,
                                   const bool bWithFtn ) const;
    virtual SwTxtNode* getOutlineNode( const sal_Int32 nIdx ) const;
    virtual void getOutlineNodes( IDocumentOutlineNodes::tSortedOutlineNodeList& orOutlineNodeList ) const;
    virtual SwList* createList( const OUString& rListId,
                                const OUString& rDefaultListStyleName );
    virtual void deleteList( const OUString& rListId );
    virtual SwList* getListByName( const OUString& rListId ) const;
    virtual SwList* createListForListStyle( const OUString& rListStyleName );
    virtual SwList* getListForListStyle( const OUString& rListStyleName ) const;
    virtual void deleteListForListStyle( const OUString& rListStyleName );
    virtual void trackChangeOfListStyleName( const OUString& rListStyleName,
                                             const OUString& rNewListStyleName );
    virtual void setExternalData(::sw::tExternalDataType eType,
                                 ::sw::tExternalDataPointer pPayload);
    virtual ::sw::tExternalDataPointer getExternalData(::sw::tExternalDataType eType);
    virtual void setDocReadOnly( sal_Bool b) { mbReadOnly = b; }
    virtual sal_Bool getDocReadOnly() const {} // { return mbReadOnly; }
    virtual void setDocAccTitle( const OUString& rTitle ) { msDocAccTitle = rTitle; }
    virtual const OUString getDocAccTitle() const {} // { return msDocAccTitle; }
    static long BackgroundDone( SwDoc*, SvxBrushItem * );
    long CalcFieldValueHdl( EditFieldInfo* ); static long LinkStubCalcFieldValueHdl( void* pThis, void* );
    bool IsOLEPrtNotifyPending() const {} // { return mbOLEPrtNotifyPending; }
    inline void SetOLEPrtNotifyPending( bool bSet = true );
    void PrtOLENotify( sal_Bool bAll );
    void SetSelAll( bool bSel )
    {
        mbIsPrepareSelAll = bSel;
    }
    bool IsPrepareSelAll() const {} // { return mbIsPrepareSelAll; }
    void SetPrepareSelAll() { mbIsPrepareSelAll = true; }
    void SetContainsAtPageObjWithContentAnchor( const bool bFlag )
    {
        mbContainsAtPageObjWithContentAnchor = bFlag;
    }
    bool DoesContainAtPageObjWithContentAnchor()
    {
        return mbContainsAtPageObjWithContentAnchor;
    }
    SwPosFlyFrms GetAllFlyFmts( const SwPaM* = 0,
                        bool bDrawAlso = false,
                        bool bAsCharAlso = false ) const;
    SwFlyFrmFmt *MakeFlyFrmFmt (const OUString &rFmtName, SwFrmFmt *pDerivedFrom);
    SwDrawFrmFmt *MakeDrawFrmFmt(const OUString &rFmtName, SwFrmFmt *pDerivedFrom);
    SwFlyFrmFmt* MakeFlySection( RndStdIds eAnchorType,
                                 const SwPosition* pAnchorPos,
                                 const SfxItemSet* pSet = 0,
                                 SwFrmFmt *pParent = 0,
                                 bool bCalledFromShell = false );
    SwFlyFrmFmt* MakeFlyAndMove( const SwPaM& rPam, const SfxItemSet& rSet,
                                const SwSelBoxes* pSelBoxes = 0,
                                SwFrmFmt *pParent = 0 );
    void CopyWithFlyInFly( const SwNodeRange& rRg,
                            const sal_Int32 nEndContentIndex,
                            const SwNodeIndex& rInsPos,
                            sal_Bool bMakeNewFrms = ((sal_Bool)1),
                            sal_Bool bDelRedlines = ((sal_Bool)1),
                            sal_Bool bCopyFlyAtFly = ((sal_Bool)0) ) const;
    bool SetFlyFrmAttr( SwFrmFmt& rFlyFmt, SfxItemSet& rSet );
    bool SetFrmFmtToFly( SwFrmFmt& rFlyFmt, SwFrmFmt& rNewFmt,
                        SfxItemSet* pSet = 0, bool bKeepOrient = false );
    void SetFlyFrmTitle( SwFlyFrmFmt& rFlyFrmFmt,
                         const OUString& sNewTitle );
    void SetFlyFrmDescription( SwFlyFrmFmt& rFlyFrmFmt,
                               const OUString& sNewDescription );
  const SwFtnInfo& GetFtnInfo() const {} //{ return *mpFtnInfo; }
    void SetFtnInfo(const SwFtnInfo& rInfo);
  const SwEndNoteInfo& GetEndNoteInfo() const {}; //{ return *mpEndNoteInfo; }
    void SetEndNoteInfo(const SwEndNoteInfo& rInfo);
          SwFtnIdxs& GetFtnIdxs() {} // { return *mpFtnIdxs; }
    const SwFtnIdxs& GetFtnIdxs() const {} // { return *mpFtnIdxs; }
    bool SetCurFtn( const SwPaM& rPam, const OUString& rNumStr,
                    sal_uInt16 nNumber, bool bIsEndNote );
    ::com::sun::star::uno::Any
            Spell( SwPaM&, ::com::sun::star::uno::Reference<
                            ::com::sun::star::linguistic2::XSpellChecker1 > &,
                   sal_uInt16* pPageCnt, sal_uInt16* pPageSt, bool bGrammarCheck,
                   SwConversionArgs *pConvArgs = 0 ) const;
    ::com::sun::star::uno::Reference<
        ::com::sun::star::linguistic2::XHyphenatedWord >
            Hyphenate( SwPaM *pPam, const Point &rCrsrPos,
                         sal_uInt16* pPageCnt, sal_uInt16* pPageSt );
    void CountWords( const SwPaM& rPaM, SwDocStat& rStat ) const;
    void SetGlossDoc( bool bGlssDc = true ) { mbGlossDoc = bGlssDc; }
    bool IsInsOnlyTextGlossary() const {} // { return mbInsOnlyTxtGlssry; }
    void Summary( SwDoc* pExtDoc, sal_uInt8 nLevel, sal_uInt8 nPara, bool bImpress );
    void ChangeAuthorityData(const SwAuthEntry* pNewData);
    bool IsInCallModified() const {} // { return mbInCallModified; }
    bool IsInHeaderFooter( const SwNodeIndex& rIdx ) const;
    short GetTextDirection( const SwPosition& rPos,
                            const Point* pPt = 0 ) const;
    bool IsInVerticalText( const SwPosition& rPos,
                               const Point* pPt = 0 ) const;
    void SetNewDBMgr( SwNewDBMgr* pNewMgr ) {} // { mpNewDBMgr = pNewMgr; }
    SwNewDBMgr* GetNewDBMgr() const {} // { return mpNewDBMgr; }
    void ChangeDBFields( const std::vector<OUString>& rOldNames,
                        const OUString& rNewName );
    void SetInitDBFields(sal_Bool b);
    void GetAllUsedDB( std::vector<OUString>& rDBNameList,
                       const std::vector<OUString>* pAllDBNames = 0 );
    void ChgDBData( const SwDBData& rNewData );
    SwDBData GetDBData();
    const SwDBData& GetDBDesc();
    const SwDBData& _GetDBDesc() const {} // { return maDBData; }
    OUString GetUniqueGrfName() const;
    OUString GetUniqueOLEName() const;
    OUString GetUniqueFrameName() const;
    std::set<SwRootFrm*> GetAllLayouts();
    void SetFlyName( SwFlyFrmFmt& rFmt, const OUString& rName );
    const SwFlyFrmFmt* FindFlyByName( const OUString& rName, sal_Int8 nNdTyp = 0 ) const;
    void GetGrfNms( const SwFlyFrmFmt& rFmt, OUString* pGrfName, OUString* pFltName ) const;
    void SetAllUniqueFlyNames();
    void ResetAttrs( const SwPaM &rRg,
                     bool bTxtAttr = true,
                     const std::set<sal_uInt16> &rAttrs = std::set<sal_uInt16>(),
                     const bool bSendDataChangedEvents = true );
    void RstTxtAttrs(const SwPaM &rRg, bool bInclRefToxMark = false );
    void SetAttr( const SfxPoolItem&, SwFmt& );
    void SetAttr( const SfxItemSet&, SwFmt& );
    void ResetAttrAtFormat( const sal_uInt16 nWhichId,
                            SwFmt& rChangedFormat );
    void SetDefault( const SfxPoolItem& );
    void SetDefault( const SfxItemSet& );
    const SfxPoolItem& GetDefault( sal_uInt16 nFmtHint ) const;
    bool DontExpandFmt( const SwPosition& rPos, bool bFlag = true );
    const SwFrmFmts* GetFrmFmts() const {} // { return mpFrmFmtTbl; }
          SwFrmFmts* GetFrmFmts() {} // { return mpFrmFmtTbl; }
    const SwCharFmts* GetCharFmts() const {} // { return mpCharFmtTbl;}
    const SwFrmFmts* GetSpzFrmFmts() const {} // { return mpSpzFrmFmtTbl; }
          SwFrmFmts* GetSpzFrmFmts() {} // { return mpSpzFrmFmtTbl; }
    const SwFrmFmt *GetDfltFrmFmt() const {} // { return mpDfltFrmFmt; }
          SwFrmFmt *GetDfltFrmFmt() {} // { return mpDfltFrmFmt; }
    const SwFrmFmt *GetEmptyPageFmt() const {} // { return mpEmptyPageFmt; }
          SwFrmFmt *GetEmptyPageFmt() {} // { return mpEmptyPageFmt; }
    const SwFrmFmt *GetColumnContFmt() const {} //{ return mpColumnContFmt; }
          SwFrmFmt *GetColumnContFmt() {} // { return mpColumnContFmt; }
    const SwCharFmt *GetDfltCharFmt() const {} // { return mpDfltCharFmt;}
          SwCharFmt *GetDfltCharFmt() {} // { return mpDfltCharFmt;}
    IStyleAccess& GetIStyleAccess() {} // { return *mpStyleAccess; }
    void RemoveAllFmtLanguageDependencies();
    SwFrmFmt *MakeFrmFmt(const OUString &rFmtName, SwFrmFmt *pDerivedFrom,
                          bool bBroadcast = false, bool bAuto = true);
    void DelFrmFmt( SwFrmFmt *pFmt, bool bBroadcast = false );
  SwFrmFmt* FindFrmFmtByName( const OUString& rName ) const {}
    //{ return (SwFrmFmt*)FindFmtByName( (SwFmtsBase&)*mpFrmFmtTbl, rName ); }
    SwCharFmt *MakeCharFmt(const OUString &rFmtName, SwCharFmt *pDerivedFrom,
                           bool bBroadcast = false,
                           bool bAuto = true );
    void DelCharFmt(sal_uInt16 nFmt, bool bBroadcast = false);
    void DelCharFmt(SwCharFmt* pFmt, bool bBroadcast = false);
    SwCharFmt* FindCharFmtByName( const OUString& rName ) const
        {} //{ return (SwCharFmt*)FindFmtByName( (SwFmtsBase&)*mpCharFmtTbl, rName ); }
    const SwTxtFmtColl* GetDfltTxtFmtColl() const {} // { return mpDfltTxtFmtColl; }
    const SwTxtFmtColls *GetTxtFmtColls() const {} // { return mpTxtFmtCollTbl; }
    SwTxtFmtColl *MakeTxtFmtColl( const OUString &rFmtName,
                                  SwTxtFmtColl *pDerivedFrom,
                                  bool bBroadcast = false,
                                  bool bAuto = true );
    SwConditionTxtFmtColl* MakeCondTxtFmtColl( const OUString &rFmtName,
                                               SwTxtFmtColl *pDerivedFrom,
                                               bool bBroadcast = false);
    void DelTxtFmtColl(sal_uInt16 nFmt, bool bBroadcast = false);
    void DelTxtFmtColl( SwTxtFmtColl* pColl, bool bBroadcast = false );
    bool SetTxtFmtColl( const SwPaM &rRg, SwTxtFmtColl *pFmt,
                            bool bReset = true,
                            bool bResetListAttrs = false );
    SwTxtFmtColl* FindTxtFmtCollByName( const OUString& rName ) const
        {} //{ return (SwTxtFmtColl*)FindFmtByName( (SwFmtsBase&)*mpTxtFmtCollTbl, rName ); }
    void ChkCondColls();
    const SwGrfFmtColl* GetDfltGrfFmtColl() const {} // { return mpDfltGrfFmtColl; }
    const SwGrfFmtColls *GetGrfFmtColls() const {} // { return mpGrfFmtCollTbl; }
    SwGrfFmtColl *MakeGrfFmtColl(const OUString &rFmtName,
                                    SwGrfFmtColl *pDerivedFrom);
    SwGrfFmtColl* FindGrfFmtCollByName( const OUString& rName ) const
        {} //{ return (SwGrfFmtColl*)FindFmtByName( (SwFmtsBase&)*mpGrfFmtCollTbl, rName ); }
    const SwFrmFmts* GetTblFrmFmts() const {} // { return mpTblFrmFmtTbl; }
          SwFrmFmts* GetTblFrmFmts() {} // { return mpTblFrmFmtTbl; }
    sal_uInt16 GetTblFrmFmtCount( bool bUsed ) const;
    SwFrmFmt& GetTblFrmFmt(sal_uInt16 nFmt, bool bUsed ) const;
    SwTableFmt* MakeTblFrmFmt(const OUString &rFmtName, SwFrmFmt *pDerivedFrom);
    void DelTblFrmFmt( SwTableFmt* pFmt );
    SwTableFmt* FindTblFmtByName( const OUString& rName, sal_Bool bAll = ((sal_Bool)0) ) const;
    sal_uInt16 GetFlyCount( FlyCntType eType = FLYCNTTYPE_ALL) const;
    SwFrmFmt* GetFlyNum(sal_uInt16 nIdx, FlyCntType eType = FLYCNTTYPE_ALL);
    SwFrmFmt *CopyFrmFmt ( const SwFrmFmt& );
    SwCharFmt *CopyCharFmt( const SwCharFmt& );
    SwTxtFmtColl* CopyTxtColl( const SwTxtFmtColl& rColl );
    SwGrfFmtColl* CopyGrfColl( const SwGrfFmtColl& rColl );
    void ReplaceStyles( const SwDoc& rSource, bool bIncludePageStyles = true );
    void ReplaceDefaults( const SwDoc& rSource );
    void ReplaceCompatabilityOptions(const SwDoc& rSource);
    bool IsUsed( const SwModify& ) const;
    bool IsUsed( const SwNumRule& ) const;
    sal_uInt16 SetDocPattern( const OUString& rPatternName );
  const OUString* GetDocPattern( sal_uInt16 nPos ) const {}
    // {
    //     if(nPos >= maPatternNms.size())
    //         return __null;
    //     if(boost::is_null(maPatternNms.begin() + nPos))
    //         return __null;
    //     return &(maPatternNms[nPos]);
    // }
    void GCFieldTypes();
    void SetGlossaryDoc( SwDoc* pDoc ) {} // { mpGlossaryDoc = pDoc; }
    bool InsertGlossary( SwTextBlocks& rBlock, const OUString& rEntry,
                        SwPaM& rPaM, SwCrsrShell* pShell = 0);
    void CalculatePagesForPrinting( const SwRootFrm& rLayout, SwRenderData &rData, const SwPrintUIOptions &rOptions, bool bIsPDFExport,
            sal_Int32 nDocPageCount );
    void UpdatePagesForPrintingWithPostItData( SwRenderData &rData, const SwPrintUIOptions &rOptions, bool bIsPDFExport,
            sal_Int32 nDocPageCount );
    void CalculatePagePairsForProspectPrinting( const SwRootFrm& rLayout, SwRenderData &rData, const SwPrintUIOptions &rOptions,
            sal_Int32 nDocPageCount );
    sal_uInt16 GetPageDescCnt() const {} // { return maPageDescs.size(); }
    const SwPageDesc& GetPageDesc( const sal_uInt16 i ) const {} // { return *maPageDescs[i]; }
    SwPageDesc& GetPageDesc( sal_uInt16 i ) {} // { return *maPageDescs[i]; }
    SwPageDesc* FindPageDescByName( const OUString& rName,
                                    sal_uInt16* pPos = 0 ) const;
    void CopyPageDesc( const SwPageDesc& rSrcDesc, SwPageDesc& rDstDesc,
                        bool bCopyPoolIds = true );
    void CopyHeader( const SwFrmFmt& rSrcFmt, SwFrmFmt& rDestFmt )
  {} //{ CopyPageDescHeaderFooterImpl( true, rSrcFmt, rDestFmt ); }
    void CopyFooter( const SwFrmFmt& rSrcFmt, SwFrmFmt& rDestFmt )
  {}//{ CopyPageDescHeaderFooterImpl( false, rSrcFmt, rDestFmt ); }
    SwPageDesc * GetPageDesc( const OUString & rName );
    void ChgPageDesc( const OUString & rName, const SwPageDesc& );
    void ChgPageDesc( sal_uInt16 i, const SwPageDesc& );
    bool FindPageDesc( const OUString & rName, sal_uInt16 * pFound );
    void DelPageDesc( const OUString & rName, bool bBroadcast = false);
    void DelPageDesc( sal_uInt16 i, bool bBroadcast = false );
    void PreDelPageDesc(SwPageDesc * pDel);
    sal_uInt16 MakePageDesc( const OUString &rName, const SwPageDesc* pCpy = 0,
                             bool bRegardLanguage = true,
                             bool bBroadcast = false);
    void BroadcastStyleOperation(OUString rName, SfxStyleFamily eFamily,
                                 sal_uInt16 nOp);
    void CheckDefaultPageFmt();
    sal_uInt16 GetCurTOXMark( const SwPosition& rPos, SwTOXMarks& ) const;
    void DeleteTOXMark( const SwTOXMark* pTOXMark );
    const SwTOXMark& GotoTOXMark( const SwTOXMark& rCurTOXMark,
                                SwTOXSearch eDir, sal_Bool bInReadOnly );
    const SwTOXBaseSection* InsertTableOf( const SwPosition& rPos,
                                            const SwTOXBase& rTOX,
                                            const SfxItemSet* pSet = 0,
                                            bool bExpand = false );
    const SwTOXBaseSection* InsertTableOf( sal_uLong nSttNd, sal_uLong nEndNd,
                                            const SwTOXBase& rTOX,
                                            const SfxItemSet* pSet = 0 );
    const SwTOXBase* GetCurTOX( const SwPosition& rPos ) const;
    const SwAttrSet& GetTOXBaseAttrSet(const SwTOXBase& rTOX) const;
    bool DeleteTOX( const SwTOXBase& rTOXBase, bool bDelNodes = false );
    OUString GetUniqueTOXBaseName( const SwTOXType& rType,
                                   const OUString sChkStr ) const;
    bool SetTOXBaseName(const SwTOXBase& rTOXBase, const OUString& rName);
    void SetTOXBaseProtection(const SwTOXBase& rTOXBase, sal_Bool bProtect);
    void SetUpdateTOX( bool bFlag = true ) {} // { mbUpdateTOX = bFlag; }
    bool IsUpdateTOX() const {} // { return mbUpdateTOX; }
  OUString GetTOIAutoMarkURL() const {}//{return msTOIAutoMarkURL;}
  void SetTOIAutoMarkURL(const OUString& rSet) {} //{msTOIAutoMarkURL = rSet;}
    void ApplyAutoMark();
    bool IsInReading() const {} // { return mbInReading; }
    void SetInReading( bool bNew ) {} // { mbInReading = bNew; }
    bool IsClipBoard() const {} // { return mbClipBoard; }
    void SetClipBoard( bool bNew ) {} // { mbClipBoard = bNew; }
    bool IsColumnSelection() const {} // { return mbColumnSelection; }
    void SetColumnSelection( bool bNew ) {} // { mbColumnSelection = bNew; }
    bool IsInXMLImport() const {} // { return mbInXMLImport; }
    void SetInXMLImport( bool bNew ) {} // { mbInXMLImport = bNew; }
    sal_uInt16 GetTOXTypeCount( TOXTypes eTyp ) const;
    const SwTOXType* GetTOXType( TOXTypes eTyp, sal_uInt16 nId ) const;
    sal_Bool DeleteTOXType( TOXTypes eTyp, sal_uInt16 nId );
    const SwTOXType* InsertTOXType( const SwTOXType& rTyp );
    const SwTOXTypes& GetTOXTypes() const {} // { return *mpTOXTypes; }
    const SwTOXBase* GetDefaultTOXBase( TOXTypes eTyp, bool bCreate = false );
    void SetDefaultTOXBase(const SwTOXBase& rBase);
    sal_uInt16 GetTOIKeys( SwTOIKeyType eTyp, std::vector<OUString>& rArr ) const;
    bool SortTbl(const SwSelBoxes& rBoxes, const SwSortOptions&);
    bool SortText(const SwPaM&, const SwSortOptions&);
    void CorrAbs( const SwNodeIndex& rOldNode, const SwPosition& rNewPos,
                    const sal_uInt16 nOffset = 0, sal_Bool bMoveCrsr = ((sal_Bool)0) );
    void CorrAbs( const SwNodeIndex& rStartNode, const SwNodeIndex& rEndNode,
                    const SwPosition& rNewPos, sal_Bool bMoveCrsr = ((sal_Bool)0) );
    void CorrAbs( const SwPaM& rRange, const SwPosition& rNewPos,
                    sal_Bool bMoveCrsr = ((sal_Bool)0) );
    void CorrRel( const SwNodeIndex& rOldNode, const SwPosition& rNewPos,
                    const sal_uInt16 nOffset = 0, sal_Bool bMoveCrsr = ((sal_Bool)0) );
  SwNumRule* GetOutlineNumRule() const{}
   //{
   //     return mpOutlineRule;
   //}
    void SetOutlineNumRule( const SwNumRule& rRule );
    void PropagateOutlineRule();
    bool OutlineUpDown( const SwPaM& rPam, short nOffset = 1 );
    bool MoveOutlinePara( const SwPaM& rPam, short nOffset = 1);
    bool GotoOutline( SwPosition& rPos, const OUString& rName ) const;
    void SetNumRule( const SwPaM&,
                     const SwNumRule&,
                     const bool bCreateNewList,
                     const OUString sContinuedListId = OUString(),
                     bool bSetItem = true,
                     const bool bResetIndentAttrs = false );
    void SetCounted( const SwPaM&, bool bCounted);
    void MakeUniqueNumRules(const SwPaM & rPaM);
    void SetNumRuleStart( const SwPosition& rPos, sal_Bool bFlag = ((sal_Bool)1) );
    void SetNodeNumStart( const SwPosition& rPos, sal_uInt16 nStt );
    SwNumRule* GetCurrNumRule( const SwPosition& rPos ) const;
    const SwNumRuleTbl& GetNumRuleTbl() const {} // { return *mpNumRuleTbl; }
    void AddNumRule(SwNumRule * pRule);
    sal_uInt16 MakeNumRule( const OUString &rName,
        const SwNumRule* pCpy = 0,
        bool bBroadcast = false,
        const SvxNumberFormat::SvxNumPositionAndSpaceMode eDefaultNumberFormatPositionAndSpaceMode =
            SvxNumberFormat::LABEL_WIDTH_AND_POSITION );
    sal_uInt16 FindNumRule( const OUString& rName ) const;
    SwNumRule* FindNumRulePtr( const OUString& rName ) const;
    bool RenameNumRule(const OUString & aOldName, const OUString & aNewName,
                           bool bBroadcast = false);
    bool DelNumRule( const OUString& rName, bool bBroadCast = false );
    OUString GetUniqueNumRuleName( const OUString* pChkStr = 0, bool bAutoNum = true ) const;
    void UpdateNumRule();
    void ChgNumRuleFmts( const SwNumRule& rRule );
    bool ReplaceNumRule( const SwPosition& rPos, const OUString& rOldRule,
                        const OUString& rNewRule );
    bool GotoNextNum( SwPosition&, bool bOverUpper = true,
                        sal_uInt8* pUpper = 0, sal_uInt8* pLower = 0 );
    bool GotoPrevNum( SwPosition&, bool bOverUpper = true,
                        sal_uInt8* pUpper = 0, sal_uInt8* pLower = 0 );
    const SwNumRule * SearchNumRule(const SwPosition & rPos,
                                    const bool bForward,
                                    const bool bNum,
                                    const bool bOutline,
                                    int nNonEmptyAllowed,
                                    OUString& sListId,
                                    const bool bInvestigateStartNode = false );
    bool NoNum( const SwPaM& );
    void DelNumRules( const SwPaM& );
    void InvalidateNumRules();
    bool NumUpDown( const SwPaM&, bool bDown = true );
    bool MoveParagraph( const SwPaM&, long nOffset = 1, bool bIsOutlMv = false );
    bool NumOrNoNum( const SwNodeIndex& rIdx, sal_Bool bDel = ((sal_Bool)0));
    void StopNumRuleAnimations( OutputDevice* );
    const SwTable* InsertTable( const SwInsertTableOptions& rInsTblOpts,
                                const SwPosition& rPos, sal_uInt16 nRows,
                                sal_uInt16 nCols, short eAdjust,
                                const SwTableAutoFmt* pTAFmt = 0,
                                const std::vector<sal_uInt16> *pColArr = 0,
                                sal_Bool bCalledFromShell = ((sal_Bool)0),
                                sal_Bool bNewModel = ((sal_Bool)1) );
                 SwTableNode* IsIdxInTbl( const SwNodeIndex& rIdx );
    inline const SwTableNode* IsIdxInTbl( const SwNodeIndex& rIdx ) const;
    const SwTable* TextToTable( const SwInsertTableOptions& rInsTblOpts,
                                const SwPaM& rRange, sal_Unicode cCh,
                                short eAdjust,
                                const SwTableAutoFmt* = 0 );
    const SwTable* TextToTable( const std::vector< std::vector<SwNodeRange> >& rTableNodes );
    sal_Bool TableToText( const SwTableNode* pTblNd, sal_Unicode cCh );
    bool InsertCol( const SwCursor& rCursor,
                    sal_uInt16 nCnt = 1, bool bBehind = true );
    bool InsertCol( const SwSelBoxes& rBoxes,
                    sal_uInt16 nCnt = 1, bool bBehind = true );
    bool InsertRow( const SwCursor& rCursor,
                    sal_uInt16 nCnt = 1, bool bBehind = true );
    bool InsertRow( const SwSelBoxes& rBoxes,
                    sal_uInt16 nCnt = 1, bool bBehind = true );
    sal_Bool DeleteRowCol( const SwSelBoxes& rBoxes, bool bColumn = false );
    sal_Bool DeleteRow( const SwCursor& rCursor );
    sal_Bool DeleteCol( const SwCursor& rCursor );
    sal_Bool SplitTbl( const SwSelBoxes& rBoxes, sal_Bool bVert = ((sal_Bool)1),
                       sal_uInt16 nCnt = 1, sal_Bool bSameHeight = ((sal_Bool)0) );
    sal_uInt16 MergeTbl( SwPaM& rPam );
    OUString GetUniqueTblName() const;
    sal_Bool IsInsTblFormatNum() const;
    sal_Bool IsInsTblChangeNumFormat() const;
    sal_Bool IsInsTblAlignNum() const;
    void GetTabCols( SwTabCols &rFill, const SwCursor* pCrsr,
                    const SwCellFrm* pBoxFrm = 0 ) const;
    void SetTabCols( const SwTabCols &rNew, sal_Bool bCurRowOnly,
                    const SwCursor* pCrsr, const SwCellFrm* pBoxFrm = 0 );
    void GetTabRows( SwTabCols &rFill, const SwCursor* pCrsr,
                    const SwCellFrm* pBoxFrm = 0 ) const;
    void SetTabRows( const SwTabCols &rNew, sal_Bool bCurColOnly, const SwCursor* pCrsr,
                     const SwCellFrm* pBoxFrm = 0 );
    void SetTabCols(SwTable& rTab, const SwTabCols &rNew, const SwTabCols &rOld,
                                    const SwTableBox *pStart, sal_Bool bCurRowOnly);
    void SetRowsToRepeat( SwTable &rTable, sal_uInt16 nSet );
    sal_Bool SetTableAutoFmt( const SwSelBoxes& rBoxes, const SwTableAutoFmt& rNew );
    sal_Bool GetTableAutoFmt( const SwSelBoxes& rBoxes, SwTableAutoFmt& rGet );
    void AppendUndoForInsertFromDB( const SwPaM& rPam, sal_Bool bIsTable );
    sal_Bool SetColRowWidthHeight( SwTableBox& rAktBox, sal_uInt16 eType,
                                SwTwips nAbsDiff, SwTwips nRelDiff );
    SwTableBoxFmt* MakeTableBoxFmt();
    SwTableLineFmt* MakeTableLineFmt();
    void ChkBoxNumFmt( SwTableBox& rAktBox, sal_Bool bCallUpdate );
    void SetTblBoxFormulaAttrs( SwTableBox& rBox, const SfxItemSet& rSet );
    void ClearBoxNumAttrs( const SwNodeIndex& rNode );
    void ClearLineNumAttrs( SwPosition & rPos );
    sal_Bool InsCopyOfTbl( SwPosition& rInsPos, const SwSelBoxes& rBoxes,
                        const SwTable* pCpyTbl = 0, sal_Bool bCpyName = ((sal_Bool)0),
                        sal_Bool bCorrPos = ((sal_Bool)0) );
    sal_Bool UnProtectCells( const OUString& rTblName );
    sal_Bool UnProtectCells( const SwSelBoxes& rBoxes );
    sal_Bool UnProtectTbls( const SwPaM& rPam );
    sal_Bool HasTblAnyProtection( const SwPosition* pPos,
                              const OUString* pTblName = 0,
                              sal_Bool* pFullTblProtection = 0 );
    sal_Bool SplitTable( const SwPosition& rPos, sal_uInt16 eMode = 0,
                        sal_Bool bCalcNewSize = ((sal_Bool)0) );
    sal_Bool MergeTable( const SwPosition& rPos, sal_Bool bWithPrev = ((sal_Bool)1),
                        sal_uInt16 nMode = 0 );
    void UpdateCharts( const OUString &rName ) const;
  void UpdateAllCharts() {} //{ DoUpdateAllCharts(); }
    void SetTableName( SwFrmFmt& rTblFmt, const OUString &rNewName );
    const SwFmtRefMark* GetRefMark( const OUString& rName ) const;
    const SwFmtRefMark* GetRefMark( sal_uInt16 nIndex ) const;
    sal_uInt16 GetRefMarks( std::vector<OUString>* = 0 ) const;
    SwFlyFrmFmt* InsertLabel( const SwLabelType eType, const OUString &rTxt, const OUString& rSeparator,
                    const OUString& rNumberingSeparator,
                    const sal_Bool bBefore, const sal_uInt16 nId, const sal_uLong nIdx,
                    const OUString& rCharacterStyle,
                    const sal_Bool bCpyBrd = ((sal_Bool)1) );
    SwFlyFrmFmt* InsertDrawLabel(
        const OUString &rTxt, const OUString& rSeparator, const OUString& rNumberSeparator,
        const sal_uInt16 nId, const OUString& rCharacterStyle, SdrObject& rObj );
    const SwAttrPool& GetAttrPool() const {} // { return *mpAttrPool; }
          SwAttrPool& GetAttrPool() {} // { return *mpAttrPool; }
    SwEditShell* GetEditShell( SwViewShell** ppSh = 0 ) const;
    ::sw::IShellCursorSupplier * GetIShellCursorSupplier();
  inline void SetOle2Link(const Link& rLink) {} // {maOle2Link = rLink;}
  inline const Link& GetOle2Link() const {} // {return maOle2Link;}
    SwSection * InsertSwSection(SwPaM const& rRange, SwSectionData &,
            SwTOXBase const*const pTOXBase = 0,
            SfxItemSet const*const pAttr = 0, bool const bUpdate = true);
    sal_uInt16 IsInsRegionAvailable( const SwPaM& rRange,
                                const SwNode** ppSttNd = 0 ) const;
    SwSection* GetCurrSection( const SwPosition& rPos ) const;
    SwSectionFmts& GetSections() {} // { return *mpSectionFmtTbl; }
    const SwSectionFmts& GetSections() const {} // { return *mpSectionFmtTbl; }
    SwSectionFmt *MakeSectionFmt( SwSectionFmt *pDerivedFrom );
    void DelSectionFmt( SwSectionFmt *pFmt, bool bDelNodes = false );
    void UpdateSection(sal_uInt16 const nSect, SwSectionData &,
            SfxItemSet const*const = 0, bool const bPreventLinkUpdate = false);
    OUString GetUniqueSectionName( const OUString* pChkStr = 0 ) const;
          SwDocShell* GetDocShell() {} // { return mpDocShell; }
    const SwDocShell* GetDocShell() const {} // { return mpDocShell; }
    void SetDocShell( SwDocShell* pDSh );
    void SetTmpDocShell( SfxObjectShellLock rLock ) {} // { mxTmpDocShell = rLock; }
    SfxObjectShellLock GetTmpDocShell() {} // { return mxTmpDocShell; }
    SfxObjectShell* GetPersist() const;
    ::com::sun::star::uno::Reference< ::com::sun::star::embed::XStorage > GetDocStorage();
    bool IsInLoadAsynchron() const {} // { return mbInLoadAsynchron; }
    void SetInLoadAsynchron( bool bFlag ) {} // { mbInLoadAsynchron = bFlag; }
    bool SelectServerObj( const OUString& rStr, SwPaM*& rpPam,
                            SwNodeRange*& rpRange ) const;
    bool IsCopyIsMove() const {} // { return mbCopyIsMove; }
    void SetCopyIsMove( bool bFlag ) {} // { mbCopyIsMove = bFlag; }
    SwDrawContact* GroupSelection( SdrView& );
    void UnGroupSelection( SdrView& );
    bool DeleteSelection( SwDrawView& );
    void SpellItAgainSam( bool bInvalid, bool bOnlyWrong, bool bSmartTags );
    void InvalidateAutoCompleteFlag();
    void SetCalcFieldValueHdl(Outliner* pOutliner);
    bool IsVisitedURL( const OUString& rURL ) const;
    void SetAutoCorrExceptWord( SwAutoCorrExceptWord* pNew );
    SwAutoCorrExceptWord* GetAutoCorrExceptWord() {} // { return mpACEWord; }
    const SwFmtINetFmt* FindINetAttr( const OUString& rName ) const;
    bool ExecMacro( const SvxMacro& rMacro, OUString* pRet = 0, SbxArray* pArgs = 0 );
    sal_uInt16 CallEvent( sal_uInt16 nEvent, const SwCallMouseEvent& rCallEvent,
                        bool bChkPtr = false, SbxArray* pArgs = 0,
                        const Link* pCallBack = 0 );
    void MoveLeftMargin( const SwPaM& rPam, bool bRight = true,
                        bool bModulus = true );
    inline SvNumberFormatter* GetNumberFormatter( sal_Bool bCreate = ((sal_Bool)1) );
    inline const SvNumberFormatter* GetNumberFormatter( sal_Bool bCreate = ((sal_Bool)1) ) const;
    bool HasInvisibleContent() const;
    bool RemoveInvisibleContent();
    bool RestoreInvisibleContent();
    bool ConvertFieldsToText();
    sal_Bool GenerateGlobalDoc( const OUString& rPath,
                                const SwTxtFmtColl* pSplitColl = 0 );
    sal_Bool GenerateGlobalDoc( const OUString& rPath, int nOutlineLevel = 0 );
    sal_Bool GenerateHTMLDoc( const OUString& rPath,
                                const SwTxtFmtColl* pSplitColl = 0 );
    sal_Bool GenerateHTMLDoc( const OUString& rPath, int nOutlineLevel = 0 );
    long CompareDoc( const SwDoc& rDoc );
    long MergeDoc( const SwDoc& rDoc );
    void SetAutoFmtRedlineComment( const OUString* pTxt, sal_uInt16 nSeqNo = 0 );
    bool IsAutoFmtRedline() const {} // { return mbIsAutoFmtRedline; }
    void SetAutoFmtRedline( bool bFlag ) {} // { mbIsAutoFmtRedline = bFlag; }
    void SetTxtFmtCollByAutoFmt( const SwPosition& rPos, sal_uInt16 nPoolId,
                                const SfxItemSet* pSet = 0 );
    void SetFmtItemByAutoFmt( const SwPaM& rPam, const SfxItemSet& );
    void ClearDoc();
    const SwPagePreviewPrtData* GetPreviewPrtData() const {} // { return mpPgPViewPrtData; }
    void SetPreviewPrtData( const SwPagePreviewPrtData* pData );
  void SetOLEObjModified(){}
    //{ if( GetCurrentViewShell() ) maOLEModifiedTimer.Start(); }
    const SwUnoCrsrTbl& GetUnoCrsrTbl() const {} // { return *mpUnoCrsrTbl; }
    SwUnoCrsr* CreateUnoCrsr( const SwPosition& rPos, bool bTblCrsr = false );
    bool ChgAnchor( const SdrMarkList& _rMrkList,
                        RndStdIds _eAnchorType,
                        const bool _bSameOnly,
                        const bool _bPosCorr );
    void SetRowHeight( const SwCursor& rCursor, const SwFmtFrmSize &rNew );
    void GetRowHeight( const SwCursor& rCursor, SwFmtFrmSize *& rpSz ) const;
    void SetRowSplit( const SwCursor& rCursor, const SwFmtRowSplit &rNew );
    void GetRowSplit( const SwCursor& rCursor, SwFmtRowSplit *& rpSz ) const;
    sal_Bool BalanceRowHeight( const SwCursor& rCursor, sal_Bool bTstOnly = ((sal_Bool)1) );
    void SetRowBackground( const SwCursor& rCursor, const SvxBrushItem &rNew );
    sal_Bool GetRowBackground( const SwCursor& rCursor, SvxBrushItem &rToFill ) const;
    void SetTabBorders( const SwCursor& rCursor, const SfxItemSet& rSet );
    void SetTabLineStyle( const SwCursor& rCursor,
                          const Color* pColor, sal_Bool bSetLine,
                          const editeng::SvxBorderLine* pBorderLine );
    void GetTabBorders( const SwCursor& rCursor, SfxItemSet& rSet ) const;
    void SetBoxAttr( const SwCursor& rCursor, const SfxPoolItem &rNew );
    sal_Bool GetBoxAttr( const SwCursor& rCursor, SfxPoolItem &rToFill ) const;
    void SetBoxAlign( const SwCursor& rCursor, sal_uInt16 nAlign );
    sal_uInt16 GetBoxAlign( const SwCursor& rCursor ) const;
    void AdjustCellWidth( const SwCursor& rCursor, sal_Bool bBalance = ((sal_Bool)0) );
    int Chainable( const SwFrmFmt &rSource, const SwFrmFmt &rDest );
    int Chain( SwFrmFmt &rSource, const SwFrmFmt &rDest );
    void Unchain( SwFrmFmt &rFmt );
    SdrObject* CloneSdrObj( const SdrObject&, bool bMoveWithinDoc = false,
                            bool bInsInPage = true );
    SwExtTextInput* CreateExtTextInput( const SwPaM& rPam );
    void DeleteExtTextInput( SwExtTextInput* pDel );
    SwExtTextInput* GetExtTextInput( const SwNode& rNd,
                                sal_Int32 nCntntPos = -1) const;
    SwExtTextInput* GetExtTextInput() const;
    static SwAutoCompleteWord& GetAutoCompleteWords() {} // { return *mpACmpltWords; }
    bool ContainsMSVBasic() const {} // { return mbContains_MSVBasic; }
    void SetContainsMSVBasic( bool bFlag ) {} // { mbContains_MSVBasic = bFlag; }
    sal_uInt16 FillRubyList( const SwPaM& rPam, SwRubyList& rList,
                        sal_uInt16 nMode );
    sal_uInt16 SetRubyList( const SwPaM& rPam, const SwRubyList& rList,
                        sal_uInt16 nMode );
    void ReadLayoutCache( SvStream& rStream );
    void WriteLayoutCache( SvStream& rStream );
    SwLayoutCache* GetLayoutCache() const {} // { return mpLayoutCache; }
    bool ContainsHiddenChars() const;
    SwModify* GetUnoCallBack() const;
    IGrammarContact* getGrammarContact() const {} // { return mpGrammarContact; }
    void MarkListLevel( const OUString& sListId,
                        const int nListLevel,
                        const bool bValue );
    void MarkListLevel( SwList& rList,
                        const int nListLevel,
                        const bool bValue );
    void ChgFmt(SwFmt & rFmt, const SfxItemSet & rSet);
    void RenameFmt(SwFmt & rFmt, const OUString & sNewName,
                   bool bBroadcast = false);
    void ChgTOX(SwTOXBase & rTOX, const SwTOXBase & rNew);
    OUString GetPaMDescr(const SwPaM & rPaM) const;
    bool IsFirstOfNumRule(SwPosition & rPos);
    com::sun::star::uno::Reference<com::sun::star::container::XNameContainer>
        getXForms() const;
    com::sun::star::uno::Reference< com::sun::star::linguistic2::XProofreadingIterator > GetGCIterator() const;
    bool isXForms() const;
    void initXForms( bool bCreateDefaultModel );
    void disposeXForms( );
    void SetDefaultPageMode(bool bSquaredPageMode);
    sal_Bool IsSquaredPageMode() const;
    void Setn32DummyCompatabilityOptions1( sal_uInt32 CompatabilityOptions1 )
    {
        mn32DummyCompatabilityOptions1 = CompatabilityOptions1;
    }
    sal_uInt32 Getn32DummyCompatabilityOptions1( )
    {
        return mn32DummyCompatabilityOptions1;
    }
    void Setn32DummyCompatabilityOptions2( sal_uInt32 CompatabilityOptions2 )
    {
        mn32DummyCompatabilityOptions2 = CompatabilityOptions2;
    }
    sal_uInt32 Getn32DummyCompatabilityOptions2( )
    {
        return mn32DummyCompatabilityOptions2;
    }
    com::sun::star::uno::Reference< com::sun::star::script::vba::XVBAEventProcessor > GetVbaEventProcessor();
    void SetVBATemplateToProjectCache( com::sun::star::uno::Reference< com::sun::star::container::XNameContainer >& xCache ) {} // { m_xTemplateToProjectCache = xCache; };
        com::sun::star::uno::Reference< com::sun::star::container::XNameContainer > GetVBATemplateToProjectCache() {} // { return m_xTemplateToProjectCache; };
    ::sfx2::IXmlIdRegistry& GetXmlIdRegistry();
    ::sw::MetaFieldManager & GetMetaFieldManager();
    ::sw::UndoManager & GetUndoManager();
    ::sw::UndoManager const& GetUndoManager() const;
    SfxObjectShell* CreateCopy(bool bCallInitNew) const;
    void dumpAsXml( xmlTextWriterPtr writer = __null );
private:
    void CopyMasterHeader(const SwPageDesc &rChged, const SwFmtHeader &rHead, SwPageDesc *pDesc, bool bLeft, bool bFirst);
    void CopyMasterFooter(const SwPageDesc &rChged, const SwFmtFooter &rFoot, SwPageDesc *pDesc, bool bLeft, bool bFirst);
    bool IncrementalDocStatCalculate(long nChars, bool bFields = true);
    long DoIdleStatsUpdate( Timer * ); static long LinkStubDoIdleStatsUpdate( void* pThis, void* );
};


#define IMPL_LINK( Class, Method, ArgType, ArgName ) \
    IMPL_STUB( Class, Method, ArgType ) \
    long Class::Method( ArgType ArgName )

#define IMPL_LINK_NOARG( Class, Method ) \
    IMPL_STUB( Class, Method, void* ) \
    long Class::Method( SAL_UNUSED_PARAMETER void* )

#define IMPL_LINK_INLINE_START( Class, Method, ArgType, ArgName ) \
    inline long Class::Method( ArgType ArgName )

#define IMPL_LINK_INLINE_END( Class, Method, ArgType, ArgName ) \
    IMPL_STUB( Class, Method, ArgType )

#define IMPL_LINK_NOARG_INLINE_START( Class, Method ) \
    inline long Class::Method( SAL_UNUSED_PARAMETER void* )

#define IMPL_LINK_NOARG_INLINE_END( Class, Method ) \
    IMPL_STUB( Class, Method, void* )

#define IMPL_LINK_INLINE( Class, Method, ArgType, ArgName, Body ) \
    long Class::Method( ArgType ArgName ) \
    Body \
    IMPL_STUB( Class, Method, ArgType )
