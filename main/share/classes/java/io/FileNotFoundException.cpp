#include <java/io/FileNotFoundException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FileNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _FileNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FileNotFoundException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileNotFoundException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(FileNotFoundException, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _FileNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FileNotFoundException",
	"java.io.IOException",
	nullptr,
	_FileNotFoundException_FieldInfo_,
	_FileNotFoundException_MethodInfo_
};

$Object* allocate$FileNotFoundException($Class* clazz) {
	return $of($alloc(FileNotFoundException));
}

void FileNotFoundException::init$() {
	$IOException::init$();
}

void FileNotFoundException::init$($String* s) {
	$IOException::init$(s);
}

void FileNotFoundException::init$($String* path, $String* reason) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(FileNotFoundException, name, initialize, &_FileNotFoundException_ClassInfo_, allocate$FileNotFoundException);
	return class$;
}

$Class* FileNotFoundException::class$ = nullptr;

	} // io
} // java