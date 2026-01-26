#include <sun/security/provider/AbstractDrbg$NonceProvider.h>

#include <sun/security/provider/AbstractDrbg.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _AbstractDrbg$NonceProvider_FieldInfo_[] = {
	{"block", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDrbg$NonceProvider, block)},
	{}
};

$MethodInfo _AbstractDrbg$NonceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(AbstractDrbg$NonceProvider, init$, void)},
	{"next", "()[B", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(AbstractDrbg$NonceProvider, next, $bytes*)},
	{}
};

$InnerClassInfo _AbstractDrbg$NonceProvider_InnerClassesInfo_[] = {
	{"sun.security.provider.AbstractDrbg$NonceProvider", "sun.security.provider.AbstractDrbg", "NonceProvider", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractDrbg$NonceProvider_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.AbstractDrbg$NonceProvider",
	"java.lang.Object",
	nullptr,
	_AbstractDrbg$NonceProvider_FieldInfo_,
	_AbstractDrbg$NonceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDrbg$NonceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.AbstractDrbg"
};

$Object* allocate$AbstractDrbg$NonceProvider($Class* clazz) {
	return $of($alloc(AbstractDrbg$NonceProvider));
}

$bytes* AbstractDrbg$NonceProvider::block = nullptr;

void AbstractDrbg$NonceProvider::init$() {
}

$bytes* AbstractDrbg$NonceProvider::next() {
	$load(AbstractDrbg$NonceProvider);
	$synchronized(class$) {
		$init(AbstractDrbg$NonceProvider);
		int32_t k = 15;
		while (true) {
			bool var$0 = (k >= 0);
			if (!(var$0 && (++(*$nc(AbstractDrbg$NonceProvider::block))[k] == 0))) {
				break;
			}
			{
				--k;
			}
		}
		return $cast($bytes, $nc(AbstractDrbg$NonceProvider::block)->clone());
	}
}

void clinit$AbstractDrbg$NonceProvider($Class* class$) {
	$assignStatic(AbstractDrbg$NonceProvider::block, $new($bytes, 16));
}

AbstractDrbg$NonceProvider::AbstractDrbg$NonceProvider() {
}

$Class* AbstractDrbg$NonceProvider::load$($String* name, bool initialize) {
	$loadClass(AbstractDrbg$NonceProvider, name, initialize, &_AbstractDrbg$NonceProvider_ClassInfo_, clinit$AbstractDrbg$NonceProvider, allocate$AbstractDrbg$NonceProvider);
	return class$;
}

$Class* AbstractDrbg$NonceProvider::class$ = nullptr;

		} // provider
	} // security
} // sun