#include <sun/net/www/HeaderParser$ParserIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <sun/net/www/HeaderParser.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $HeaderParser = ::sun::net::www::HeaderParser;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _HeaderParser$ParserIterator_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/HeaderParser;", nullptr, $FINAL | $SYNTHETIC, $field(HeaderParser$ParserIterator, this$0)},
	{"index", "I", nullptr, 0, $field(HeaderParser$ParserIterator, index)},
	{"returnsValue", "Z", nullptr, 0, $field(HeaderParser$ParserIterator, returnsValue)},
	{}
};

$MethodInfo _HeaderParser$ParserIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/HeaderParser;Z)V", nullptr, 0, $method(static_cast<void(HeaderParser$ParserIterator::*)($HeaderParser*,bool)>(&HeaderParser$ParserIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HeaderParser$ParserIterator_InnerClassesInfo_[] = {
	{"sun.net.www.HeaderParser$ParserIterator", "sun.net.www.HeaderParser", "ParserIterator", 0},
	{}
};

$ClassInfo _HeaderParser$ParserIterator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.HeaderParser$ParserIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_HeaderParser$ParserIterator_FieldInfo_,
	_HeaderParser$ParserIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	nullptr,
	_HeaderParser$ParserIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.HeaderParser"
};

$Object* allocate$HeaderParser$ParserIterator($Class* clazz) {
	return $of($alloc(HeaderParser$ParserIterator));
}

void HeaderParser$ParserIterator::init$($HeaderParser* this$0, bool returnValue) {
	$set(this, this$0, this$0);
	this->returnsValue = returnValue;
}

bool HeaderParser$ParserIterator::hasNext() {
	return this->index < this->this$0->nkeys;
}

$Object* HeaderParser$ParserIterator::next() {
	return $of($nc($nc(this->this$0->tab)->get(this->index++))->get(this->returnsValue ? 1 : 0));
}

void HeaderParser$ParserIterator::remove() {
	$throwNew($UnsupportedOperationException, "remove not supported"_s);
}

HeaderParser$ParserIterator::HeaderParser$ParserIterator() {
}

$Class* HeaderParser$ParserIterator::load$($String* name, bool initialize) {
	$loadClass(HeaderParser$ParserIterator, name, initialize, &_HeaderParser$ParserIterator_ClassInfo_, allocate$HeaderParser$ParserIterator);
	return class$;
}

$Class* HeaderParser$ParserIterator::class$ = nullptr;

		} // www
	} // net
} // sun