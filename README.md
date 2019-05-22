# simple-C-C-Logger  
A simple and minimal C/C++ Logger.  

## Properties

* Log Errors, Warnings, Info and details in different colors.
* You can set the log level so that some/all logs are disabled and totally ommited from output binaries by macros.
* For wanings and errors, it outputs filename and lineNumber of the error/warning.

## Usage

#### 1. Include simpleLogger.h in your project

Copy simpleLogger.h to your project or just copy the content of it somewhere in your code.

#### 2. (optinal) Set log level

Set log level by assigning values to LOG_LEVEL definition (in simpleLogger.h line ~19)

If it is set to `LOG_LEVEL_PRODUCTION` it won't log anything and keep your binary minimal.  
If it is set to `LOG_LEVEL_LOG_DETAIL` it will log everything.  

Possible values are defined just below of `LOG_LEVEL` and they are pretty much self explanatory.

#### 2. Use functions as you would use printf()

**Examples:**

    logError("Someting wrong happened. Error no :%d", errNo);
    logWarning("Unexpected length (Expected: %d, read:%d)", length, read);
    logInfo("Here is some info");
    logDetail("Read data %c", c);

