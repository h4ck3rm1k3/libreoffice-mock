#pragma once 
//#include <com/sun/star/uno/Any.hxx>
//#include <com/sun/star/lang/XComponent.hpp>
//#include <atkobject.h>
#include <atk/atk.h>
#include <vector>



const int SW_ADD_SELECT = 1;
#define SAL_NO_VTABLE
#define SVX_DLLPUBLIC
#define SVX_DLLPRIVATE
#define SAL_CALL
#define SAL_UNUSED_PARAMETER
#define CPPU_GCC_DLLPUBLIC_EXPORT
#define CPPU_GCC_DLLPRIVATE
#define CPPU_GCC3_ALIGN
//#define CHECK_FOR_DEFUNC(X) ../sw/source/core/access/acccontext.hxx:410
//#define THROW_RUNTIME_EXCEPTION(X)  ../sw/source/core/access/acccontext.hxx:394
enum colors{
  COL_BLACK,
  COL_WHITE
};


class AccessibleShapeTreeInfo {};
// {
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


#include <assert.h>
#include <iostream>
//class XInterface;
typedef char sal_uInt8;
typedef char sal_Char;
typedef char sal_Int8;
typedef long long sal_Int64;
typedef int sal_Unicode;
typedef short  sal_Int16;
typedef unsigned short  sal_uInt16;
typedef bool   sal_Bool;
typedef int    sal_Int32;
typedef unsigned int sal_uInt32;

const sal_Bool sal_False=false;
const sal_Bool sal_True=false;

const char * SW_RESSTR(sal_uInt16&) {}

namespace osl {
  class Mutex{};
  class MutexGuard{
  public:
    MutexGuard(Mutex){}
  };
};

enum tAccessibleStates {

};


class SwClient{};

//class SwAccessibleSelectionHelper{};
class SwTOXSortTabBase{};
class SfxPoolItem{};


class OString {
public:
  OString(const char *) {}
  const char * getStr() {}
  OString & operator += (const char *) {}
};
class SolarMutexGuard {};

const int RTL_TEXTENCODING_UTF8=1;



namespace rtl {
  template <class T> class Reference {
  public:
    Reference() {}
    Reference(T&) {}
    Reference(T*) {}
    template <class U> Reference(Reference<U>) {}
    template <class U> Reference(U&) {}
    template <class U> Reference(U*) {}

    //aEvent.NewValue <<= xThis;


    T * operator ->  () const  {}
    T * get() const {}
    bool is() {}
  };
  class OUStringHash{};
  class OUString {
  public:
    OUString() {}
    OUString(const char *) {}
    OUString & replaceFirst(OUString, const OUString &);

  };
  inline OString OUStringToOString(OUString , int ) {}  

  template <class T, class U> class StaticWithInit {};
};
using namespace rtl;


class SdrObject{};

class SwCntntFrm;
class SwTxtNode {
public:
  void GetOfst() {}
};

class SwCrsrShell {
public:
  void ClearMark() {};
  template <class T> bool ISA(T) {};
  void KillPams() {};
  template <class T> void SetSelection(T){};
  void ShowCrsr(){};
};

class SwFEShell : public SwCrsrShell {
public:
  void FinishOLEObj(){}
  bool IsFrmSelected() const{}
  bool IsObjSelected()const{}
  template <class T> void SelectObj(T&, int){}
  template <class T> void SelectObj(T&, int, SdrObject *&){}
};

class AFrm {
public:
  bool IsEmpty() const {} 
};

class SwFrm {
public :
  bool IsRootFrm() const {};
  bool IsLayoutFrm() const {};
  bool IsTxtFrm() const {};
  bool IsPageFrm() const {};
  bool IsEmptyPage() const {};
  bool IsFlyFrm() const {};
  bool IsCntntFrm() const {};
  const SwCntntFrm * ContainsCntnt() const {};
  int GetPhyPageNum() const {};
  const SdrObject * GetVirtDrawObj() const {};
  const AFrm & Frm() const {};
  
};
class SwIndex{
public:
  template<class T> SwIndex(T*, SwIndex&) {}
};
class SwPosition {
public:
  template <class T> SwPosition(const T&, SwIndex&){}
};
class SwPageFrm  : public SwFrm {};
class SwFlyFrm   : public SwFrm {};
class SwCntntFrm : public SwFrm {};
class SwLayoutFrm : public SwFrm {};
class SwTxtFrm : public SwCntntFrm {

public:
  SwIndex & GetOfst() const;
  const SwTxtNode * GetTxtNode() const;
};


