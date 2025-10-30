#include <InsertNullString.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;

$MethodInfo _InsertNullString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InsertNullString::*)()>(&InsertNullString::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InsertNullString::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InsertNullString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InsertNullString",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InsertNullString_MethodInfo_
};

$Object* allocate$InsertNullString($Class* clazz) {
	return $of($alloc(InsertNullString));
}

void InsertNullString::init$() {
}

void InsertNullString::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, s, $new($StringBuffer, "FOOBAR"_s));
	try {
		$var($String, nullstr, nullptr);
		s->insert(3, nullstr);
		if (!$nc($(s->toString()))->equals("FOOnullBAR"_s)) {
			$throwNew($Exception, "StringBuffer.insert() did not insert!"_s);
		}
	} catch ($NullPointerException& npe) {
		$throwNew($Exception, "StringBuffer.insert() of null String reference threw a NullPointerException"_s);
	}
}

InsertNullString::InsertNullString() {
}

$Class* InsertNullString::load$($String* name, bool initialize) {
	$loadClass(InsertNullString, name, initialize, &_InsertNullString_ClassInfo_, allocate$InsertNullString);
	return class$;
}

$Class* InsertNullString::class$ = nullptr;