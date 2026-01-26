#include <sun/security/ssl/X509KeyManagerImpl$SizedMap.h>

#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/X509KeyManagerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509KeyManagerImpl$SizedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509KeyManagerImpl$SizedMap, serialVersionUID)},
	{}
};

$MethodInfo _X509KeyManagerImpl$SizedMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(X509KeyManagerImpl$SizedMap, init$, void)},
	{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<TK;TV;>;)Z", $PROTECTED, $virtualMethod(X509KeyManagerImpl$SizedMap, removeEldestEntry, bool, $Map$Entry*)},
	{}
};

$InnerClassInfo _X509KeyManagerImpl$SizedMap_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509KeyManagerImpl$SizedMap", "sun.security.ssl.X509KeyManagerImpl", "SizedMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X509KeyManagerImpl$SizedMap_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.X509KeyManagerImpl$SizedMap",
	"java.util.LinkedHashMap",
	nullptr,
	_X509KeyManagerImpl$SizedMap_FieldInfo_,
	_X509KeyManagerImpl$SizedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/LinkedHashMap<TK;TV;>;",
	nullptr,
	_X509KeyManagerImpl$SizedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509KeyManagerImpl"
};

$Object* allocate$X509KeyManagerImpl$SizedMap($Class* clazz) {
	return $of($alloc(X509KeyManagerImpl$SizedMap));
}

void X509KeyManagerImpl$SizedMap::init$() {
	$LinkedHashMap::init$();
}

bool X509KeyManagerImpl$SizedMap::removeEldestEntry($Map$Entry* eldest) {
	return size() > 10;
}

X509KeyManagerImpl$SizedMap::X509KeyManagerImpl$SizedMap() {
}

$Class* X509KeyManagerImpl$SizedMap::load$($String* name, bool initialize) {
	$loadClass(X509KeyManagerImpl$SizedMap, name, initialize, &_X509KeyManagerImpl$SizedMap_ClassInfo_, allocate$X509KeyManagerImpl$SizedMap);
	return class$;
}

$Class* X509KeyManagerImpl$SizedMap::class$ = nullptr;

		} // ssl
	} // security
} // sun