namespace com {
  namespace sun { 
    namespace star {
      
      namespace document {
        class EventObject {};
        class XEventListener{};
      }
      namespace awt {
        class KeyStroke{};
        class XFocusListener{};
        class Point {
        public:
          Point() {}
          Point(const int&, const int&) {}
          int X;
          int Y;   
          void setX(int X) {}
          void setY(int X) {}
          int getX() {}
          int getY() {}
        };
        // com::sun::star::awt::Rectangle
        class Rectangle : public Point{
        public:
          Rectangle(int, int, int, int) {}
          Rectangle() {}
          int Width;
          int Height;
          int Left() const;
          int Top() const;
          Point TopLeft() const {}
          void Move(int x, int y);
          int GetWidth() const;
          int GetHeight() const;
        };
        class Size {
        public:

          Size() {}
          Size(int x, int y) {}
          
        };

      };


      //using namespace com::sun::star::uno
      namespace uno {
        enum extra { UNO_QUERY }; 

        class XAggregation{};
        enum types {
          TypeClass_EXCEPTION,
          TypeClass_STRUCT,
          TypeClass_INTERFACE,
        };


        enum some_types {
          typelib_TypeClass_INTERFACE,
        };


        class Type {
        public :
          Type(com::sun::star::uno::types, rtl::OUString&){}
          template <class T> Type (T){}
          some_types eTypeClass;
        };

        class Any {
        public:
          Type * pType;
          Type * pReserved;
          template<class T >Any operator>>=(T) const {}
          operator bool() {return false;}
        };

        //::com::sun::star::uno::
        class XInterface {
        public :
          template <class T> Any queryInterface(T) {}
          void release() {}
          void acquire() {}
        };

        template<class T> class Sequence {
        public:
          int getLength() {}
          T operator [] (int x) {}
        };



        template <class T> class Reference {
        public:
          Reference() {}
          Reference(T&) {}
          Reference(T*) {}
          Reference(Reference<T>, extra){}

          template <class U> Reference(Reference<U>, extra) {}
          template <class U> Reference(Reference<U>) {}
          template <class U> Reference(U&) {}
          template <class U> Reference(U*) {}
          T * operator ->  () const  {}
          T * operator =  (T *)  {}
          template <class U>   Reference<T> & operator =  (U *)  {}
          Reference<T> operator =  (Reference<T>)  {}

          bool operator ==  (Reference<T> const) const {
            return false;
          }
          bool is() const {};
          T * get() const {}
        } ;

        template <class T> class WeakReference  : public Reference<T> {
        public:
          WeakReference<T> operator = (Reference<T>){}
        };

        class Exception {
        public:
          Exception(
                    const ::rtl::OUString& Message_, 
                    const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_
                    ) 
          {
          
          }

          Exception(
                    ) 
          {
          
          }

        };

        class RuntimeException : Exception {
        public:
          template<class T> RuntimeException(
                           rtl::OUString, 
                           com::sun::star::uno::Reference<
                           T>&) {}
        };

      };
    };
  };
};

namespace cppu {

  template <class T, class U> bool supportsService(T,U) {};

  template <
    class T, 
    class T2, 
    class T3,
    class T4
            >
  class PartialWeakComponentImplHelper4
    : //public T, 
    public T2,public T3, public T4
  {
  public:
    void dispose();
  };
  template <
    class T, 
    class T2, 
    class T3,
    class T4
            >
  class ImplHelper4
    : public T, public T2, public T3, public T4
  {};


  template <class T> class WeakImplHelper1 : public T{};

