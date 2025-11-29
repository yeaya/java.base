#include <Bug4990596.h>

#include <Bug4990596$MutableInteger.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $Bug4990596$MutableInteger = ::Bug4990596$MutableInteger;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;

$MethodInfo _Bug4990596_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4990596::*)()>(&Bug4990596::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4990596::main))},
	{}
};

$InnerClassInfo _Bug4990596_InnerClassesInfo_[] = {
	{"Bug4990596$MutableInteger", "Bug4990596", "MutableInteger", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Bug4990596_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4990596",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Bug4990596_MethodInfo_,
	nullptr,
	nullptr,
	_Bug4990596_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Bug4990596$MutableInteger"
};

$Object* allocate$Bug4990596($Class* clazz) {
	return $of($alloc(Bug4990596));
}

void Bug4990596::init$() {
}

void Bug4990596::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$$new($DecimalFormat)->format($$new($Bug4990596$MutableInteger, 0));
}

Bug4990596::Bug4990596() {
}

$Class* Bug4990596::load$($String* name, bool initialize) {
	$loadClass(Bug4990596, name, initialize, &_Bug4990596_ClassInfo_, allocate$Bug4990596);
	return class$;
}

$Class* Bug4990596::class$ = nullptr;