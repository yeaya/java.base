#include <DeleteOnExitLong.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DeleteOnExitLong_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeleteOnExitLong::*)()>(&DeleteOnExitLong::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeleteOnExitLong::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DeleteOnExitLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeleteOnExitLong",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DeleteOnExitLong_MethodInfo_
};

$Object* allocate$DeleteOnExitLong($Class* clazz) {
	return $of($alloc(DeleteOnExitLong));
}

void DeleteOnExitLong::init$() {
}

void DeleteOnExitLong::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, $$new($File, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_DeletedOnExitLong"_s)->getCanonicalFile());
	$nc(file)->createNewFile();
	file->deleteOnExit();
}

DeleteOnExitLong::DeleteOnExitLong() {
}

$Class* DeleteOnExitLong::load$($String* name, bool initialize) {
	$loadClass(DeleteOnExitLong, name, initialize, &_DeleteOnExitLong_ClassInfo_, allocate$DeleteOnExitLong);
	return class$;
}

$Class* DeleteOnExitLong::class$ = nullptr;