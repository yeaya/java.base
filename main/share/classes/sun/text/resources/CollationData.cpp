#include <sun/text/resources/CollationData.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

$MethodInfo _CollationData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationData::*)()>(&CollationData::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _CollationData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.CollationData",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_MethodInfo_
};

$Object* allocate$CollationData($Class* clazz) {
	return $of($alloc(CollationData));
}

void CollationData::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(""_s)
	})});
}

CollationData::CollationData() {
}

$Class* CollationData::load$($String* name, bool initialize) {
	$loadClass(CollationData, name, initialize, &_CollationData_ClassInfo_, allocate$CollationData);
	return class$;
}

$Class* CollationData::class$ = nullptr;

		} // resources
	} // text
} // sun