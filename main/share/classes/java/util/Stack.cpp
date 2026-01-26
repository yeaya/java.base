#include <java/util/Stack.h>

#include <java/util/EmptyStackException.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace util {

$FieldInfo _Stack_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Stack, serialVersionUID)},
	{}
};

$MethodInfo _Stack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Stack, init$, void)},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(Stack, empty, bool)},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(Stack, peek, $Object*)},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(Stack, pop, $Object*)},
	{"push", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC, $virtualMethod(Stack, push, $Object*, Object$*)},
	{"search", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Stack, search, int32_t, Object$*)},
	{}
};

$ClassInfo _Stack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Stack",
	"java.util.Vector",
	nullptr,
	_Stack_FieldInfo_,
	_Stack_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Vector<TE;>;"
};

$Object* allocate$Stack($Class* clazz) {
	return $of($alloc(Stack));
}

void Stack::init$() {
	$Vector::init$();
}

$Object* Stack::push(Object$* item) {
	addElement(item);
	return $of(item);
}

$Object* Stack::pop() {
	$synchronized(this) {
		$var($Object, obj, nullptr);
		int32_t len = size();
		$assign(obj, peek());
		removeElementAt(len - 1);
		return $of(obj);
	}
}

$Object* Stack::peek() {
	$synchronized(this) {
		int32_t len = size();
		if (len == 0) {
			$throwNew($EmptyStackException);
		}
		return $of(elementAt(len - 1));
	}
}

bool Stack::empty() {
	return size() == 0;
}

int32_t Stack::search(Object$* o) {
	$synchronized(this) {
		int32_t i = lastIndexOf(o);
		if (i >= 0) {
			return size() - i;
		}
		return -1;
	}
}

Stack::Stack() {
}

$Class* Stack::load$($String* name, bool initialize) {
	$loadClass(Stack, name, initialize, &_Stack_ClassInfo_, allocate$Stack);
	return class$;
}

$Class* Stack::class$ = nullptr;

	} // util
} // java