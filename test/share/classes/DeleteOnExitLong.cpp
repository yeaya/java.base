#include <DeleteOnExitLong.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DeleteOnExitLong::init$() {
}

void DeleteOnExitLong::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, file, $$new($File, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_DeletedOnExitLong"_s)->getCanonicalFile());
	$nc(file)->createNewFile();
	file->deleteOnExit();
}

DeleteOnExitLong::DeleteOnExitLong() {
}

$Class* DeleteOnExitLong::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeleteOnExitLong, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteOnExitLong, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DeleteOnExitLong",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DeleteOnExitLong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteOnExitLong);
	});
	return class$;
}

$Class* DeleteOnExitLong::class$ = nullptr;