#include <jdk/internal/loader/BuiltinClassLoader$1.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

void BuiltinClassLoader$1::init$($BuiltinClassLoader* this$0, $List* val$checked, $Enumeration* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$checked, val$checked);
	$set(this, val$e, val$e);
	$set(this, iterator, $nc(this->val$checked)->iterator());
}

bool BuiltinClassLoader$1::hasNext() {
	$useLocalObjectStack();
	if (this->next != nullptr) {
		return true;
	} else if ($nc(this->iterator)->hasNext()) {
		$set(this, next, $cast($URL, this->iterator->next()));
		return true;
	} else {
		while ($nc(this->val$e)->hasMoreElements() && this->next == nullptr) {
			$set(this, next, $BuiltinClassLoader::checkURL($$cast($URL, this->val$e->nextElement())));
		}
		return this->next != nullptr;
	}
}

bool BuiltinClassLoader$1::hasMoreElements() {
	return hasNext();
}

$Object* BuiltinClassLoader$1::nextElement() {
	if (hasNext()) {
		$var($URL, result, this->next);
		$set(this, next, nullptr);
		return result;
	} else {
		$throwNew($NoSuchElementException);
	}
}

BuiltinClassLoader$1::BuiltinClassLoader$1() {
}

$Class* BuiltinClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, this$0)},
		{"val$e", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, val$e)},
		{"val$checked", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, val$checked)},
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/net/URL;>;", $FINAL, $field(BuiltinClassLoader$1, iterator)},
		{"next", "Ljava/net/URL;", nullptr, 0, $field(BuiltinClassLoader$1, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/util/List;Ljava/util/Enumeration;)V", nullptr, 0, $method(BuiltinClassLoader$1, init$, void, $BuiltinClassLoader*, $List*, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(BuiltinClassLoader$1, hasMoreElements, bool)},
		{"hasNext", "()Z", nullptr, $PRIVATE, $method(BuiltinClassLoader$1, hasNext, bool)},
		{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(BuiltinClassLoader$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BuiltinClassLoader",
		"findResources",
		"(Ljava/lang/String;)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BuiltinClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BuiltinClassLoader$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BuiltinClassLoader"
	};
	$loadClass(BuiltinClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuiltinClassLoader$1);
	});
	return class$;
}

$Class* BuiltinClassLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk