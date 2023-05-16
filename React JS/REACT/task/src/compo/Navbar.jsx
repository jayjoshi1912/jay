import React, { Component } from 'react';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link,
  } from "react-router-dom";
  
import Home from './1Home';
import About from './About';
import Active from './active';
import State from './state';
class Navbar extends Component {
    render() {

        const main = {'/Home':'Home','/About':'About','/active':'Active',"/state":'State'}
        const Alldata=Object.entries(main).map((res)=>{
            console.log(res);
            return <li className="nav-item">
            <Link className="nav-link active" to={res[0]}>{res[1]}</Link>
        </li>
            
        })
        return (
            <div>
                <Router>
            <nav className="navbar navbar-expand-sm bg-primary navbar-light">
            <div className="container-fluid">
                <ul className="navbar-nav">
                {Alldata}
                </ul>
            </div>
            </nav>
            <Routes>
                <Route path='/Home' element={<Home/>}/>
                <Route path='/About' element={<About/>}/>
                <Route path='/act' element={<Active/>}/>
                <Route path='/state' element={<State/>}/>
            </Routes>
            </Router>
            

            </div>
        );
    }
}

export default Navbar;