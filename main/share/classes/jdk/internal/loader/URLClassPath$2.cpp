#include <jdk/internal/loader/URLClassPath$2.h>

#include <java/util/NoSuchElementException.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$2_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, this$0)},
	{"val$check", "Z", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, val$check)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, val$name)},
	{"index", "I", nullptr, $PRIVATE, $field(URLClassPath$2, index)},
	{"res", "Ljdk/internal/loader/Resource;", nullptr, $PRIVATE, $field(URLClassPath$2, res)},
	{}
};

$MethodInfo _URLClassPath$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(URLClassPath$2::*)($URLClassPath*,$String*,bool)>(&URLClassPath$2::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(URLClassPath$2::*)()>(&URLClassPath$2::next))},
	{"nextElement", "()Ljdk/internal/loader/Resource;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassPath$2_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath",
	"getResources",
	"(Ljava/lang/String;Z)Ljava/util/Enumeration;"
};

$InnerClassInfo _URLClassPath$2_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$2",
	"java.lang.Object",
	"java.util.Enumeration",
	_URLClassPath$2_FieldInfo_,
	_URLClassPath$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljdk/internal/loader/Resource;>;",
	&_URLClassPath$2_EnclosingMethodInfo_,
	_URLClassPath$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$2($Class* clazz) {
	return $of($alloc(URLClassPath$2));
}

void URLClassPath$2::init$($URLClassPath* this$0, $String* val$name, bool val$check) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	this->val$check = val$check;
	this->index = 0;
	$set(this, res, nullptr);
}

bool URLClassPath$2::next() {
	if (this->res != nullptr) {
		return true;
	} else {
		$var($URLClassPath$Loader, loader, nullptr);
		while (($assign(loader, this->this$0->getLoader(this->index++))) != nullptr) {
			$set(this, res, $nc(loader)->getResource(this->val$name, this->val$check));
			if (this->res != nullptr) {
				return true;
			}
		}
		return false;
	}
}

bool URLClassPath$2::hasMoreElements() {
	return next();
}

$Object* URLClassPath$2::nextElement() {
	if (!next()) {
		$throwNew($NoSuchElementException);
	}
	$var($Resource, r, this->res);
	$set(this, res, nullptr);
	return $of(r);
}

URLClassPath$2::URLClassPath$2() {
}

$Class* URLClassPath$2::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$2, name, initialize, &_URLClassPath$2_ClassInfo_, allocate$URLClassPath$2);
	return class$;
}

$Class* URLClassPath$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk