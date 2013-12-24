#pragma once 
//#include <com/sun/star/uno/Any.hxx>
//#include <com/sun/star/lang/XComponent.hpp>

#include <assert.h>
#include <iostream>

typedef short  sal_Int16;
typedef int    sal_Int32;
typedef unsigned int sal_uInt32;

class OUString {};
class OString {
public:
  OString(const char *) {}
  const char * getStr() {}
  OString & operator += (const char *) {}
};
class SolarMutexGuard {};

const int RTL_TEXTENCODING_UTF8=1;
inline OString OUStringToOString(OUString , int ) {}

namespace com {
  namespace sun { 
    namespace star { 
      namespace uno {


        enum some_types {
          typelib_TypeClass_INTERFACE,
        };


        class Type {
        public :
          template <class T> Type (T);
          some_types eTypeClass;
        };

        class Any {
        public:
          Type * pType;
          Type * pReserved;
          template<class T >Any operator>>=(T) const {}
          operator bool() {return false;}
        };

        class XInterface {
        public :
          template <class T> Any queryInterface(T) {}
        };

        template<class T> class Sequence {
        public:
          int getLength() {}
          T operator [] (int x) {}
        };

        enum extra { UNO_QUERY }; 
 
        class Exception {};

        class RuntimeException : Exception {};

        template <class T> class Reference {
        public:
          Reference() {}
          Reference(T&) {}
          Reference(T*) {}
          Reference(Reference<T>, extra){}
          template <class U> Reference(Reference<U>, extra) {}
          T * operator ->  () const  {}
          bool operator ==  (Reference<T> const) const {
            return false;
          }
          bool is() const {};
          T * get() const {}
        } ;
      };
    };
  };
};

namespace cppu {
  template <class T> class WeakImplHelper1 : public T{};
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
      namespace lang {
        class EventObject {};
        class IndexOutOfBoundsException {};
      };
    };
  };
};

using namespace com::sun::star::uno;

namespace com {
  namespace sun { 
    namespace star{ 
      
      namespace accessibility {
        class TextSegment{
        public:
          int SegmentStart;
          int SegmentEnd;
        };
        class AccessibleTableModelChangeType {
        public:
          enum X {
            INSERT,
            DELETE,
            UPDATE,
          };
        };

        class AccessibleTableModelChange {
        public:
          int FirstRow;
          int LastRow;
          int FirstColumn;
          int LastColumn;
          AccessibleTableModelChangeType::X Type;

        };

        class XAccessibleContext;
        class AccessibleEventId {
        public :
          enum X {
            ACTION_CHANGED,
            ACTIVE_DESCENDANT_CHANGED,
            BOUNDRECT_CHANGED,
            CARET_CHANGED,
            CHILD,
            CONTENT_FLOWS_FROM_RELATION_CHANGED,
            CONTENT_FLOWS_TO_RELATION_CHANGED,
            CONTROLLED_BY_RELATION_CHANGED,
            CONTROLLER_FOR_RELATION_CHANGED,
            DESCRIPTION_CHANGED,
            HYPERTEXT_CHANGED,
            INVALIDATE_ALL_CHILDREN,
            LABELED_BY_RELATION_CHANGED,
            LABEL_FOR_RELATION_CHANGED,
            LISTBOX_ENTRY_COLLAPSED,
            LISTBOX_ENTRY_EXPANDED,
            MEMBER_OF_RELATION_CHANGED,
            NAME_CHANGED,
            SELECTION_CHANGED,
            STATE_CHANGED,
            SUB_WINDOW_OF_RELATION_CHANGED,
            TABLE_CAPTION_CHANGED,
            TABLE_COLUMN_DESCRIPTION_CHANGED,
            TABLE_COLUMN_HEADER_CHANGED,
            TABLE_MODEL_CHANGED,
            TABLE_ROW_DESCRIPTION_CHANGED,
            TABLE_ROW_HEADER_CHANGED,
            TABLE_SUMMARY_CHANGED,
            TEXT_ATTRIBUTE_CHANGED,
            TEXT_CHANGED,
            TEXT_SELECTION_CHANGED,
            VALUE_CHANGED,
            VISIBLE_DATA_CHANGED,            
          };
          
        };

