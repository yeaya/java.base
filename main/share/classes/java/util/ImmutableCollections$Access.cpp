#include <java/util/ImmutableCollections$Access.h>

#include <java/util/ImmutableCollections$Access$1.h>
#include <java/util/ImmutableCollections.h>
#include <jdk/internal/access/JavaUtilCollectionAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$Access$1 = ::java::util::ImmutableCollections$Access$1;
using $JavaUtilCollectionAccess = ::jdk::internal::access::JavaUtilCollectionAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

$MethodInfo _ImmutableCollections$Access_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableCollections$Access::*)()>(&ImmutableCollections$Access::init$))},
	{}
};

$InnerClassInfo _ImmutableCollections$Access_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$Access", "java.util.ImmutableCollections", "Access", $STATIC},
	{"java.util.ImmutableCollections$Access$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImmutableCollections$Access_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ImmutableCollections$Access",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImmutableCollections$Access_MethodInfo_,
	nullptr,
	nullptr,
	_ImmutableCollections$Access_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$Access($Class* clazz) {
	return $of($alloc(ImmutableCollections$Access));
}

void ImmutableCollections$Access::init$() {
}

void clinit$ImmutableCollections$Access($Class* class$) {
	{
		$SharedSecrets::setJavaUtilCollectionAccess($$new($ImmutableCollections$Access$1));
	}
}

ImmutableCollections$Access::ImmutableCollections$Access() {
}

$Class* ImmutableCollections$Access::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$Access, name, initialize, &_ImmutableCollections$Access_ClassInfo_, clinit$ImmutableCollections$Access, allocate$ImmutableCollections$Access);
	return class$;
}

$Class* ImmutableCollections$Access::class$ = nullptr;

	} // util
} // java