  template <class T,
            class T2,
            class T3,
            class T4,
            class T5
            > 
  class WeakImplHelper5 : 
    //public T, 
    public T2
  //,    public T3
  //,    public T4
  //,    public T5
  {};

  template <class T> class UnoType {
  public :
    static const com::sun::star::uno::Type& get() {}

    //    static const com::sun::star::uno::Type& (*get)() {
    //      return doget;
    //}
  };
};

template <class T,class U> int rtl_str_compare(T, U) {}
//#include <cppuhelper/factory.hxx>

#define SAL_WNODEPRECATED_DECLARATIONS_PUSH
#define SAL_WNODEPRECATED_DECLARATIONS_POP


namespace com {
  namespace sun { 
    namespace star {
      namespace drawing {
        class XShape {};
      }


      //::com::sun::star::lang
      namespace lang {
        class XComponent {};
        class XTypeProvider{};
        class XUnoTunnel{};
        class DisposedException{
        public:
          template <class T>
          DisposedException(
                            rtl::OUString, 
                            T &) {}
        };
        class XServiceInfo {};
        class Locale {};
        class EventObject {
        public:

          com::sun::star::uno::Reference<com::sun::star::uno::XInterface> Source;
          //     Reference< XInterface > Source;
          template <class T> EventObject(T) {}
          EventObject( ){} 
        };
        class XEventListener {};
        class IndexOutOfBoundsException {
        public:
          template <class T> IndexOutOfBoundsException(
                                                       rtl::OUString, 
                                                       T &
                                                       ) {}

        };
        class IllegalArgumentException {};
      };
    };
  };
};


class ChildrenManager {};
using namespace com::sun::star::uno;
namespace com {
  namespace sun {
    namespace star {
      namespace accessibility {
        //  com.sun.star.accessibility
   
        /*        class AccessibleShape {
        public:
          void dispose();
          };*/
        //        class IllegalAccessibleComponentStateException {};
        // class TextSegment{
        // public:
        //   int SegmentStart;
        //   int SegmentEnd;
        // };

        //  com.sun.star.accessibility
        class AccessibleTableModelChangeType {
        public:
          enum X {
            DELETE = (sal_Int16)2,
            INSERT = (sal_Int16)1,
            UPDATE = (sal_Int16)3,

          };
        };

        // class AccessibleTableModelChange {
        // public:
        //   int FirstRow;
        //   int LastRow;
        //   int FirstColumn;
        //   int LastColumn;
        //   AccessibleTableModelChangeType::X Type;

        // };

        class XAccessibleContext;
        //        class XAccessibleTextSelection {};
        //        class XAccessibleExtendedAttributes {};
        //  com.sun.star.accessibility
        class AccessibleEventId {
        public :
          enum type_enum {
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

        //        class XAccessible;
        /*
          class XAccessible : public XInterface{
          public:
          XAccessibleContext * getAccessibleContext() {}

          };
        */
        /*
          class XAccessibleAction     : public XAccessible    {};
          class XAccessibleComponent  : public XAccessible    {};
          class XAccessibleHypertext    : public XAccessible  {};
          class XAccessibleImage         : public XAccessible  {};
          class XAccessibleMultiLineText : public XAccessible {};
          class XAccessibleSelection   : public XAccessible   {};
          class XAccessibleTable        : public XAccessible  {};
          class XAccessibleText          : public XAccessible {};
          class XAccessibleEditableText : public XAccessibleText  {        };
          class XAccessibleTextMarkup    : public XAccessible {};
          class XAccessibleTextAttributes : public XAccessible {};
          class XAccessibleValue        : public XAccessible  {};
          class XAccessibleEventListener {
          public :
          //  XAccessibleEventListener(AtkListener*);
          
          };
          class XAccessibleStateSet {
          public:
          uno::Sequence< sal_Int16 > getStates() {}
          template <class T> bool contains(T) {}
          };
          class XAccessibleEventBroadcaster {
          public :
          template <class T> void addAccessibleEventListener(T) {}
          };

          class XAccessibleContext : public XAccessible {
          public:
          
          OUString getAccessibleName() {}
          OUString getAccessibleDescription() {}
          int getAccessibleChildCount() {}
          Reference<XAccessible>  getAccessibleChild( int i ) {}
          int getAccessibleIndexInParent() {}
          Reference<XAccessibleRelationSet> getAccessibleRelationSet() {}
          Reference<XAccessibleStateSet>     getAccessibleStateSet () {}
          AccessibleRole::role getAccessibleRole() {}
          Reference<accessibility::XAccessible> getAccessibleParent(){}
          };

          class XAccessibleRelationSet {
          public : 
          AccessibleRelation getRelation(int n) {}
          int getRelationCount() {}
          };
          class AccessibleEventObject {
          public :
          AccessibleEventId::type_enum EventId;
          Any OldValue;
          Any NewValue;
          //Reference< accessibility::XAccessibleContext > Source;
          Reference< XInterface > Source;
          };
        */
        /*        class Set {
        public:
          int getLength() {}
          com::sun::star::uno::Reference< 
            accessibility::XAccessible > 
          operator [] (int x) {}
          };*/
        //  com.sun.star.accessibility
        class AccessibleRelationType {
        public :
          enum relation_type {
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

