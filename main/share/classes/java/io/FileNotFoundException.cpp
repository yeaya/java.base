#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void FileNotFoundException::init$() {
	$IOException::init$();
}

void FileNotFoundException::init$($String* s) {
	$IOException::init$(s);
}

void FileNotFoundException::init$($String* path, $String* reason) {
	$useLocalObjectStack();
	$IOException::init$($$str({path, ((reason == nullptr) ? ""_s : $$str({" ("_s, reason, ")"_s}))}));
}

FileNotFoundException::FileNotFoundException() {
}

FileNotFoundException::FileNotFoundException(const FileNotFoundException& e) : $IOException(e) {
}

void FileNotFoundException::throw$() {
	throw *this;
}

$Class* FileNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileNotFoundException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(FileNotFoundException, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.FileNotFoundException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileNotFoundException);
	});
	return class$;
}

$Class* FileNotFoundException::class$ = nullptr;

	} // io
} // java