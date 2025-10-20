#include <jdk/internal/loader/BuiltinClassLoader$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BuiltinClassLoader$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, this$0)},
	{"val$e", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, val$e)},
	{"val$checked", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$1, val$checked)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/net/URL;>;", $FINAL, $field(BuiltinClassLoader$1, iterator)},
	{"next", "Ljava/net/URL;", nullptr, 0, $field(BuiltinClassLoader$1, next)},
	{}
};

$MethodInfo _BuiltinClassLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/util/List;Ljava/util/Enumeration;)V", nullptr, 0, $method(static_cast<void(BuiltinClassLoader$1::*)($BuiltinClassLoader*,$List*,$Enumeration*)>(&BuiltinClassLoader$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BuiltinClassLoader$1::*)()>(&BuiltinClassLoader$1::hasNext))},
	{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BuiltinClassLoader$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BuiltinClassLoader",
	"findResources",
	"(Ljava/lang/String;)Ljava/util/Enumeration;"
};

$InnerClassInfo _BuiltinClassLoader$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BuiltinClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuiltinClassLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BuiltinClassLoader$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_BuiltinClassLoader$1_FieldInfo_,
	_BuiltinClassLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
	&_BuiltinClassLoader$1_EnclosingMethodInfo_,
	_BuiltinClassLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BuiltinClassLoader"
};

$Object* allocate$BuiltinClassLoader$1($Class* clazz) {
	return $of($alloc(BuiltinClassLoader$1));
}

void BuiltinClassLoader$1::init$($BuiltinClassLoader* this$0, $List* val$checked, $Enumeration* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$checked, val$checked);
	$set(this, val$e, val$e);
	$set(this, iterator, $nc(this->val$checked)->iterator());
}

bool BuiltinClassLoader$1::hasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->next != nullptr) {
		return true;
	} else if ($nc(this->iterator)->hasNext()) {
		$set(this, next, $cast($URL, $nc(this->iterator)->next()));
		return true;
	} else {
		while ($nc(this->val$e)->hasMoreElements() && this->next == nullptr) {
			$set(this, next, $BuiltinClassLoader::checkURL($cast($URL, $($nc(this->val$e)->nextElement()))));
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
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

BuiltinClassLoader$1::BuiltinClassLoader$1() {
}

$Class* BuiltinClassLoader$1::load$($String* name, bool initialize) {
	$loadClass(BuiltinClassLoader$1, name, initialize, &_BuiltinClassLoader$1_ClassInfo_, allocate$BuiltinClassLoader$1);
	return class$;
}

$Class* BuiltinClassLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk