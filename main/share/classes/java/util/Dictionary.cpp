#include <java/util/Dictionary.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace util {

$MethodInfo _Dictionary_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Dictionary, init$, void)},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TV;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, elements, $Enumeration*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, get, $Object*, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, isEmpty, bool)},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TK;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, keys, $Enumeration*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, put, $Object*, Object$*, Object$*)},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, remove, $Object*, Object$*)},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dictionary, size, int32_t)},
	{}
};

$ClassInfo _Dictionary_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.Dictionary",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Dictionary_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Dictionary($Class* clazz) {
	return $of($alloc(Dictionary));
}

void Dictionary::init$() {
}

Dictionary::Dictionary() {
}

$Class* Dictionary::load$($String* name, bool initialize) {
	$loadClass(Dictionary, name, initialize, &_Dictionary_ClassInfo_, allocate$Dictionary);
	return class$;
}

$Class* Dictionary::class$ = nullptr;

	} // util
} // java