#include <sun/security/ssl/SSLExtension$ClientExtensions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/LinkedList.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef CH_CERTIFICATE_AUTHORITIES
#undef CH_MAX_FRAGMENT_LENGTH
#undef CH_SERVER_NAME
#undef NOT_APPLICABLE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $LinkedList = ::java::util::LinkedList;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$Collection* SSLExtension$ClientExtensions::defaults = nullptr;

void SSLExtension$ClientExtensions::init$() {
}

void SSLExtension$ClientExtensions::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Collection, clientDisabledExtensions, $SSLExtension::getDisabledExtensions("jdk.tls.client.disableExtensions"_s));
		$var($Collection, extensions, $cast($AbstractCollection, $new($LinkedList)));
		{
			$var($SSLExtensionArray, arr$, $SSLExtension::values());
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$SSLExtension* extension = arr$->get(i$);
				$init($SSLHandshake);
				if ($nc(extension)->handshakeType != $SSLHandshake::NOT_APPLICABLE && !$nc(clientDisabledExtensions)->contains(extension->name$)) {
					extensions->add(extension);
				}
			}
		}
		if (extensions->contains($SSLExtension::CH_SERVER_NAME)) {
			bool enableExtension = $Utilities::getBooleanProperty("jsse.enableSNIExtension"_s, true);
			if (!enableExtension) {
				extensions->remove($SSLExtension::CH_SERVER_NAME);
			}
		}
		if (extensions->contains($SSLExtension::CH_MAX_FRAGMENT_LENGTH)) {
			bool var$0 = $Utilities::getBooleanProperty("jsse.enableMFLNExtension"_s, false);
			bool enableExtension = var$0 || $Utilities::getBooleanProperty("jsse.enableMFLExtension"_s, false);
			if (!enableExtension) {
				extensions->remove($SSLExtension::CH_MAX_FRAGMENT_LENGTH);
			}
		}
		if (extensions->contains($SSLExtension::CH_CERTIFICATE_AUTHORITIES)) {
			bool enableExtension = $Utilities::getBooleanProperty("jdk.tls.client.enableCAExtension"_s, false);
			if (!enableExtension) {
				extensions->remove($SSLExtension::CH_CERTIFICATE_AUTHORITIES);
			}
		}
		$assignStatic(SSLExtension$ClientExtensions::defaults, $Collections::unmodifiableCollection(extensions));
	}
}

SSLExtension$ClientExtensions::SSLExtension$ClientExtensions() {
}

$Class* SSLExtension$ClientExtensions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaults", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/security/ssl/SSLExtension;>;", $STATIC | $FINAL, $staticField(SSLExtension$ClientExtensions, defaults)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SSLExtension$ClientExtensions, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLExtension$ClientExtensions", "sun.security.ssl.SSLExtension", "ClientExtensions", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLExtension$ClientExtensions",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLExtension"
	};
	$loadClass(SSLExtension$ClientExtensions, name, initialize, &classInfo$$, SSLExtension$ClientExtensions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLExtension$ClientExtensions);
	});
	return class$;
}

$Class* SSLExtension$ClientExtensions::class$ = nullptr;

		} // ssl
	} // security
} // sun