var express = require("express"),
 http = require("http"),
 app = express();
// set up a static file directory to use for default routing
// also see the note below about Windows

    todo=

        { 
        };

app.use(express.static(__dirname + "/Client"));
// Create our Express-powered HTTP server
http.createServer(app).listen(3000);
// set up our routes
app.get("tasks.json", function (req, res) {
 res.json(todo);
});
app.post("/todos", function (req, res) {
    console.log("data has been posted to the server!");
    // send back a simple object
    res.json({"message":"You posted to the server!"});
});
   