        class XAccessible : public XInterface{
        public:
          XAccessibleContext * getAccessibleContext() {}
          void release() {}
          void acquire() {}
        };

        class XAccessibleAction     : public XAccessible    {};
        class XAccessibleComponent  : public XAccessible    {};
        class XAccessibleEditableText : public XAccessible  {};
        class XAccessibleHypertext    : public XAccessible  {};
        class XAccessibleImage         : public XAccessible  {};
        class XAccessibleMultiLineText : public XAccessible {};
        class XAccessibleSelection   : public XAccessible   {};
        class XAccessibleTable        : public XAccessible  {};
        class XAccessibleText          : public XAccessible {};
        class XAccessibleTextMarkup    : public XAccessible {};
        class XAccessibleTextAttributes : public XAccessible {};
        class XAccessibleValue        : public XAccessible  {};
        class XAccessibleEventListener {
        public :
          //  XAccessibleEventListener(AtkListener*);
          
        };
        class AccessibleEventObject {
        public :
          AccessibleEventId::X EventId;
          Any OldValue;
          Any NewValue;
          //Reference< accessibility::XAccessibleContext > Source;
          Reference< XInterface > Source;
        };


        class Set {
        public:
          int getLength() {}
          uno::Reference< accessibility::XAccessible > operator [] (int x) {}
        };

        class AccessibleRelationType {
        public :
          enum relation_type {
            CONTENT_FLOWS_FROM,
            CONTROLLED_BY,
            CONTROLLER_FOR,
            LABELED_BY,
            LABEL_FOR,
            MEMBER_OF,
            NODE_CHILD_OF,
            SUB_WINDOW_OF,
            CONTENT_FLOWS_TO
          };
        };

        class AccessibleRelation {
        public:

          AccessibleRelationType::relation_type RelationType;

          Set TargetSet;
          
        };
        
        class XAccessibleRelationSet {
        public : 
          AccessibleRelation getRelation(int n) {}
          int getRelationCount() {}
        };



 
       
        class AccessibleStateType {
        public :
          enum x { 
            ACTIVE,
            ARMED,
              BUSY ,
              DEFUNC,
              CHECKED ,
              EDITABLE ,
              ENABLED ,
              EXPANDABLE ,
              EXPANDED ,
              FOCUSABLE ,
              FOCUSED ,
              HORIZONTAL ,
              ICONIFIED ,
              INDETERMINATE ,
              INVALID ,
              MANAGES_DESCENDANTS ,
              MODAL ,
              MULTI_LINE ,
              MULTI_SELECTABLE,
              OPAQUE ,
              PRESSED ,
              RESIZABLE ,
              SELECTABLE ,
              SELECTED ,
              SENSITIVE ,
              SHOWING ,
              SINGLE_LINE ,
              STALE ,
              TRANSIENT ,
              VERTICAL ,
              VISIBLE 
            };
        };
       

        class AccessibleRole { 
        public:
          enum role {
              EDIT_BAR,
              CAPTION,
              CHART,
              DOCUMENT,
              EMBEDDED_OBJECT,
              END_NOTE,
              FOOTNOTE,
              FORM,
              GROUP_BOX,
              HEADING,
              HYPER_LINK,
              IMAGE_MAP,
              NOTE,
              PAGE,
              SECTION,
              SHAPE,
              TEXT_FRAME,
              TREE_ITEM};
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
      };
    };
  };
};


//enum AtkRole;

template <class T> int SAL_N_ELEMENTS(T v [] ) {
  //  size_t c = sizeof(v);
  //  size_t c2 = sizeof(T);
  size_t c = sizeof(v)/sizeof(T);

  std::cout << "Count" << c << std::endl;

  return c;
}
template <class T> void OSL_FAIL(T) {}
template <class T> void OSL_ASSERT(T) {}

