#include <jdk/internal/jimage/decompressor/SignatureParser.h>

#include <java/util/List.h>
#include <jdk/internal/jimage/decompressor/SignatureParser$ParseResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SignatureParser$ParseResult = ::jdk::internal::jimage::decompressor::SignatureParser$ParseResult;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$MethodInfo _SignatureParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureParser::*)()>(&SignatureParser::init$))},
	{"parseSignatureDescriptor", "(Ljava/lang/String;)Ljdk/internal/jimage/decompressor/SignatureParser$ParseResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SignatureParser$ParseResult*(*)($String*)>(&SignatureParser::parseSignatureDescriptor))},
	{"reconstruct", "(Ljava/lang/String;Ljava/util/List;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$List*)>(&SignatureParser::reconstruct))},
	{}
};

$InnerClassInfo _SignatureParser_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.decompressor.SignatureParser$ParseResult", "jdk.internal.jimage.decompressor.SignatureParser", "ParseResult", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.SignatureParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SignatureParser_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.decompressor.SignatureParser$ParseResult"
};

$Object* allocate$SignatureParser($Class* clazz) {
	return $of($alloc(SignatureParser));
}

void SignatureParser::init$() {
}

$String* SignatureParser::reconstruct($String* formatted, $List* arguments) {
	$useLocalCurrentObjectStackCache();
	int32_t arg_index = 0;
	$var($chars, chars, $nc(formatted)->toCharArray());
	$var($StringBuilder, out, $new($StringBuilder));
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		out->append(c);
		switch (c) {
		case u'L':
			{
				{
					$var($String, pkg, $cast($String, $nc(arguments)->get(arg_index)));
					if (!$nc(pkg)->isEmpty()) {
						out->append(pkg)->append("/"_s);
					}
					arg_index += 1;
					out->append($cast($String, $(arguments->get(arg_index))));
					arg_index += 1;
					break;
				}
			}
		default:
			{
				{
					break;
				}
			}
		}
	}
	return out->toString();
}

$SignatureParser$ParseResult* SignatureParser::parseSignatureDescriptor($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($SignatureParser$ParseResult, res, $new($SignatureParser$ParseResult));
	$var($chars, chars, $nc(str)->toCharArray());
	$var($StringBuilder, type, nullptr);
	$var($StringBuilder, formatted, $new($StringBuilder));
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		switch (c) {
		case u';':
			{}
		case u':':
			{}
		case u'<':
			{
				{
					if (type != nullptr) {
						$var($String, fullName, type->toString());
						int32_t endIndex = $nc(fullName)->lastIndexOf("/"_s);
						$var($String, clazz, fullName);
						$var($String, pkg, ""_s);
						if (endIndex != -1) {
							$assign(pkg, fullName->substring(0, endIndex));
							$assign(clazz, fullName->substring(endIndex + 1));
						}
						$nc(res->types)->add(pkg);
						$nc(res->types)->add(clazz);
					}
					formatted->append(c);
					$assign(type, nullptr);
					break;
				}
			}
		case u'L':
			{
				{
					if (type == nullptr) {
						$assign(type, $new($StringBuilder));
						formatted->append(c);
					} else {
						$nc(type)->append(c);
					}
					break;
				}
			}
		default:
			{
				{
					if (type == nullptr) {
						formatted->append(c);
					} else {
						$nc(type)->append(c);
					}
					break;
				}
			}
		}
	}
	$set(res, formatted, formatted->toString());
	return res;
}

SignatureParser::SignatureParser() {
}

$Class* SignatureParser::load$($String* name, bool initialize) {
	$loadClass(SignatureParser, name, initialize, &_SignatureParser_ClassInfo_, allocate$SignatureParser);
	return class$;
}

$Class* SignatureParser::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk