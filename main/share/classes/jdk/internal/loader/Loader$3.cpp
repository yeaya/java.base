#include <jdk/internal/loader/Loader$3.h>

#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jdk/internal/loader/Loader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Loader = ::jdk::internal::loader::Loader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _Loader$3_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/Loader;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$3, this$0)},
	{"val$e", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$3, val$e)},
	{"val$urls", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$3, val$urls)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/net/URL;>;", $FINAL, $field(Loader$3, iterator)},
	{}
};

$MethodInfo _Loader$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/Loader;Ljava/util/List;Ljava/util/Enumeration;)V", nullptr, 0, $method(Loader$3, init$, void, $Loader*, $List*, $Enumeration*)},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Loader$3, hasMoreElements, bool)},
	{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Loader$3, nextElement, $Object*)},
	{}
};

$EnclosingMethodInfo _Loader$3_EnclosingMethodInfo_ = {
	"jdk.internal.loader.Loader",
	"getResources",
	"(Ljava/lang/String;)Ljava/util/Enumeration;"
};

$InnerClassInfo _Loader$3_InnerClassesInfo_[] = {
	{"jdk.internal.loader.Loader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Loader$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.Loader$3",
	"java.lang.Object",
	"java.util.Enumeration",
	_Loader$3_FieldInfo_,
	_Loader$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
	&_Loader$3_EnclosingMethodInfo_,
	_Loader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.Loader"
};

$Object* allocate$Loader$3($Class* clazz) {
	return $of($alloc(Loader$3));
}

void Loader$3::init$($Loader* this$0, $List* val$urls, $Enumeration* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$urls, val$urls);
	$set(this, val$e, val$e);
	$set(this, iterator, $nc(this->val$urls)->iterator());
}

bool Loader$3::hasMoreElements() {
	bool var$0 = $nc(this->iterator)->hasNext();
	return (var$0 || $nc(this->val$e)->hasMoreElements());
}

$Object* Loader$3::nextElement() {
	if ($nc(this->iterator)->hasNext()) {
		return $of($cast($URL, $nc(this->iterator)->next()));
	} else {
		return $of($cast($URL, $nc(this->val$e)->nextElement()));
	}
}

Loader$3::Loader$3() {
}

$Class* Loader$3::load$($String* name, bool initialize) {
	$loadClass(Loader$3, name, initialize, &_Loader$3_ClassInfo_, allocate$Loader$3);
	return class$;
}

$Class* Loader$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk