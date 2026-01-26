#include <java/net/StandardSocketOptions$StdSocketOption.h>

#include <java/net/StandardSocketOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$FieldInfo _StandardSocketOptions$StdSocketOption_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StandardSocketOptions$StdSocketOption, name$)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(StandardSocketOptions$StdSocketOption, type$)},
	{}
};

$MethodInfo _StandardSocketOptions$StdSocketOption_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<TT;>;)V", 0, $method(StandardSocketOptions$StdSocketOption, init$, void, $String*, $Class*)},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StandardSocketOptions$StdSocketOption, name, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StandardSocketOptions$StdSocketOption, toString, $String*)},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC, $virtualMethod(StandardSocketOptions$StdSocketOption, type, $Class*)},
	{}
};

$InnerClassInfo _StandardSocketOptions$StdSocketOption_InnerClassesInfo_[] = {
	{"java.net.StandardSocketOptions$StdSocketOption", "java.net.StandardSocketOptions", "StdSocketOption", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StandardSocketOptions$StdSocketOption_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.StandardSocketOptions$StdSocketOption",
	"java.lang.Object",
	"java.net.SocketOption",
	_StandardSocketOptions$StdSocketOption_FieldInfo_,
	_StandardSocketOptions$StdSocketOption_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/SocketOption<TT;>;",
	nullptr,
	_StandardSocketOptions$StdSocketOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.StandardSocketOptions"
};

$Object* allocate$StandardSocketOptions$StdSocketOption($Class* clazz) {
	return $of($alloc(StandardSocketOptions$StdSocketOption));
}

void StandardSocketOptions$StdSocketOption::init$($String* name, $Class* type) {
	$set(this, name$, name);
	$set(this, type$, type);
}

$String* StandardSocketOptions$StdSocketOption::name() {
	return this->name$;
}

$Class* StandardSocketOptions$StdSocketOption::type() {
	return this->type$;
}

$String* StandardSocketOptions$StdSocketOption::toString() {
	return this->name$;
}

StandardSocketOptions$StdSocketOption::StandardSocketOptions$StdSocketOption() {
}

$Class* StandardSocketOptions$StdSocketOption::load$($String* name, bool initialize) {
	$loadClass(StandardSocketOptions$StdSocketOption, name, initialize, &_StandardSocketOptions$StdSocketOption_ClassInfo_, allocate$StandardSocketOptions$StdSocketOption);
	return class$;
}

$Class* StandardSocketOptions$StdSocketOption::class$ = nullptr;

	} // net
} // java