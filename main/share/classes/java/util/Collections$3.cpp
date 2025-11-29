#include <java/util/Collections$3.h>

#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _Collections$3_FieldInfo_[] = {
	{"val$c", "Ljava/util/Collection;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$3, val$c)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<TT;>;", $PRIVATE | $FINAL, $field(Collections$3, i)},
	{}
};

$MethodInfo _Collections$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;)V", "()V", 0, $method(static_cast<void(Collections$3::*)($Collection*)>(&Collections$3::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$3_EnclosingMethodInfo_ = {
	"java.util.Collections",
	"enumeration",
	"(Ljava/util/Collection;)Ljava/util/Enumeration;"
};

$InnerClassInfo _Collections$3_InnerClassesInfo_[] = {
	{"java.util.Collections$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$3",
	"java.lang.Object",
	"java.util.Enumeration",
	_Collections$3_FieldInfo_,
	_Collections$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<TT;>;",
	&_Collections$3_EnclosingMethodInfo_,
	_Collections$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$3($Class* clazz) {
	return $of($alloc(Collections$3));
}

void Collections$3::init$($Collection* val$c) {
	$set(this, val$c, val$c);
	$set(this, i, $nc(this->val$c)->iterator());
}

bool Collections$3::hasMoreElements() {
	return $nc(this->i)->hasNext();
}

$Object* Collections$3::nextElement() {
	return $of($nc(this->i)->next());
}

Collections$3::Collections$3() {
}

$Class* Collections$3::load$($String* name, bool initialize) {
	$loadClass(Collections$3, name, initialize, &_Collections$3_ClassInfo_, allocate$Collections$3);
	return class$;
}

$Class* Collections$3::class$ = nullptr;

	} // util
} // java