#include <java/io/WriteAbortedException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace io {

void WriteAbortedException::init$($String* s, $Exception* ex) {
	$ObjectStreamException::init$(s);
	initCause(nullptr);
	$set(this, detail, ex);
}

$String* WriteAbortedException::getMessage() {
	$useLocalObjectStack();
	if (this->detail == nullptr) {
		return $ObjectStreamException::getMessage();
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($ObjectStreamException::getMessage()));
		var$0->append("; "_s);
		var$0->append($(this->detail->toString()));
		return $str(var$0);
	}
}

$Throwable* WriteAbortedException::getCause() {
	return this->detail;
}

WriteAbortedException::WriteAbortedException() {
}

WriteAbortedException::WriteAbortedException(const WriteAbortedException& e) : $ObjectStreamException(e) {
}

void WriteAbortedException::throw$() {
	throw *this;
}

$Class* WriteAbortedException::load$($String* name, bool initialize) {
	$NamedAttribute detailfieldAnnotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{}
	};
	$CompoundAttribute detailfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", detailfieldAnnotations$$$namedAttribute},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WriteAbortedException, serialVersionUID)},
		{"detail", "Ljava/lang/Exception;", nullptr, $PUBLIC | $DEPRECATED, $field(WriteAbortedException, detail), detailfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(WriteAbortedException, init$, void, $String*, $Exception*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(WriteAbortedException, getCause, $Throwable*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WriteAbortedException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.WriteAbortedException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WriteAbortedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WriteAbortedException);
	});
	return class$;
}

$Class* WriteAbortedException::class$ = nullptr;

	} // io
} // java