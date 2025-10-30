#include <sun/security/util/ConsoleCallbackHandler.h>

#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/NumberFormatException.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/ConfirmationCallback.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/TextOutputCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <sun/security/util/ConsoleCallbackHandler$1OptionInfo.h>
#include <sun/security/util/Password.h>
#include <jcpp.h>

#undef CANCEL
#undef ERROR
#undef INFORMATION
#undef NO
#undef OK
#undef OK_CANCEL_OPTION
#undef UNSPECIFIED_OPTION
#undef WARNING
#undef YES
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $ConsoleCallbackHandler$1OptionInfoArray = $Array<::sun::security::util::ConsoleCallbackHandler$1OptionInfo>;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $ConfirmationCallback = ::javax::security::auth::callback::ConfirmationCallback;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextOutputCallback = ::javax::security::auth::callback::TextOutputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $ConsoleCallbackHandler$1OptionInfo = ::sun::security::util::ConsoleCallbackHandler$1OptionInfo;
using $Password = ::sun::security::util::Password;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _ConsoleCallbackHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConsoleCallbackHandler::*)()>(&ConsoleCallbackHandler::init$))},
	{"doConfirmation", "(Ljavax/security/auth/callback/ConfirmationCallback;)V", nullptr, $PRIVATE, $method(static_cast<void(ConsoleCallbackHandler::*)($ConfirmationCallback*)>(&ConsoleCallbackHandler::doConfirmation)), "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ConsoleCallbackHandler::*)()>(&ConsoleCallbackHandler::readLine)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ConsoleCallbackHandler_InnerClassesInfo_[] = {
	{"sun.security.util.ConsoleCallbackHandler$1OptionInfo", nullptr, "OptionInfo", 0},
	{}
};

$ClassInfo _ConsoleCallbackHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ConsoleCallbackHandler",
	"java.lang.Object",
	"javax.security.auth.callback.CallbackHandler",
	nullptr,
	_ConsoleCallbackHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ConsoleCallbackHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.ConsoleCallbackHandler$1OptionInfo"
};

$Object* allocate$ConsoleCallbackHandler($Class* clazz) {
	return $of($alloc(ConsoleCallbackHandler));
}

void ConsoleCallbackHandler::init$() {
}

void ConsoleCallbackHandler::handle($CallbackArray* callbacks) {
	$useLocalCurrentObjectStackCache();
	$var($ConfirmationCallback, confirmation, nullptr);
	for (int32_t i = 0; i < $nc(callbacks)->length; ++i) {
		if ($instanceOf($TextOutputCallback, callbacks->get(i))) {
			$var($TextOutputCallback, tc, $cast($TextOutputCallback, callbacks->get(i)));
			$var($String, text, nullptr);
			switch ($nc(tc)->getMessageType()) {
			case $TextOutputCallback::INFORMATION:
				{
					$assign(text, ""_s);
					break;
				}
			case $TextOutputCallback::WARNING:
				{
					$assign(text, "Warning: "_s);
					break;
				}
			case $TextOutputCallback::ERROR:
				{
					$assign(text, "Error: "_s);
					break;
				}
			default:
				{
					$throwNew($UnsupportedCallbackException, callbacks->get(i), "Unrecognized message type"_s);
				}
			}
			$var($String, message, tc->getMessage());
			if (message != nullptr) {
				$plusAssign(text, message);
			}
			if (text != nullptr) {
				$nc($System::err)->println(text);
			}
		} else if ($instanceOf($NameCallback, callbacks->get(i))) {
			$var($NameCallback, nc, $cast($NameCallback, callbacks->get(i)));
			if ($nc(nc)->getDefaultName() == nullptr) {
				$nc($System::err)->print($(nc->getPrompt()));
			} else {
				$var($String, var$1, $$str({$(nc->getPrompt()), " ["_s}));
				$var($String, var$0, $$concat(var$1, $(nc->getDefaultName())));
				$nc($System::err)->print($$concat(var$0, "] "));
			}
			$nc($System::err)->flush();
			$var($String, result, readLine());
			if ($nc(result)->isEmpty()) {
				$assign(result, $nc(nc)->getDefaultName());
			}
			$nc(nc)->setName(result);
		} else if ($instanceOf($PasswordCallback, callbacks->get(i))) {
			$var($PasswordCallback, pc, $cast($PasswordCallback, callbacks->get(i)));
			$nc($System::err)->print($($nc(pc)->getPrompt()));
			$nc($System::err)->flush();
			$nc(pc)->setPassword($($Password::readPassword($System::in, pc->isEchoOn())));
		} else if ($instanceOf($ConfirmationCallback, callbacks->get(i))) {
			$assign(confirmation, $cast($ConfirmationCallback, callbacks->get(i)));
		} else {
			$throwNew($UnsupportedCallbackException, callbacks->get(i), "Unrecognized Callback"_s);
		}
	}
	if (confirmation != nullptr) {
		doConfirmation(confirmation);
	}
}