        /*
          class AccessibleRelation {
          public:
          AccessibleRelationType::relation_type RelationType;
          Set TargetSet;          
          };
        */ 

        //  com.sun.star.accessibility       
        class AccessibleStateType {
        public :
          enum state_type {

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

       
        //  com.sun.star.accessibility
        class AccessibleRole { 
        public:
          enum role {

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
            // EDIT_BAR,
            // CAPTION,
            // CHART,
            // DOCUMENT,
            // EMBEDDED_OBJECT,
            // END_NOTE,
            // FOOTNOTE,
            // FORM,
            // GROUP_BOX,
            // HEADING,
            // HYPER_LINK,
            // IMAGE_MAP,
            // NOTE,
            // PAGE,
            // SECTION,
            // SHAPE,
            // TEXT_FRAME,
            // TREE_ITEM
          };
        };

      }
    }
  }
}

namespace utl {
  class AccessibleRelationSetHelper {
    
  };
  class AccessibleStateSetHelper{
  public:
    AccessibleStateSetHelper() {}

    void AddState(
                  ::com::sun::star::accessibility::AccessibleStateType::state_type
                  
                  );
  };
};

namespace com {
  namespace sun { 
    namespace star{ 
      namespace container {
        class XContainerListener{};
        class ContainerEvent{};
      }
      namespace util {
        class XModeChangeListener{};
        class ModeChangeEvent{};
      }

      namespace beans {
        class XPropertySetInfo{};
        class PropertyChangeEvent{};
        class XPropertySet {};
        class XPropertyChangeListener {};
        class PropertyValue {};
      };

    };
  };
};


//enum AtkRole;

template<typename T, std::size_t Size>
std::size_t SAL_N_ELEMENTS(T(&)[Size]) { 
  //from http://stackoverflow.com/questions/3368883/how-does-this-size-of-array-template-function-work
  //std::cout << "Count" << Size << std::endl;
  return Size; 
}


template <class T> void OSL_FAIL(T) {}
template <class T> void OSL_ASSERT(T) {}

class Window;

class SwPostItMgr{
public: 
  bool HasNotes();
  bool ShowNotes();
  template <class T> bool HasFrmConnectedSidebarWins(T);
  template <class T, class U> Window* GetSidebarWinForFrmByIndex(T,U);
  template <class T, class U> Window* GetAllSidebarWinForFrm(T,U);

};
class SwViewShell : public SwCrsrShell {
public :
  Window * GetWin() const {}
  bool IsPreview(){}
  SwPostItMgr * GetPostItMgr(){}

  template <class T> bool ISA(T) const{}
};
#define ISA(X) ISA(X())

/*class SwAccessibleMap{
public:
  SwViewShell * GetShell() const;
  };*/
class Fraction {};

#define SAL_THROW(X)

//#define SAL_THROW
//#define SAL_THROW(X) ;
// throws X

