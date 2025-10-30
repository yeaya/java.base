#include <NullConstruct.h>

#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _NullConstruct_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullConstruct::*)()>(&NullConstruct::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullConstruct::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NullConstruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullConstruct",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullConstruct_MethodInfo_
};

$Object* allocate$NullConstruct($Class* clazz) {
	return $of($alloc(NullConstruct));
}

void NullConstruct::init$() {
}

void NullConstruct::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Reader, in, nullptr);
		$var($StreamTokenizer, st, $new($StreamTokenizer, in));
		$throwNew($Exception, "Failed test: constructor didn\'t catch null input"_s);
	} catch ($NullPointerException& e) {
	}
}

NullConstruct::NullConstruct() {
}

$Class* NullConstruct::load$($String* name, bool initialize) {
	$loadClass(NullConstruct, name, initialize, &_NullConstruct_ClassInfo_, allocate$NullConstruct);
	return class$;
}

$Class* NullConstruct::class$ = nullptr;