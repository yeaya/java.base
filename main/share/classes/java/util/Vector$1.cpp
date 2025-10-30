#include <java/util/Vector$1.h>

#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace util {

$FieldInfo _Vector$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(Vector$1, this$0)},
	{"count", "I", nullptr, 0, $field(Vector$1, count)},
	{}
};

$MethodInfo _Vector$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;)V", nullptr, 0, $method(static_cast<void(Vector$1::*)($Vector*)>(&Vector$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Vector$1_EnclosingMethodInfo_ = {
	"java.util.Vector",
	"elements",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _Vector$1_InnerClassesInfo_[] = {
	{"java.util.Vector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Vector$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Vector$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_Vector$1_FieldInfo_,
	_Vector$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<TE;>;",
	&_Vector$1_EnclosingMethodInfo_,
	_Vector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Vector"
};

$Object* allocate$Vector$1($Class* clazz) {
	return $of($alloc(Vector$1));
}

void Vector$1::init$($Vector* this$0) {
	$set(this, this$0, this$0);
	this->count = 0;
}

bool Vector$1::hasMoreElements() {
	return this->count < this->this$0->elementCount;
}

$Object* Vector$1::nextElement() {
	$synchronized(this->this$0) {
		if (this->count < this->this$0->elementCount) {
			return $of(this->this$0->elementData(this->count++));
		}
	}
	$throwNew($NoSuchElementException, "Vector Enumeration"_s);
}

Vector$1::Vector$1() {
}

$Class* Vector$1::load$($String* name, bool initialize) {
	$loadClass(Vector$1, name, initialize, &_Vector$1_ClassInfo_, allocate$Vector$1);
	return class$;
}

$Class* Vector$1::class$ = nullptr;

	} // util
} // java