$String* ConsoleCallbackHandler::readLine() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, $$new($BufferedReader, $$new($InputStreamReader, $System::in))->readLine());
	if (result == nullptr) {
		$throwNew($IOException, "Cannot read from System.in"_s);
	}
	return result;
}

void ConsoleCallbackHandler::doConfirmation($ConfirmationCallback* confirmation) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	int32_t messageType = $nc(confirmation)->getMessageType();
	switch (messageType) {
	case $ConfirmationCallback::WARNING:
		{
			$assign(prefix, "Warning: "_s);
			break;
		}
	case $ConfirmationCallback::ERROR:
		{
			$assign(prefix, "Error: "_s);
			break;
		}
	case $ConfirmationCallback::INFORMATION:
		{
			$assign(prefix, ""_s);
			break;
		}
	default:
		{
			$throwNew($UnsupportedCallbackException, confirmation, $$str({"Unrecognized message type: "_s, $$str(messageType)}));
		}
	}
	{
	}
	$var($ConsoleCallbackHandler$1OptionInfoArray, options, nullptr);
	int32_t optionType = confirmation->getOptionType();
	{
		$var($StringArray, optionStrings, nullptr)
		switch (optionType) {
		case $ConfirmationCallback::YES_NO_OPTION:
			{
				$assign(options, $new($ConsoleCallbackHandler$1OptionInfoArray, {
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "Yes"_s, $ConfirmationCallback::YES),
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "No"_s, $ConfirmationCallback::NO)
				}));
				break;
			}
		case $ConfirmationCallback::YES_NO_CANCEL_OPTION:
			{
				$assign(options, $new($ConsoleCallbackHandler$1OptionInfoArray, {
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "Yes"_s, $ConfirmationCallback::YES),
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "No"_s, $ConfirmationCallback::NO),
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "Cancel"_s, $ConfirmationCallback::CANCEL)
				}));
				break;
			}
		case $ConfirmationCallback::OK_CANCEL_OPTION:
			{
				$assign(options, $new($ConsoleCallbackHandler$1OptionInfoArray, {
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "OK"_s, $ConfirmationCallback::OK),
					$$new($ConsoleCallbackHandler$1OptionInfo, this, "Cancel"_s, $ConfirmationCallback::CANCEL)
				}));
				break;
			}
		case $ConfirmationCallback::UNSPECIFIED_OPTION:
			{
				$assign(optionStrings, confirmation->getOptions());
				$assign(options, $new($ConsoleCallbackHandler$1OptionInfoArray, $nc(optionStrings)->length));
				for (int32_t i = 0; i < $nc(options)->length; ++i) {
					options->set(i, $$new($ConsoleCallbackHandler$1OptionInfo, this, $nc(optionStrings)->get(i), i));
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedCallbackException, confirmation, $$str({"Unrecognized option type: "_s, $$str(optionType)}));
			}
		}
	}
	int32_t defaultOption = confirmation->getDefaultOption();
	$var($String, prompt, confirmation->getPrompt());
	if (prompt == nullptr) {
		$assign(prompt, ""_s);
	}
	$assign(prompt, $str({prefix, prompt}));
	if (!$nc(prompt)->isEmpty()) {
		$nc($System::err)->println(prompt);
	}
	for (int32_t i = 0; i < $nc(options)->length; ++i) {
		if (optionType == $ConfirmationCallback::UNSPECIFIED_OPTION) {
			$nc($System::err)->println($$str({$$str(i), ". "_s, $nc(options->get(i))->name, (i == defaultOption ? " [default]"_s : ""_s)}));
		} else {
			$nc($System::err)->println($$str({$$str(i), ". "_s, $nc(options->get(i))->name, ($nc(options->get(i))->value == defaultOption ? " [default]"_s : ""_s)}));
		}
	}
	$nc($System::err)->print("Enter a number: "_s);
	$nc($System::err)->flush();
	int32_t result = 0;
	try {
		result = $Integer::parseInt($(readLine()));
		if (result < 0 || result > ($nc(options)->length - 1)) {
			result = defaultOption;
		} else {
			result = $nc(options->get(result))->value;
		}
	} catch ($NumberFormatException& e) {
		result = defaultOption;
	}
	confirmation->setSelectedIndex(result);
}

ConsoleCallbackHandler::ConsoleCallbackHandler() {
}

$Class* ConsoleCallbackHandler::load$($String* name, bool initialize) {
	$loadClass(ConsoleCallbackHandler, name, initialize, &_ConsoleCallbackHandler_ClassInfo_, allocate$ConsoleCallbackHandler);
	return class$;
}

$Class* ConsoleCallbackHandler::class$ = nullptr;

		} // util
	} // security
} // sun