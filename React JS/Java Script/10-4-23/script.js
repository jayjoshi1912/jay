function vailddata(e,spnid)
{
    if(e.value == "")
    {
        document.getElementById(spnid).style.color="red";
        document.getElementById(spnid).innerHTML ="please enter data";
    }
}

function alpha(e,spnid)
{
    let name = /^[a-zA-Z]+$/
    if(name.test(e.value))
    {
        document.getElementById(spnid).innerHTML ="";
    }
    else{
        document.getElementById(spnid).innerHTML ="please enter char only...!";
        document.getElementById(spnid).style.color="red";
    }
}

function emailcheck(e,spnid)
{
    let email = /^([a-z0-9._-]+@([a-z0-9._-])+\.([a-z]{2,3}))$/

    if(email.test(e.value))
    {
        document.getElementById(spnid).innerHTML ="";
    }
    else{
        document.getElementById(spnid).innerHTML ="please enter vaild email";
        document.getElementById(spnid).style.color="red";
    }

}

function pwscheck(e,spnid)
{
    let password = /^[a-zA-Z0-9]{3,5}$/

    if(password.test(e.value))
    {
        document.getElementById(spnid).innerHTML ="";
    }
    else{
        document.getElementById(spnid).innerHTML ="please enter vaild password";
        document.getElementById(spnid).style.color="red";
    }
}

function mobilicheck(e,spnid)
{
    let mb = /^[0-9]{9}$/

    if(mb.test(e.value))
    {
        document.getElementById(spnid).innerHTML ="";
    }
    else{
        document.getElementById(spnid).innerHTML ="please enter vaild phone number";
        document.getElementById(spnid).style.color="red";
    }
}

