#include <sun/security/ssl/SSLExtension$ServerExtensions.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/LinkedList.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

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

namespace sun {
	namespace security {
		namespace ssl {

$Collection* SSLExtension$ServerExtensions::defaults = nullptr;

void SSLExtension$ServerExtensions::init$() {
}

void SSLExtension$ServerExtensions::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Collection, serverDisabledExtensions, $SSLExtension::getDisabledExtensions("jdk.tls.server.disableExtensions"_s));
		$var($Collection, extensions, $cast($AbstractCollection, $new($LinkedList)));
		{
			$var($SSLExtensionArray, arr$, $SSLExtension::values());
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$SSLExtension* extension = arr$->get(i$);
				$init($SSLHandshake);
				if ($nc(extension)->handshakeType != $SSLHandshake::NOT_APPLICABLE && !$nc(serverDisabledExtensions)->contains(extension->name$)) {
					extensions->add(extension);
				}
			}
		}
		$assignStatic(SSLExtension$ServerExtensions::defaults, $Collections::unmodifiableCollection(extensions));
	}
}

SSLExtension$ServerExtensions::SSLExtension$ServerExtensions() {
}

$Class* SSLExtension$ServerExtensions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaults", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/security/ssl/SSLExtension;>;", $STATIC | $FINAL, $staticField(SSLExtension$ServerExtensions, defaults)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SSLExtension$ServerExtensions, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLExtension$ServerExtensions", "sun.security.ssl.SSLExtension", "ServerExtensions", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLExtension$ServerExtensions",
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
	$loadClass(SSLExtension$ServerExtensions, name, initialize, &classInfo$$, SSLExtension$ServerExtensions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLExtension$ServerExtensions);
	});
	return class$;
}

$Class* SSLExtension$ServerExtensions::class$ = nullptr;

		} // ssl
	} // security
} // sun