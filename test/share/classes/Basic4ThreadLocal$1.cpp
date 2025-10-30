#include <Basic4ThreadLocal$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$FieldInfo _Basic4ThreadLocal$1_FieldInfo_[] = {
	{"i", "I", nullptr, 0, $field(Basic4ThreadLocal$1, i)},
	{}
};

$MethodInfo _Basic4ThreadLocal$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4ThreadLocal$1::*)()>(&Basic4ThreadLocal$1::init$))},
	{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{}
};

$EnclosingMethodInfo _Basic4ThreadLocal$1_EnclosingMethodInfo_ = {
	"Basic4ThreadLocal",
	nullptr,
	nullptr
};

$InnerClassInfo _Basic4ThreadLocal$1_InnerClassesInfo_[] = {
	{"Basic4ThreadLocal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ThreadLocal$1_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ThreadLocal$1",
	"java.lang.ThreadLocal",
	nullptr,
	_Basic4ThreadLocal$1_FieldInfo_,
	_Basic4ThreadLocal$1_MethodInfo_,
	nullptr,
	&_Basic4ThreadLocal$1_EnclosingMethodInfo_,
	_Basic4ThreadLocal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ThreadLocal"
};

$Object* allocate$Basic4ThreadLocal$1($Class* clazz) {
	return $of($alloc(Basic4ThreadLocal$1));
}

void Basic4ThreadLocal$1::init$() {
	$ThreadLocal::init$();
	this->i = 0;
}

$Object* Basic4ThreadLocal$1::initialValue() {
	$synchronized(this) {
		return $of($new($Integer, this->i++));
	}
}

Basic4ThreadLocal$1::Basic4ThreadLocal$1() {
}

$Class* Basic4ThreadLocal$1::load$($String* name, bool initialize) {
	$loadClass(Basic4ThreadLocal$1, name, initialize, &_Basic4ThreadLocal$1_ClassInfo_, allocate$Basic4ThreadLocal$1);
	return class$;
}

$Class* Basic4ThreadLocal$1::class$ = nullptr;