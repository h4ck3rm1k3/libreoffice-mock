#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_MSAASERVICE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_MSAASERVICE_HPP

#include "sal/config.h"

#include <cassert>

#include "com/sun/star/accessibility/XMSAAService.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

#if defined ANDROID || defined IOS //TODO
#include <osl/detail/component-defines.h>
#endif

#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService
extern "C" void * SAL_CALL LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService(void *, void *);
#endif

namespace com { namespace sun { namespace star { namespace accessibility {

class MSAAService {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        assert(the_context.is());
        ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService > the_instance;
        try {
#if defined LO_URE_CURRENT_ENV && defined LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService && (LO_URE_CURRENT_ENV) == (LO_URE_CTOR_ENV_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService) && defined LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService >(::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >(static_cast< ::com::sun::star::uno::XInterface * >((*LO_URE_CTOR_FUN_com_dot_sun_dot_star_dot_accessibility_dot_MSAAService)(the_context.get(), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >().get())), ::SAL_NO_ACQUIRE), ::com::sun::star::uno::UNO_QUERY);
#else
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XMSAAService >(the_context->getServiceManager()->createInstanceWithContext(::rtl::OUString( "com.sun.star.accessibility.MSAAService" ), the_context), ::com::sun::star::uno::UNO_QUERY);
#endif
        } catch (const ::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (const ::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString( "component context fails to supply service com.sun.star.accessibility.MSAAService of type com.sun.star.accessibility.XMSAAService: " ) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString( "component context fails to supply service com.sun.star.accessibility.MSAAService of type com.sun.star.accessibility.XMSAAService" ), the_context);
        }
        return the_instance;
    }

private:
    MSAAService(); // not implemented
    MSAAService(MSAAService &); // not implemented
    ~MSAAService(); // not implemented
    void operator =(MSAAService); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_MSAASERVICE_HPP
