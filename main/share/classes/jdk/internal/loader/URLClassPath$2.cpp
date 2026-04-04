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
	return r;
}

URLClassPath$2::URLClassPath$2() {
}

$Class* URLClassPath$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, this$0)},
		{"val$check", "Z", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, val$check)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$2, val$name)},
		{"index", "I", nullptr, $PRIVATE, $field(URLClassPath$2, index)},
		{"res", "Ljdk/internal/loader/Resource;", nullptr, $PRIVATE, $field(URLClassPath$2, res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/lang/String;Z)V", nullptr, 0, $method(URLClassPath$2, init$, void, $URLClassPath*, $String*, bool)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(URLClassPath$2, hasMoreElements, bool)},
		{"next", "()Z", nullptr, $PRIVATE, $method(URLClassPath$2, next, bool)},
		{"nextElement", "()Ljdk/internal/loader/Resource;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$2, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.URLClassPath",
		"getResources",
		"(Ljava/lang/String;Z)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.URLClassPath$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.URLClassPath$2",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljdk/internal/loader/Resource;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.URLClassPath"
	};
	$loadClass(URLClassPath$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassPath$2);
	});
	return class$;
}

$Class* URLClassPath$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk