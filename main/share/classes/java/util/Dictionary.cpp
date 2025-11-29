#include <java/util/Dictionary.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _Dictionary_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dictionary::*)()>(&Dictionary::init$))},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TV;>;", $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TK;>;", $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
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