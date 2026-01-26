#include <sun/security/util/Cache$CacheVisitor.h>

#include <java/util/Map.h>
#include <sun/security/util/Cache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Cache$CacheVisitor_MethodInfo_[] = {
	{"visit", "(Ljava/util/Map;)V", "(Ljava/util/Map<TK;TV;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Cache$CacheVisitor, visit, void, $Map*)},
	{}
};

$InnerClassInfo _Cache$CacheVisitor_InnerClassesInfo_[] = {
	{"sun.security.util.Cache$CacheVisitor", "sun.security.util.Cache", "CacheVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cache$CacheVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.Cache$CacheVisitor",
	nullptr,
	nullptr,
	nullptr,
	_Cache$CacheVisitor_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Cache$CacheVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.Cache"
};

$Object* allocate$Cache$CacheVisitor($Class* clazz) {
	return $of($alloc(Cache$CacheVisitor));
}

$Class* Cache$CacheVisitor::load$($String* name, bool initialize) {
	$loadClass(Cache$CacheVisitor, name, initialize, &_Cache$CacheVisitor_ClassInfo_, allocate$Cache$CacheVisitor);
	return class$;
}

$Class* Cache$CacheVisitor::class$ = nullptr;

		} // util
	} // security
} // sun