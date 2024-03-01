normal javascript
//let header = document.querySelector("header");
//header.style.color = "#FF0000";

jquery syntax
//let header = $("header");
//header.css("color", "#FF0000");


//let red_header = $("red_header");
//let header = $("header");
//red_header.click(function() {
//    header.css("color", "#FF0000");
//});



//let red_header = $("red_header");
//let header = $("header");
//red_header.click(function() {
//    header.addClass("red");
//});



let toggle_header = $("toggle_header");
let header = $("header");
toggle_header.click(function() {
    if (header.hasClass("red")) {
        header.removeClass("red").addClass("green");}
    else header.removeClass("green").addClass("red");
});
    header.toggleClass("red, green")
