*** Settings ***
Library	    OperatingSystem

*** Variables ***
${MYSCRIPT}     helloworld.py

*** Test Cases ***
Hello World
    Given Have the script   ${MYSCRIPT}
    ${StandardOut} =  When Executing  ${MYSCRIPT}
    Then Should Be Equal    ${StandardOut}     Hello World

*** Keywords ***
Have the script
    [Arguments]     ${FilePath}
    File Should Exist   ${FilePath}

Executing
    [Arguments]     ${FilePath}
    ${output} =     Run     python ${FilePath}
    Return From Keyword   ${output}
