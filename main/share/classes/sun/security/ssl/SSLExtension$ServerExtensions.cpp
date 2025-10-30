#include <sun/security/ssl/SSLExtension$ServerExtensions.h>

#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
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
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $LinkedList = ::java::util::LinkedList;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLExtension$ServerExtensions_FieldInfo_[] = {
	{"defaults", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/security/ssl/SSLExtension;>;", $STATIC | $FINAL, $staticField(SSLExtension$ServerExtensions, defaults)},
	{}
};

$MethodInfo _SSLExtension$ServerExtensions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SSLExtension$ServerExtensions::*)()>(&SSLExtension$ServerExtensions::init$))},
	{}
};

$InnerClassInfo _SSLExtension$ServerExtensions_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLExtension$ServerExtensions", "sun.security.ssl.SSLExtension", "ServerExtensions", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLExtension$ServerExtensions_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLExtension$ServerExtensions",
	"java.lang.Object",
	nullptr,
	_SSLExtension$ServerExtensions_FieldInfo_,
	_SSLExtension$ServerExtensions_MethodInfo_,
	nullptr,
	nullptr,
	_SSLExtension$ServerExtensions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLExtension"
};

$Object* allocate$SSLExtension$ServerExtensions($Class* clazz) {
	return $of($alloc(SSLExtension$ServerExtensions));
}

$Collection* SSLExtension$ServerExtensions::defaults = nullptr;

void SSLExtension$ServerExtensions::init$() {
}

void clinit$SSLExtension$ServerExtensions($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Collection, serverDisabledExtensions, $SSLExtension::getDisabledExtensions("jdk.tls.server.disableExtensions"_s));
		$var($Collection, extensions, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>($new($LinkedList))))));
		{
			$var($SSLExtensionArray, arr$, $SSLExtension::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$SSLExtension* extension = arr$->get(i$);
				{
					$init($SSLHandshake);
					if ($nc(extension)->handshakeType != $SSLHandshake::NOT_APPLICABLE && !$nc(serverDisabledExtensions)->contains(extension->name$)) {
						extensions->add(extension);
					}
				}
			}
		}
		$assignStatic(SSLExtension$ServerExtensions::defaults, $Collections::unmodifiableCollection(extensions));
	}
}

SSLExtension$ServerExtensions::SSLExtension$ServerExtensions() {
}

$Class* SSLExtension$ServerExtensions::load$($String* name, bool initialize) {
	$loadClass(SSLExtension$ServerExtensions, name, initialize, &_SSLExtension$ServerExtensions_ClassInfo_, clinit$SSLExtension$ServerExtensions, allocate$SSLExtension$ServerExtensions);
	return class$;
}

$Class* SSLExtension$ServerExtensions::class$ = nullptr;

		} // ssl
	} // security
} // sun