  class Foo{
  public:
    bool operator == ( Foo &){}
};

class SwPaM {
public:
  SwPaM(SwPosition&){};
  Foo * GetMark(){};
  Foo * GetPoint() {}
  bool HasMark(){}
  
};

using namespace com::sun::star::awt;
template <class T> void OSL_ENSURE(T, const char * message){}
class typelib_TypeDescription {};
class typelib_TypeClass {};

#define EDITENG_DLLPUBLIC
#define DECLARE_XINTERFACE(X)
#define DECLARE_XTYPEPROVIDER(X)


com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleContext>) {
}

com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, sal_Int16) {
}

#include <com/sun/star/accessibility/AccessibleEventObject.hdl>
#include <com/sun/star/accessibility/XAccessibleEventListener.hdl>

namespace comphelper {
  class AccessibleEventNotifier {
  public:
    static int registerClient();
    static void revokeClient( int nClientId );
    static int removeEventListener(sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>&);
    static void addEventListener( sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>& );

    template <class T> static void revokeClientNotifyDisposing(
                                                               sal_uInt32&, 
                                                               T&
                                                               ){}
    static void 
    addEvent( 
             int nClientId, 
             ::com::sun::star::accessibility::AccessibleEventObject& rEvent 
              ){}
  };
};

//#include <com/sun/star/accessibility/XAccessible.hpp>
#include <com/sun/star/accessibility/XAccessible.hdl>

class FunkyXAccessible {};

class Window{
public:
  bool HasFocus() {}

  FunkyXAccessible funky;

  ::com::sun::star::uno::Reference< 
    ::com::sun::star::accessibility::XAccessible > r;

  ::com::sun::star::uno::Reference<
    ::com::sun::star::accessibility::XAccessible
    > GetAccessible() {}
  FunkyXAccessible   GetAccessible2() {}

Point OutputToAbsoluteScreenPixel(Point);

};

class LanguageTag 
{
public:

::com::sun::star::lang::Locale getLocale();

};

class Settings {
public:
LanguageTag GetLanguageTag();
};


class Application {
public:
static Settings GetSettings();
};

class SwRect : public com::sun::star::awt::Rectangle 
{
public:
bool operator ==  (SwRect const) const {
return false;
}
void SSize(com::sun::star::awt::Size x);
template <class T> bool IsOver(T) const ;
SwRect SVRect() const;
int GetPreviewPageSize( int nPageNum );
bool IsEmpty() const;

};


class SwWrtShell
: public SwCrsrShell
{
public:
template<class T>  void SetSelection(T&);
  void SttSelect();
};

/*
'nFlags' was not declared in this scope

invalid static_cast from type 
no matching function for call to 'SwPaM::SwPaM(SwPosition&)'
no matching function for call to 'SwPosition::SwPosition(const SwTxtNode&, SwIndex&)'
no matching function for call to 'rtl::Reference<accessibility::AccessibleShape>::Reference(accessibility::AccessibleShape*&)'
passing 'const SwRect' as 'this' argument of 'bool SwRect::IsEmpty()' discards qualifiers [-fpermissive]
passing 'const SwRect' as 'this' argument of 'int com::sun::star::awt::Rectangle::Left()' discards qualifiers [-fpermissive]
passing 'const SwRect' as 'this' argument of 'int com::sun::star::awt::Rectangle::Top()' discards qualifiers [-fpermissive]
passing 'const SwTxtFrm' as 'this' argument of 'const SwTxtNode* SwTxtFrm::GetTxtNode()' discards qualifiers [-fpermissive]
request for member 'IsEmpty' in '(& rChildFrmOrObj)->sw::access::SwAccessibleChild::GetSwFrm()->SwFrm::Frm()', which is of pointer type 'AFrm*' (maybe you meant to use '->' ?)
request for member 'IsEmpty' in '((SwAccessibleContext*)this)->SwAccessibleContext::<anonymous>.SwAccessibleFrame::GetFrm()->SwFrm::Frm()', which is of pointer type 'AFrm*' (maybe you meant to use '->' ?)

*/
#include <acccontext.hxx>
#include <accfrmobj.hxx>

